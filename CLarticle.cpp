#include "pch.h"
#include "CLarticle.h"

void CLarticle::setNature(System::String^ nature) {
	this->nature = nature;
}

void CLarticle::setNom(System::String^ name) {
	this->nature = name;
}

void CLarticle::setStock(int stock_article) {
	this->stock_article = stock_article;
}

void CLarticle::setRemise(float remise_article) {
	this->remise_article = remise_article;
}

void CLarticle::setPrixHT(float prix_article_ht) {
	this->prix_article_ht = prix_article_ht;
}

void CLarticle::setQuantiteReapprovisionnement(int quantite_reapprovisionnement) {
	this->quantite_reapprovisionnement = quantite_reapprovisionnement;
}

void CLarticle::setTauxTVA(float taux_tva) {
	this->taux_tva = taux_tva;
}

void CLarticle::setCouleur(System::String^ couleur_article) {
	this->couleur_article=couleur_article;
}

int CLarticle::getReference() {
	return ref_article;
}

System::String^ CLarticle::getNom() {
	return nom_article;
}

int CLarticle::getStock() {
	return stock_article;
}

float CLarticle::getRemise() {
	return remise_article;
}

float CLarticle::getPrixHT() {
	return prix_article_ht;
}

int CLarticle::getQuantiteReapprovisionnement() {
	return quantite_reapprovisionnement;
}

float CLarticle::getTauxTVA() {
	return taux_tva;
}

System::String^ CLarticle::getCouleur() {
	return couleur_article;
}

