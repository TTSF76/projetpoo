#include "pch.h"
#include "CLcommande.h"

void NS_map_commande::CLcommande::Create() {

}

void NS_map_commande::CLcommande::Update() {

}

void NS_map_commande::CLcommande::Delete() {

}

void NS_map_commande::CLcommande::Show() {

}

void NS_map_commande::CLcommande::setDateLivraison(System::String^date_livraison) {
	this->date_livraison = date_livraison;
}

void NS_map_commande::CLcommande::setDateEmission(System::String^ date_emission) {
	this->date_emission = date_emission;
}

void NS_map_commande::CLcommande::setReference(System::String^ ref_commande) {
	this->ref_commande = ref_commande;
}

void NS_map_commande::CLcommande::setTotalHT(float total_ht ) {
	this->total_tva = total_ht;
}

void NS_map_commande::CLcommande::setTotalTVA(float total_tva) {
	this->total_tva;
}

void NS_map_commande::CLcommande::setTotalTTC(float total_ttc) {
	this->total_ttc = total_ttc;
}

System::String^ NS_map_commande::CLcommande::getReference() {
	return ref_commande;
}

System::String^ NS_map_commande::CLcommande::getDateLivraison() {
	return date_livraison;
}

System::String^ NS_map_commande::CLcommande::getDateEmission() {
	return date_emission;
}

float NS_map_commande::CLcommande::getTotalHT() {
	return total_ht;
}

float NS_map_commande::CLcommande::getTotalTVA() {
	return total_tva;
}

float NS_map_commande::CLcommande::getTotalTTC() {
	return total_ttc;
}
