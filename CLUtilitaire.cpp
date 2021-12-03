#include "pch.h"
#include "CLUtilitaire.h"

System::String^ NS_map_Utilitaire::CLUtilitaire::SelectVille() {
	return "select * from villes order by ville";
}

System::String^ NS_map_Utilitaire::CLUtilitaire::SelectPays() {
	return "select pays from villes group by pays ";
}

System::String^ NS_map_Utilitaire::CLUtilitaire::SelectCodePostal(){
	return "select code_postal from villes order by code_postal";
}

System::String^ NS_map_Utilitaire::CLUtilitaire::SelectRegion() {
	return "select region from villes group by region ";
}


System::String^ NS_map_Utilitaire::CLUtilitaire::SelectVilleCp(System::String^ code_postal) {
	return "select ville from villes where code_postal = '" + code_postal + "'";
}

System::String^ NS_map_Utilitaire::CLUtilitaire::SelectRegionCp(System::String^ code_postal) {
	return "select region from villes where code_postal = '" + code_postal + "'";
}


System::String^ NS_map_Utilitaire::CLUtilitaire::SelectPaysCp(System::String^ code_postal) {
	return "select pays from villes where code_postal = '" + code_postal + "'";
}


System::String^ NS_map_Utilitaire::CLUtilitaire::SelectCodePostalV(System::String^ ville) {
	return "select code_postal from villes where ville = '" + ville + "'";
}

System::String^ NS_map_Utilitaire::CLUtilitaire::SelectRegionV(System::String^ ville) {
	return "select region from villes where ville = '" + ville + "'";
}


System::String^ NS_map_Utilitaire::CLUtilitaire::SelectPaysV(System::String^ ville) {
	return "select pays from villes where ville = '" + ville + "'";
}

System::String^ NS_map_Utilitaire::CLUtilitaire::SelectIdClient() {
	return "select id_client from client order by id_client ";
}

System::String^ NS_map_Utilitaire::CLUtilitaire::SelectIdPersonnel() {
	return "select id_personnel from personnel ";
}

System::String^ NS_map_Utilitaire::CLUtilitaire::SelectIdSup() {
	return "select id_personnel from personnel WHERE id_personnel_etre_dirige IS NULL";
}

System::String^ NS_map_Utilitaire::CLUtilitaire::SelectNomPrenom(int id_client) {

	return "select nom_client, prenom_client,date_naissance from client where id_client = '"+id_client+"'";
}
System::String^ NS_map_Utilitaire::CLUtilitaire::SelectNomPrenomManager(int id_manager) {

	return "select prenom_personnel, nom_personnel FROM personnel WHERE id_personnel = '" + id_manager + "'";
}

System::String^ NS_map_Utilitaire::CLUtilitaire::SelectNomPrenomPersonnel(int id_personnel) {

	return "select nom_personnel, prenom_personnel,date_embauche,id_personnel_etre_dirige,id_adresse from personnel where id_personnel = '" + id_personnel + "'";
}

System::String^ NS_map_Utilitaire::CLUtilitaire::SelectIdAdresseFacturation(int id_client) {
	return "select id_adresse from facturer where id_client = '"+id_client+"'";
}



System::String^ NS_map_Utilitaire::CLUtilitaire::SelectInfoAdresseFacturation(int id_adresse_facturation) {
	return "select rue, numero_rue, nom_residence,numero_etage, code_postal,ville,region, pays from adresses inner join villes on adresses.id_ville = villes.id_ville AND id_adresse ='" + id_adresse_facturation + "'";
}

System::String^ NS_map_Utilitaire::CLUtilitaire::SelectIdAdresseLivraison(int id_client) {
	return "select id_adresse from livrer where id_client = '" + id_client + "'";
}



System::String^ NS_map_Utilitaire::CLUtilitaire::SelectInfoAdresseLivraison(int id_adresse_livraison) {
	return "select rue, numero_rue, nom_residence,numero_etage, code_postal,ville,region, pays from adresses inner join villes on adresses.id_ville = villes.id_ville AND id_adresse ='" + id_adresse_livraison + "'";
}

System::String^ NS_map_Utilitaire::CLUtilitaire::SelectIncrementReference(System::String^ ref_commande) {
	return "SELECT COUNT(*)+1 as auto_increment FROM commande WHERE ref_command LIKE '" + ref_commande + "%'";
}

System::String^ NS_map_Utilitaire::CLUtilitaire::SelectInfoArticle(int ref_article) {
	return "SELECT * FROM article WHERE ref_article="+ ref_article;
}

System::String^ NS_map_Utilitaire::CLUtilitaire::SelectIdClientCommande(System::String^ ref_commande) {
	return "select client.id_client, client.nom_client, client.prenom_client from client inner join commande on client.id_client = commande.id_client where ref_command = '"+ref_commande+"'";
}