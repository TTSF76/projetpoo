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