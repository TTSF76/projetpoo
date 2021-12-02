#include "pch.h"
#include "CLadresse.h"
#include "CLclient.h"

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

System::String^ CLadresse::DeleteLiv() {
	return "DECLARE @id_adresse int;SET @id_adresse = "+this->id_adresse+";DECLARE @id_client int;SET @id_client = "+NS_map_client::CLclient::cvalue+";IF (SELECT count(*) FROM livrer WHERE id_client=@id_client) > 1 BEGIN DELETE FROM livrer WHERE id_adresse=@id_adresse AND id_client=@id_client; END IF NOT EXISTS (SELECT * FROM personnel WHERE personnel.id_adresse=@id_adresse) AND NOT EXISTS (SELECT * FROM facturation WHERE facturation.id_adresse=@id_adresse) AND NOT EXISTS (SELECT * FROM commande WHERE commande.id_adresse=@id_adresse) AND NOT EXISTS (SELECT * FROM facturer WHERE facturer.id_adresse=@id_adresse) BEGIN SELECT * FROM adresses WHERE id_adresse=@id_adresse End";
}

System::String^ CLadresse::DeleteFac() {
	return "DECLARE @id_adresse int;SET @id_adresse = " + this->id_adresse + ";DECLARE @id_client int;SET @id_client = " + NS_map_client::CLclient::cvalue + ";IF (SELECT count(*) FROM facturer WHERE id_client=@id_client) > 1 BEGIN DELETE FROM facturer WHERE id_adresse=@id_adresse AND id_client=@id_client; END IF NOT EXISTS (SELECT * FROM personnel WHERE personnel.id_adresse=@id_adresse) AND NOT EXISTS (SELECT * FROM facturation WHERE facturation.id_adresse=@id_adresse) AND NOT EXISTS (SELECT * FROM commande WHERE commande.id_adresse=@id_adresse) AND NOT EXISTS (SELECT * FROM livrer WHERE livrer.id_adresse=@id_adresse) BEGIN SELECT * FROM adresses WHERE id_adresse=@id_adresse End";
}