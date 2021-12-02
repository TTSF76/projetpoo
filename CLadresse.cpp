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

void CLadresse::setCodePostal(System::String^ code_postal) {
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

System::String^ CLadresse::CreateLiv() {
	return "DECLARE @rue varchar(40); SET @rue = '"+this->rue+"'; DECLARE @numero_rue int; SET @numero_rue = "+this->numero_rue+"; DECLARE @nom_residence varchar(40); SET @nom_residence = '"+this->nom_residence+"'; DECLARE @numero_etage int; SET @numero_etage = "+this->numero_etage+"; DECLARE @id_ville int; SET @id_ville = (SELECT id_ville FROM villes WHERE region='"+this->region+"' AND pays='"+this->pays+"' AND code_postal='"+this->code_postal+"'); If Not Exists(SELECT id_adresse FROM adresses WHERE rue=@rue AND numero_rue=@numero_rue AND (NOT (nom_residence <> @nom_residence OR nom_residence IS NULL OR @nom_residence IS NULL) OR (nom_residence IS NULL AND @nom_residence IS NULL)) AND numero_etage=@numero_etage AND id_ville=@id_ville) Begin INSERT INTO adresses (rue,numero_rue,nom_residence,numero_etage,id_ville) VALUES(@rue,@numero_rue,@nom_residence,@numero_etage,@id_ville) End IF NOT EXISTS(SELECT * FROM livrer WHERE id_client="+NS_map_client::CLclient::cvalue+" AND id_adresse=((SELECT id_adresse FROM adresses WHERE rue = @rue AND numero_rue = @numero_rue AND(NOT(nom_residence <> @nom_residence OR nom_residence IS NULL OR @nom_residence IS NULL) OR(nom_residence IS NULL AND @nom_residence IS NULL)) AND numero_etage = @numero_etage AND id_ville = @id_ville))) BEGIN INSERT INTO livrer (id_client,id_adresse) VALUES ("+NS_map_client::CLclient::cvalue+", (SELECT id_adresse FROM adresses WHERE rue = @rue AND numero_rue = @numero_rue AND(NOT(nom_residence <> @nom_residence OR nom_residence IS NULL OR @nom_residence IS NULL) OR(nom_residence IS NULL AND @nom_residence IS NULL)) AND numero_etage = @numero_etage AND id_ville = @id_ville)) END";
}

System::String^ CLadresse::CreateFac() {
	return "DECLARE @rue varchar(40); SET @rue = '" + this->rue + "'; DECLARE @numero_rue int; SET @numero_rue = " + this->numero_rue + "; DECLARE @nom_residence varchar(40); SET @nom_residence = '" + this->nom_residence + "'; DECLARE @numero_etage int; SET @numero_etage = " + this->numero_etage + "; DECLARE @id_ville int; SET @id_ville = (SELECT id_ville FROM villes WHERE region='" + this->region + "' AND pays='" + this->pays + "' AND code_postal='" + this->code_postal + "'); If Not Exists(SELECT id_adresse FROM adresses WHERE rue=@rue AND numero_rue=@numero_rue AND (NOT (nom_residence <> @nom_residence OR nom_residence IS NULL OR @nom_residence IS NULL) OR (nom_residence IS NULL AND @nom_residence IS NULL)) AND numero_etage=@numero_etage AND id_ville=@id_ville) Begin INSERT INTO adresses (rue,numero_rue,nom_residence,numero_etage,id_ville) VALUES(@rue,@numero_rue,@nom_residence,@numero_etage,@id_ville) End IF NOT EXISTS(SELECT * FROM facturer WHERE id_client=" + NS_map_client::CLclient::cvalue + " AND id_adresse=((SELECT id_adresse FROM adresses WHERE rue = @rue AND numero_rue = @numero_rue AND(NOT(nom_residence <> @nom_residence OR nom_residence IS NULL OR @nom_residence IS NULL) OR(nom_residence IS NULL AND @nom_residence IS NULL)) AND numero_etage = @numero_etage AND id_ville = @id_ville))) BEGIN INSERT INTO facturer (id_client,id_adresse) VALUES (" + NS_map_client::CLclient::cvalue + ", (SELECT id_adresse FROM adresses WHERE rue = @rue AND numero_rue = @numero_rue AND(NOT(nom_residence <> @nom_residence OR nom_residence IS NULL OR @nom_residence IS NULL) OR(nom_residence IS NULL AND @nom_residence IS NULL)) AND numero_etage = @numero_etage AND id_ville = @id_ville)) END";
}