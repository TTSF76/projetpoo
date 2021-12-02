<h1 align="center">Projet CESI: Delivery Manager</h1>

## Présentation
Delivery Manager est une application de gestion de base de données pour une nouvelle entreprise.<br>
Elle permet de gérer:<br><br>

- Clients
	- L'*employé* pourra visualiser, créer, modifier et supprimer des **clients**
- Personnel
	- Le *manager* pourra visualiser, créer, modifier et supprimer un membre du **personnel**
	- Cette base est accessible **seulement** par des supérieurs hiérarchiques (*manager*)
- Commandes
	- L'*employé* pourra visualiser, créer, modifier et supprimer des **commandes**
- Stock
	- L'*employé* pourra visualiser, créer, modifier et supprimer des éléments du **stock**
- Statistiques
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

Cette commande permet de visualiser la valeur moyenne des paniers des clients (en €).

#### Requête

```sql
CREATE PROCEDURE panierMoyen
AS
SELECT AVG(total_ttc)
FROM commande
GO
```

#### Réponse-type

```
Panier moyen :
350 €
```

### Calculer le chiffre d'affaire sur un mois en particuler

Cette commande permet de visualiser le chiffre d'affaire de l'entreprise sur un mois et année en particulier choisi par l'employé.

#### Requête

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

#### Réponse-type

```
Chiffre d'Affaire :
1400 €
```

### Identifier les produits sous le seuil de réapprovisionnement

Cette commande permet de visualiser tous les produits qui devront être restocker par l'entreprise.
Les valeurs renvoyées correspondent à la référence de l'article.

#### Requête

```sql
CREATE PROCEDURE restocker
AS
SELECT *
FROM article
WHERE stock_article < seuil_reapprovisionnement
GO
```

#### Réponse-type

```
Restocker :
14
29
```

### Calculer le montant total des achats pour un client

Cette commande permet de visualiser le montant total (en €) du panier d'un client sélectionné par l'employé.

#### Requête

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

#### Réponse-type

```
Montant Total:
1400 €
```

### Identifier les 10 articles les plus vendus

Cette commande permet d'identifier les id des 10 produits les moins vendus, afin d'envisager par exemple d'augmenter les stocks de ces produits pour augmenter les recettes.

#### Requête

```sql
CREATE PROCEDURE plusVendus
AS
SELECT TOP (10) contenir.ref_article, nom_article, SUM(quantite_article) as quantite
FROM contenir
INNER JOIN article ON contenir.ref_article = article.ref_article
GROUP BY contenir.ref_article, nom_article
ORDER BY quantite DESC
GO
```

#### Réponse-type

```
Plus Vendus :
23 Micplottor    84
35 Cleanjectader 78
1  Monofindoller 64
15 Subwoofgaer   41
5  Contopedgor   32
12 Miclifiedgor  24
2  Cleantopefon  19
27 Readpickor    9
17 Tablifior     7
48 Mictopepor    7
```

### Identifier les 10 articles les moins vendus

Cette commande permet d'indentifier les id des 10 articles les moins vendus, afin d'éventuellement envisager une modification sur leur prix par exemple.

#### Requête

```sql
CREATE PROCEDURE moinsVendus
AS
SELECT TOP (10) contenir.ref_article, nom_article, SUM(quantite_article) as quantite
FROM contenir
INNER JOIN article ON contenir.ref_article = article.ref_article
GROUP BY contenir.ref_article, nom_article
ORDER BY quantite ASC
GO
```

#### Réponse-type

```
Moins Vendus :
25 Speaktaoller  2
45 Armputphone   4
32 Printculentor 6
17 Tablifior     7
48 Mictopepor    7
27 Readpickor    9
2  Cleantopefon  19
12 Miclifiedgor  24
5  Contopedgor   32
15 Subwoofgaer   41
```

### Calculer la valeur commerciale du stock (sans variables)

Cette commande permet de calculer l'argent que vaut tout le stock de l'entreprise

```sql
CREATE PROCEDURE prixCommercial as
SELECT SUM(prix_article_ht*stock_article) from article
GO
```

#### Réponse-type

```
Variation commerciale : 
147714163 €
```

### Calculer la valeur d'achat du stock

Cette commande permet de calculer le prix auquel l'entièreté du stock à été acheté

```sql
CREATE PROCEDURE prixAchat
AS
SELECT SUM((prix_article_ht * (1 + taux_tva / 100)) * (1 - remise_article / 100) * stock_article)
FROM article
GO
```

#### Réponse-type

```
Valeur d'achat : 
140475544 €
```

### Calculer la variation commerciale du stock (avec variables)

Cette commande effectue la même action que la commande de la valeur commerciale, avec une tva, une marge, une remise et une démarque modifiables au besoin <br>
Elle prendre en argument un mode de tva (1,2 ou 3), puis des valeurs pour les valeurs restantes.

#### Requête

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
#### Réponse-type

```
Variation commerciale : 
159594149 €
```
