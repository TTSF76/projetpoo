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
