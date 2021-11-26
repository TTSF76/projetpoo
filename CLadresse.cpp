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

System::String^ CLadresse::getVille()
{
	return this->ville;
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

int CLadresse::getNumeroRue()
{
	return this->numero_rue;
}

void CLadresse::setNumeroRue(int numero_rue)
{
	this->numero_rue = numero_rue;
}

void CLadresse::setVille(System::String^ ville)
{
	this->ville = ville;
}

System::String^ CLadresse::getCodePostal() {
	return this->code_postal;
}