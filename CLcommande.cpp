#include "pch.h"
#include "CLcommande.h"

void CLcommande::Create() {

}

void CLcommande::Update() {

}

void CLcommande::Delete() {

}

void CLcommande::Show() {

}

void CLcommande::setDateLivraison(System::String^date_livraison) {
	this->date_livraison = date_livraison;
}

void CLcommande::setDateEmission(System::String^ date_emission) {
	this->date_emission = date_emission;
}

void CLcommande::setReference(System::String^ ref_commande) {
	this->ref_commande = ref_commande;
}

void CLcommande::setTotalHT(float total_ht ) {
	this->total_tva = total_ht;
}

void CLcommande::setTotalTVA(float total_tva) {
	this->total_tva;
}

void CLcommande::setTotalTTC(float total_ttc) {
	this->total_ttc = total_ttc;
}

System::String^ CLcommande::getReference() {
	return ref_commande;
}

System::String^ CLcommande::getDateLivraison() {
	return date_livraison;
}

System::String^ CLcommande::getDateEmission() {
	return date_emission;
}

float CLcommande::getTotalHT() {
	return total_ht;
}

float CLcommande::getTotalTVA() {
	return total_tva;
}

float CLcommande::getTotalTTC() {
	return total_ttc;
}
