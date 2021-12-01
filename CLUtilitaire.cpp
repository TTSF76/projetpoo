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

System::String^ NS_map_Utilitaire::CLUtilitaire::SelectPrenom(int id_client) {

	return "select prenom from client where id_client = '"+id_client+"'";
}

System::String^ NS_map_Utilitaire::CLUtilitaire::SelectNom(int id_client) {

	return "select nom from client where id_client = '" + id_client + "'";

}