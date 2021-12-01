#include "pch.h"
#include "CLarticle.h"

void NS_map_article::CLarticle::setNature(System::String^ nature) {
	this->nature = nature;
}

void NS_map_article::CLarticle::setNom(System::String^ name) {
	this->nom_article = name;
}

void NS_map_article::CLarticle::setStock(int stock_article) {
	this->stock_article = stock_article;
}

void NS_map_article::CLarticle::setRemise(float remise_article) {
	this->remise_article = remise_article;
}

void NS_map_article::CLarticle::setPrixHT(float prix_article_ht) {
	this->prix_article_ht = prix_article_ht;
}

void NS_map_article::CLarticle::setQuantiteReapprovisionnement(int quantite_reapprovisionnement) {
	this->quantite_reapprovisionnement = quantite_reapprovisionnement;
}

void NS_map_article::CLarticle::setTauxTVA(float taux_tva) {
	this->taux_tva = taux_tva;
}

void NS_map_article::CLarticle::setCouleur(System::String^ couleur_article) {
	this->couleur_article=couleur_article;
}

int NS_map_article::CLarticle::getReference() {
	return ref_article;
}

System::String^ NS_map_article::CLarticle::getNom() {
	return nom_article;
}

int NS_map_article::CLarticle::getStock() {
	return stock_article;
}

float NS_map_article::CLarticle::getRemise() {
	return remise_article;
}

float NS_map_article::CLarticle::getPrixHT() {
	return prix_article_ht;
}

int NS_map_article::CLarticle::getQuantiteReapprovisionnement() {
	return quantite_reapprovisionnement;
}

float NS_map_article::CLarticle::getTauxTVA() {
	return taux_tva;
}

int NS_map_article::CLarticle::getRefArticle()
{
	return this->ref_article;
}

System::String^ NS_map_article::CLarticle::getCouleur() {
	return couleur_article;
}

void NS_map_article::CLarticle::setRefArticle(int ref_article)
{
	this->ref_article = ref_article;
}

System::String^ NS_map_article::CLarticle::Select() {
	return "SELECT * FROM article";
}

System::String^ NS_map_article::CLarticle::Create() {
	return "DECLARE @nature char(40); SET @nature = '"+this->nature+"'; DECLARE @nom_article char(40); SET @nom_article = '"+this->nom_article+"'; DECLARE @stock_article int; SET @stock_article = "+this->stock_article+"; DECLARE @remise_article float; SET @remise_article = "+this->remise_article+"; DECLARE @prix_article_ht float; SET @prix_article_ht = "+this->prix_article_ht+"; DECLARE @seuil_reapprovisionnement float; SET @seuil_reapprovisionnement = "+this->quantite_reapprovisionnement+"; DECLARE @taux_tva float; SET @taux_tva ="+this->taux_tva+"; DECLARE @couleur_article char(40); SET @couleur_article = '"+this->couleur_article+"'; If Not Exists(SELECT ref_article FROM article WHERE nature=@nature AND nom_article=@nom_article AND couleur_article=@couleur_article) Begin INSERT INTO article (nature,nom_article,stock_article,remise_article,prix_article_ht,seuil_reapprovisionnement,taux_tva,couleur_article) VALUES(@nature,@nom_article,@stock_article,@remise_article,@prix_article_ht,@seuil_reapprovisionnement,@taux_tva,@couleur_article) End ELSE (SELECT 'Cet article existe déjà !' as Erreur)";
}

System::String^ NS_map_article::CLarticle::Delete() {
	return "DELETE FROM article WHERE ref_article="+this->ref_article;
}

System::String^ NS_map_article::CLarticle::Update() {
	return "SELECT * FROM article";
}
