<h1 align="center">Projet CESI: Delivery Manager</h1>

## Présentation
Delivery Manager est une application de gestion de base de données pour une nouvelle entreprise.<br>
Elle permet de gérer:<br><br>

+ Clients
	- L'*employé* pourra visualiser, créer, modifier et supprimer des **clients**
+ Personnel
	- Le *manager* pourra visualiser, créer, modifier et supprimer un membre du **personnel**
	- Cette base est accessible **seulement** par des supérieurs hiérarchiques (*manager*)
+ Commandes
	- L'*employé* pourra visualiser, créer, modifier et supprimer des **commandes**
+ Stock
	- L'*employé* pourra visualiser, créer, modifier et supprimer des éléments du **stock**
+ Statistiques
	- L'*employé* pourra effectuer des commandes qui interrogeront la base de données
		- Calculer le panier moyen
		- Calculer le chiffre d'affaire sur un mois en particulier
		- Identifier les produits sous le seuil de réapprovisionnement
		- Calculer le montant total des achats pour un client
		- Identifier les 10 articles les plus vendus
		- Identifier les 10 articles les moins vendus
		- Calculer la valeur commerciale du stock
		- Calculer la valeur d'achat du stock
		- Calculer la valeur commerciale du stock (avec variables)

## Guide d'utilisation


## Statistiques
### Calculer le panier moyen
#### Requête

```sql
CREATE PROCEDURE panierMoyen
AS
SELECT AVG(total_ttc)
FROM commande
GO
```

#### Réponse-type

`Panier moyen: 1181.3€`

### Calculer le chiffre d'affaire sur un mois en particuler

```sql
CREATE PROCEDURE chiffreAffaire @annee int, @mois int
AS
SELECT SUM(total_ttc)
FROM commande
INNER JOIN facturation ON commande.id_facturation = facturation.id_facturation
WHERE
	MONTH(date_paiement) = @mois AND 
	YEAR(date_paiement) = @annee
GO
```

### Identifier les produits sous le seuil de réapprovisionnement

```sql
CREATE PROCEDURE restocker
AS
SELECT *
FROM article
WHERE stock_article < seuil_reapprovisionnement
GO
```

### Calculer le montant total des achats pour un client

```sql
CREATE PROCEDURE montantTotal @clientId int
AS
SELECT SUM(total_ttc) AS total_ttc
FROM commande
JOIN facturation ON commande.id_facturation = facturation.id_facturation
JOIN client ON commande.id_client = client.id_client
WHERE client.id_client = @clientId
GO
```

### Identifier les 10 articles les plus vendus

```sql
CREATE PROCEDURE plusVendus
AS
SELECT TOP (10) ref_article, SUM(quantite_article) as quantite
FROM contenir
GROUP BY ref_article
ORDER BY quantite DESC
GO
```

### Identifier les 10 articles les moins vendus

```sql
CREATE PROCEDURE moinsVendus
AS
SELECT TOP (10) ref_article, SUM(quantite_article) as quantite
FROM contenir
GROUP BY ref_article
ORDER BY quantite ASC
GO
```

### Calculer la valeur commerciale du stock

```sql
CREATE PROCEDURE prixCommercial as
SELECT SUM(prix_article_ht*stock_article) from article
GO
```

### Calculer la valeur d'achat du stock

```sql
CREATE PROCEDURE prixAchat
AS
SELECT SUM((prix_article_ht * (1 + taux_tva / 100)) * (1 - remise_article / 100) * stock_article)
FROM article
GO
```

### Calculer la valeur commerciale du stock (avec variables)

```sql
CREATE PROCEDURE varCommerciale @tva int, @marge int, @remise int, @demarche int
AS
DECLARE @prix float, @tva2 float, @marge2 float, @remise2 float, @demarche2 float
SELECT @marge2 = @marge, @remise2 = @remise, @demarche2 = @demarche
SELECT @prix = SUM(prix_article_ht * stock_article)
FROM article
IF @tva = 1 SET @tva2 = 5.5
ELSE IF @tva = 2 SET @tva2 = 10
ELSE IF @tva = 3 SET @tva2 = 20
SET @prix = @prix * (1 + @tva2 / 100)
SET @prix = @prix * (1 + @marge2 /100)
SET @prix = @prix * (1 - @remise2 / 100)
SET @prix = @prix * (1 - @demarche2 / 100)
SELECT @prix AS valeur
GO
```
