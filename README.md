<h1 align="center">Projet CESI: Delivery Manager [Equipe 6]</h1>

## Somaire

- [Présentation du projet](#Présentation)
	- [Les langages et outils que nous avons utilisé](#Langages-et-Outils-utilisés)
- [Guide d'utilisation](#Guide-d'utilisation)
- [Gestion des statistiques](#Statistiques)
	- [Panier moyen](#Calculer-le-panier-moyen)
	- [Chiffre d'affaire](#Calculer-le-chiffre-d'affaire-sur-un-mois-en-particuler)
	- [Produits sous le seuil](#Identifier-les-produits-sous-le-seuil-de-réapprovisionnement)
	- [Montant total d'un client](#Calculer-le-montant-total-des-achats-pour-un-client)
	- [Dix articles les plus vendus](#Identifier-les-10-articles-les-plus-vendus)
	- [Dix articles les moins vendus](#Identifier-les-10-articles-les-moins-vendus)
	- [Valeur commerciale du stock (sans variables)](#Calculer-la-valeur-commerciale-du-stock-(sans-variables))
	- [Valeur d'achat du stock](#Calculer-la-valeur-d'achat-du-stock)
	- [Valeur commerciale du stock (avec variables)](#Calculer-la-variation-commerciale-du-stock-(avec-variables))


## Présentation
**Delivery Manager** est une application de gestion de base de données pour une nouvelle entreprise. Cette dernière nous a contacté afin de concrétiser l'application.

Ce projet est mené par **Fabien RIBES**, **Talla DIOP**, **Tristan JEHANNO** et **Samuel WARD**.



Elle permet de gérer:


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

### Langages et Outils utilisés

<a href="https://www.w3schools.com/cpp/" target="_blank" rel="noreferrer"> <img src="https://raw.githubusercontent.com/devicons/devicon/master/icons/cplusplus/cplusplus-original.svg" alt="cplusplus" width="40" height="40"/></a>
<a href="https://dotnet.microsoft.com/" target="_blank" rel="noreferrer"> <img src="https://raw.githubusercontent.com/devicons/devicon/master/icons/dot-net/dot-net-original-wordmark.svg" alt="dotnet" width="40" height="40"/></a>
<a href="https://www.microsoft.com/en-us/sql-server" target="_blank" rel="noreferrer"> <img src="https://www.svgrepo.com/show/303229/microsoft-sql-server-logo.svg" alt="mssql" width="40" height="40"/></a>
<a href="https://visualstudio.microsoft.com/" target="_blank" rel="noreferrer"> <img src="https://www.svgrepo.com/show/354520/visual-studio.svg" alt="Visual Studio" width="40" height="40"/></a>
<a href="https://code.visualstudio.com" target="_blank" rel="noreferrer"> <img src="https://www.svgrepo.com/show/354522/visual-studio-code.svg" alt="Visual Studio Code" width="40" height="40"></a>
<a href=""></a>

## Guide d'utilisation

Pour utiliser cette application il faut tout simplement posséder une connection internet, et lancer le fichier.exe de l'application qui arrivera sur la page d'accueil : 
##### Ecran d'accueil :
<img src="https://i.imgur.com/jSUs46l.png"></img> 

Ensuite, il faudra selectionner une catégorie parmis celles ci-dessous :

<img src="https://i.imgur.com/SExdclZ.png"></img>

**Note :** Lorsque que vous cliquer sur personnel, cela vous ouvre la page ci-dessous, il suffit de rentrer le mot de passe "motdepasse" pour accéder a la catégorie personnel.
##### La fenêtre d'authentification :
<img src="https://i.imgur.com/j5RFIz2.png"></img>

Ensuite vous pouvez choisir une action parmis les 4 boutons qui seront affichés à l'écran (**Afficher**, **Créer**, **Supprimer**, **Mettre à jour**)

---

Lorsqu'un employé clique sur le bouton **Afficher**, un tableau (*DataGridView*) apparait avec les données demandées.

##### Voici un exemple de page de gestion (les données sont générées aléatoirement) :
<img src="https://i.imgur.com/YkfAoii.png"></img>

---

Lorsqu'un employé clique sur le bouton **Créer**, une nouvelle fenêtre s'ouvrira avec les entrées relatives à la catégorie sélectionnée.

##### Le formulaire d'insertion de Personnel :
<img src="https://i.imgur.com/mrFDTcD.png"></img>

##### Le formulaire d'insertion de Commande :
<img src="https://i.imgur.com/26PRauK.png"></img>


---

Lorsqu'un employé clique sur le bouton **Supprimer** après avoir sélectionné un ID dans l'affichage, le programme supprimera les données.

---

Lorsqu'un employé clique sur le bouton **Mettre à jour** après avoir sélectionné un ID dans l'affichage, une nouvelle fenêtre s'ouvrira avec un formulaire à remplir avec les données souhaitées.

##### Le formulaire de mise à jour d'un Client :
<img src="https://i.imgur.com/tbl8o7K.png"></img>

## Statistiques

<img src="https://i.imgur.com/XqQXoI6.png"></img>


La page **statistiques** est un peu différente des autres: elle comporte 9 boutons et 4 entrées de texte *optionnelles* qui permettent de faire les requêtes ci-dessous.

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
<br> **Note :** Il faut rentrer l'année dans la première boîte de texte, et le mois dans la deuxième.

#### Requête

```sql
CREATE PROCEDURE chiffreAffaire @annee int, @mois int
AS
SELECT SUM(total_ttc)
FROM commande
INNER JOIN facturation ON commande.id_facturation = facturation.id_facturation
WHERE MONTH(date_paiement) = @mois AND YEAR(date_paiement) = @annee
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
<br> **Note :** Cette commande requiert de rentrer un id de client dans la première boîte de texte.

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

Cette commande effectue la même action que la commande de la valeur commerciale, avec une TVA, une marge, une remise et une démarque modifiables au besoin <br>
Elle prendre en argument un mode de TVA (1, 2 ou 3), puis des valeurs pour les valeurs restantes.
<br>**Note:** Cette commande nécessite de remplir les 4 boites de texte, dans l'ordre qui suit :
+ La TVA (1, 2, ou 3)
+ La marge
+ La remise
+ La démarque

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
