<h1 align="center">Projet CESI - Delivery Manager [Equipe 6]</h1>

## Sommaire

-   [Présentation du projet](#Présentation)
    -   [Description](#Description)
    -   [Contributeurs](#Contributeurs)
    -   [Fonctionnalités](#Fonctionnalités)
    -   [Les langages et outils que nous avons utilisé](#Langages-et-Outils-utilisés)
-   [Guide d'utilisation](#Guide-dutilisation)
    -   [Accueil](#Accueil)
    -   [Affichage](#Affichage)
    -   [Création](#Création)
    -   [Suppression](#Suppression)
    -   [Mise à jour](#Mise-à-jour)
-   [Réalisation](#Réalisation)
    -   [Diagramme de classe](#Diagramme)
    -   [Fichiers](#Fichiers)
    -   [Base de données](#Base-de-données)
    -   [Contraintes](#Contraintes)
        -   [Problèmes](#Problèmes)
        -   [Solutions](#Solutions)
-   [Gestion des statistiques](#Statistiques)
    -   [Panier moyen](#Calculer-le-panier-moyen)
    -   [Chiffre d'affaire](#Calculer-le-chiffre-daffaire-sur-un-mois-en-particuler)
    -   [Produits sous le seuil](#Identifier-les-produits-sous-le-seuil-de-réapprovisionnement)
    -   [Montant total d'un client](#Calculer-le-montant-total-des-achats-pour-un-client)
    -   [Dix articles les plus vendus](#Identifier-les-10-articles-les-plus-vendus)
    -   [Dix articles les moins vendus](#Identifier-les-10-articles-les-moins-vendus)
    -   [Valeur commerciale du stock (sans variables)](<#Calculer-la-valeur-commerciale-du-stock-(sans-variables)>)
    -   [Valeur d'achat du stock](#Calculer-la-valeur-dachat-du-stock)
    -   [Valeur commerciale du stock (avec variables)](<#Calculer-la-variation-commerciale-du-stock-(avec-variables)>)

## Présentation

### Description

**Delivery Manager** est une application de gestion de base de données pour une nouvelle entreprise. Cette dernière nous a contacté afin de concrétiser l'application, pour permettre à leurs employés de manipuler facilement les données de leurs clients, commandes...

L'application **Delivery Manager** a été conçu grâce aux langages **C++** (pour la partie interface graphique) et **SQL** (pour les requêtes de base de données). Pour ce faire, nous avons utilisé l'IDE **Visual Studio 2019** de Microsoft, le logiciel **Microsoft SQL Server Management Studio 18** pour créer la BDD ainsi qu'un hébergement de BDD grâce à **Microsoft Azure**.

### Contributeurs

Ce projet est mené par:

-   [**Fabien RIBES**](https://github.com/Good660)
-   [**Talla DIOP**](https://github.com/Corleone667)
-   [**Tristan JEHANNO**](https://github.com/Git-Rigoras)
-   [**Samuel WARD**](https://github.com/INF-Zenyth)

### Fonctionnalités

**Delivery Manager** permet à l'utilisateur de gérer:

-   **_Clients_**
    -   L'_employé_ pourra visualiser, créer, modifier et supprimer des **clients**
-   **_Personnel_**
    -   Le _manager_ pourra visualiser, créer, modifier et supprimer un membre du **personnel**
    -   Cette base est accessible **seulement** par des supérieurs hiérarchiques (_manager_)
-   **_Commandes_**
    -   L'_employé_ pourra visualiser, créer, modifier et supprimer des **commandes**
-   **_Stock_**
    -   L'_employé_ pourra visualiser, créer, modifier et supprimer des éléments du **stock**
-   [**_Statistiques_**](#Statistiques)
    -   L'_employé_ pourra effectuer des commandes qui interrogeront la base de données
        -   Calculer le panier moyen
        -   Calculer le chiffre d'affaire sur un mois en particulier
        -   Identifier les produits sous le seuil de réapprovisionnement
        -   Calculer le montant total des achats pour un client
        -   Identifier les 10 articles les plus vendus
        -   Identifier les 10 articles les moins vendus
        -   Calculer la valeur commerciale du stock
        -   Calculer la valeur d'achat du stock
        -   Calculer la valeur commerciale du stock (avec variables)

### Langages et Outils utilisés

<a href="https://www.w3schools.com/cpp/" target="_blank" rel="noreferrer"> <img src="https://raw.githubusercontent.com/devicons/devicon/master/icons/cplusplus/cplusplus-original.svg" alt="cplusplus" width="40" height="40"/></a>
<a href="https://dotnet.microsoft.com/" target="_blank" rel="noreferrer"> <img src="https://raw.githubusercontent.com/devicons/devicon/master/icons/dot-net/dot-net-original-wordmark.svg" alt="dotnet" width="40" height="40"/></a>
<a href="https://www.microsoft.com/en-us/sql-server" target="_blank" rel="noreferrer"> <img src="https://www.svgrepo.com/show/303229/microsoft-sql-server-logo.svg" alt="mssql" width="40" height="40"/></a>
<a href="https://visualstudio.microsoft.com/" target="_blank" rel="noreferrer"> <img src="https://www.svgrepo.com/show/354520/visual-studio.svg" alt="Visual Studio" width="40" height="40"/></a>
<a href="https://code.visualstudio.com" target="_blank" rel="noreferrer"> <img src="https://www.svgrepo.com/show/354522/visual-studio-code.svg" alt="Visual Studio Code" width="40" height="40"></a>
<a href=""></a>

## Guide d'utilisation

### Accueil

Pour utiliser cette application il faut tout simplement posséder une connection internet, et lancer le **fichier executable** de l'application qui arrivera sur la page d'accueil :

<p align="center"><img src="https://i.imgur.com/8lIj9rI.png"></img></p>

Ensuite, il faudra selectionner une catégorie parmis celles ci-dessous :

<p align="center"><img src="https://i.imgur.com/pFCkkek.png"></img></p>

**Note :** Lorsque que vous cliquer sur personnel, cela vous ouvre la page ci-dessous, il suffit de rentrer le mot de passe "motdepasse" pour accéder a la catégorie personnel.

##### La fenêtre d'authentification :

<p align="center"><img src="https://i.imgur.com/sVSmISc.png"></img></p>

Ensuite vous pouvez choisir une action parmis les 4 boutons qui seront affichés à l'écran (**Afficher**, **Créer**, **Supprimer**, **Mettre à jour**)

---

### Affichage

Lorsqu'un employé clique sur le bouton **Afficher**, un tableau (_DataGridView_) apparait avec les données demandées.

##### Voici un exemple de page de gestion (les données sont générées aléatoirement) :

<p align="center"><img src="https://i.imgur.com/mlQt44y.png"></img></p>

---

### Création

Lorsqu'un employé clique sur le bouton **Créer**, une nouvelle fenêtre s'ouvrira avec les entrées relatives à la catégorie sélectionnée.

##### Le formulaire d'insertion de Personnel :

<p align="center"><img src="https://i.imgur.com/yh9vBPk.png"></img></p>

##### Le formulaire d'insertion de Commande :

<p align="center"><img src="https://i.imgur.com/J9uJX22.png"></img></p>

---

### Suppression

Lorsqu'un employé clique sur le bouton **Supprimer** après avoir sélectionné un ID dans l'affichage, le programme supprimera les données.

---

### Mise à jour

Lorsqu'un employé clique sur le bouton **Mettre à jour** après avoir sélectionné un ID dans l'affichage, une nouvelle fenêtre s'ouvrira avec un formulaire à remplir avec les données souhaitées.

##### Le formulaire de mise à jour d'un Client :

<p align="center"><img src="https://i.imgur.com/LQA6RAr.png"></img></p>

---

## Réalisation

### Diagramme

Nous avons commencé par créer des diagrammes _UML 2.0_ afin de savoir quoi faire. Ici, nous allons seulement vous remontrer le **diagramme de classe**.<br>

> **Note :** pour voir les autres diagrammes, veuillez consulter le **livrable 2**.

<p align="center"><img src="https://i.imgur.com/2zp56ji.png"></img></p>

A partir du diagramme de classe ci dessus, nous avons pu développer l'arborescence ci-dessous. Notez que des fichiers ont été ajouté par rapport au diagramme de classe, afin de correspondre au besoin de faire un système de "Service-Mappage-Contrôle".

### Fichiers

<details>
	<summary>Arborescence des fichiers</summary><br>
	<p align="center"><img src="https://i.imgur.com/Pj5QjLd.png"></img></p>
</details>

Dans ces fichier, il y a donc trois catégories :

-   Les services
-   Les maps (ou carte)
-   Les contrôles

### Contraintes

#### Problèmes

1. On aurait pu utilisé une base de données locale ou sur un serveur local, mais comme les membres du groupe ne travaillent pas aux mêmes campus, ce n'était pas un choix.

2. Se partager le code et pouvoir travailler dessus en même temps.

#### Solutions

1. On a trouvé des entreprises spécialisées dans l'hébergement de bases de données. On est passé par quelques uns pour finalement opter pour **Microsoft Azure**. Cette dernière propose aux étudiants un service d'hébergement gratuit qui est **stable**, **rapide**, **sécurisé** et **compatible avec SQL Server**.

2. Utilisation de **GitHub** pour envoyer et recevoir des fichiers. On a aussi mis en place un _webhook_ dans notre groupe de communication sur Discord qui permet de nous notifier lorsqu'il y a des modifications (**nouvelle branche**, **push**, **commit**...).

<p align="center"><img src="https://i.imgur.com/KwzzdoC.png"></img></p>

---

## Statistiques

La page **statistiques** est un peu différente des autres: elle comporte 9 boutons et 4 entrées de texte _optionnelles_ qui permettent de faire les requêtes ci-dessous.

<p align="center"><img src="https://i.imgur.com/R71fUhg.png"></img></p>

---

### Calculer le panier moyen

Cette commande permet de visualiser la valeur moyenne des paniers des clients (en €).

#### Procédure SQL

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

---

### Calculer le chiffre d'affaire sur un mois en particuler

Cette commande permet de visualiser le chiffre d'affaire de l'entreprise sur un mois et année en particulier choisi par l'employé.

> **Note :** Il faut rentrer l'année dans la première boîte de texte, et le mois dans la deuxième.

#### Procédure SQL

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

---

### Identifier les produits sous le seuil de réapprovisionnement

Cette commande permet de visualiser tous les produits qui devront être restocker par l'entreprise.
Les valeurs renvoyées correspondent à la référence de l'article.

#### Procédure SQL

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

---

### Calculer le montant total des achats pour un client

Cette commande permet de visualiser le montant total (en €) du panier d'un client sélectionné par l'employé.

> **Note :** Cette commande requiert de rentrer un ID de client dans la première boîte de texte.

#### Procédure SQL

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

---

### Identifier les 10 articles les plus vendus

Cette commande permet d'identifier les id des 10 produits les moins vendus, afin d'envisager par exemple d'augmenter les stocks de ces produits pour augmenter les recettes.

#### Procédure SQL

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

> Chaque ligne comporte la référence de l'article, le nom de l'article et la quantité vendue.

---

### Identifier les 10 articles les moins vendus

Cette commande permet d'indentifier les id des 10 articles les moins vendus, afin d'éventuellement envisager une modification sur leur prix par exemple.

#### Procédure SQL

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

> Chaque ligne comporte la référence de l'article, le nom de l'article et la quantité vendue.

---

### Calculer la valeur d'achat du stock

Cette commande permet de calculer le prix auquel l'entièreté du stock à été acheté.

#### Procédure SQL

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

---

### Calculer la valeur commerciale du stock (sans variables)

Cette commande permet de calculer l'argent que vaut tout le stock de l'entreprise.

#### Procédure SQL

```sql
CREATE PROCEDURE prixCommercial as
SELECT SUM(prix_article_ht*stock_article) from article
GO
```

#### Réponse-type

```
Valeur commerciale :
147714163 €
```

---

### Calculer la variation commerciale du stock (avec variables)

Cette commande effectue la même action que la commande de la valeur commerciale, avec une TVA, une marge, une remise et une démarque modifiables au besoin.

> **Note:** Cette commande nécessite de remplir les 4 boites de texte, dans l'ordre qui suit:
>
> -   La **_TVA_** (**1** [5.5%], **2** [10%], ou **3** [20%])
> -   La **_marge_** (en %)
> -   La **_remise_** (en %)
> -   La **_démarque_** (en %)

#### Procédure SQL

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

---

Étape 1 : cliquer sur la rubrique « Gestion personnel »

<p align="center"><img src="https://i.imgur.com/nLtWain.png"></img></p>

Étape 2 : on se connecte avec le mot de passe « motdepasse »

<p align="center"><img src="https://i.imgur.com/fJZ82JG.png"></img></p>

Une fois connecté, on clique sur créer : 

<p align="center"><img src="https://i.imgur.com/nLtWain.png"></img></p>

Cette fenêtre s’affiche alors :

<p align="center"><img src="https://i.imgur.com/9AgAN82.png"></img></p>

On remplit tous les champs ce qui nous donne ceci :

<p align="center"><img src="https://i.imgur.com/DBVt25J.png"></img></p>

Nous pouvons alors cliquer sur le bouton valider, ce qui nous ferme la fenêtre. On revient alors sur cette fenêtre. 
 
<p align="center"><img src="https://i.imgur.com/qc0NJN9.png"></img></p>

On n’a alors plus qu’à cliquer sur afficher pour voir le nouvel enregistrement :

<p align="center"><img src="https://i.imgur.com/hEAdml5.png"></img></p>


On voit bien apparaître Talla dans la base. On peut enfin cliquer sur « Mettre à jour » pour afficher de façon claire et formatée dans une fenêtre les données du personnel :

 
<p align="center"><img src="https://i.imgur.com/hxlMcfC.png
