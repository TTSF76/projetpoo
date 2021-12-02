#include "pch.h"
#include "CLcommande.h"

System::String^ NS_map_commande::CLcommande::Create() {
	return "DECLARE @ref_command varchar(40); SET @ref_command = '"+this->ref_commande+"'; DECLARE @date_livraison datetime; SET @date_livraison = '"+this->date_livraison+"' DECLARE @date_emission datetime; SET @date_emission = '"+this->date_emission+"'; DECLARE @total_ht float; SET @total_ht = '"+this->total_ht+"'; DECLARE @total_tva float; SET @total_tva ='"+this->total_tva+"'; DECLARE @total_ttc float; SET @total_ttc = '"+this->total_ttc+"'; DECLARE @id_client int; SET @id_client ='"+this->id_client+"'; DECLARE @id_personnel int; SET @id_personnel = '"+this->id_personnel+"' ; DECLARE @id_adresse_livraison int; SET @id_adresse_livraison = '"+this->id_adresse_livraison+"'; DECLARE @nombre_paiement int; SET @nombre_paiement = '"+this->nombre_paiement+"'; DECLARE @moyen_paiement varchar(40); SET @moyen_paiement = '"+this->moyen_paiement+"'; DECLARE @date_paiement datetime; SET @date_paiement = '"+this->date_paiement+"'; DECLARE @id_adresse_facturation int; SET @id_adresse_facturation = '"+this->id_adresse_facturation+"'; INSERT INTO [dbo].[commande] ([ref_command] ,[date_livraison] ,[date_emission] ,[total_ht] ,[total_tva] ,[total_ttc] ,[id_client] ,[id_personnel] ,[id_adresse]) VALUES(@ref_command,@date_livraison,@date_emission,@total_ht,@total_tva,@total_ttc,@id_client,@id_personnel,@id_adresse_livraison) INSERT INTO [dbo].[facturation] ([nombre_paiement] ,[moyen_paiement] ,[date_paiement] ,[id_adresse] ,[ref_command]) VALUES (@nombre_paiement,@moyen_paiement,@date_paiement,@id_adresse_facturation,@ref_command); UPDATE commande SET id_facturation = (SELECT id_facturation FROM facturation WHERE commande.ref_command = facturation.ref_command) WHERE commande.ref_command = @ref_command";
}

void NS_map_commande::CLcommande::Update() {

}

void NS_map_commande::CLcommande::Delete() {

}

System::String^ NS_map_commande::CLcommande::Select() {
	return "SELECT * FROM commande";
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

void NS_map_commande::CLcommande::setIdClient(int id_client) {
	this->id_client = id_client;
}

void NS_map_commande::CLcommande::setIdPersonnel(int id_personnel) {
	this->id_personnel = id_personnel;
}

void NS_map_commande::CLcommande::setIdAdresseLivraison(int id_adresse_livraison) {
	this->id_adresse_livraison= id_adresse_livraison;
}

void NS_map_commande::CLcommande::setIdAdresseFacturation(int id_adresse_facturation) {
	this->id_adresse_facturation = id_adresse_facturation;
}

void NS_map_commande::CLcommande::setNombrePaiement(int nombre_paiement) {
	this->nombre_paiement = nombre_paiement;
}

void NS_map_commande::CLcommande::setMoyenPaiement(System::String^ moyen_paiement) {
	this->moyen_paiement = moyen_paiement;
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

System::String^ NS_map_commande::CLcommande::getDatePaiement() {
	return date_paiement;
}

System::String^ NS_map_commande::CLcommande::getMoyenPaiement() {
	return moyen_paiement;
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

int NS_map_commande::CLcommande::getIdClient() {
	return id_client;
}

int NS_map_commande::CLcommande::getIdPersonnel() {
	return id_personnel;
}

int NS_map_commande::CLcommande::getIdAdresseLivraison() {
	return id_adresse_livraison;
}

int NS_map_commande::CLcommande::getIdAdresseFacturation() {
	return id_adresse_facturation;
}

int NS_map_commande::CLcommande::getNombrePaiement() {
	return nombre_paiement;
}