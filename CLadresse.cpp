#include "pch.h"
#include "CLadresse.h"

int CLadresse::getIdAdresse() {
	return this->id_adresse;
}

void CLadresse::setIdAdress(int id_adresse) {
	this->id_adresse = id_adresse;
}

void CLadresse::setPays(System::String^ pays) {
	this->pays = pays;
}

System::String^ CLadresse::getPays() {
	return this->pays;
}

void CLadresse::setRegion(System::String^ region) {
	this->region = region;
}

int CLadresse::getVille()
{
	return this->id_ville;
}

System::String^ CLadresse::getRegion() {
	return this->region;
}

void CLadresse::setCodePostal(System::String^ region) {
	this->code_postal = code_postal;
}

System::String^ CLadresse::getNomResidence()
{
	return nom_residence;
}

void CLadresse::setNomResidence(System::String^ nom_residence)
{
	this->nom_residence = nom_residence;
}

System::String^ CLadresse::getNumeroRue()
{
	return this->numero_rue;
}

void CLadresse::setNumeroRue(System::String^ numero_rue)
{
	this->numero_rue = numero_rue;
}

int CLadresse::getNumeroEtage()
{
	return this->numero_etage;
}

void CLadresse::setNumeroEtage(int numero_etage)
{
	this->numero_etage = numero_etage;
}

void CLadresse::setVille(int id_ville)
{
	this->id_ville = id_ville;
}

System::String^ CLadresse::getRue() {
	return this->rue;
}
void CLadresse::setRue(System::String^ rue) {
	this->rue = rue;
}

System::String^ CLadresse::getCodePostal() {
	return this->code_postal;
}