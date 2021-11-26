#include "pch.h"
#include "CLarticle.h"

void NS_map_article::CLarticle::setNature(System::String^ nature) {
	this->nature = nature;
}

void NS_map_article::CLarticle::setNom(System::String^ name) {
	this->nature = name;
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

System::String^ NS_map_article::CLarticle::getCouleur() {
	return couleur_article;
}

