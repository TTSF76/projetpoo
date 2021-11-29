#include "pch.h"
#include "CLserviceutilitaire.h"


NS_Utilitaire_svc::CLserviceutilitaire::CLserviceutilitaire(void) {
	this->Ocad = gcnew NS_Comp_Data::CLconnect();
	this->mapUtilitaire = gcnew NS_map_Utilitaire::CLUtilitaire();
}

void:: NS_Utilitaire_svc::CLserviceutilitaire::repertorierVilles(std::vector<System::String^>& list_ville) {
	System::String^ sql;
	sql = this->mapUtilitaire->SelectVille();
	System::Data::SqlClient::SqlDataReader^ val = Ocad->lecteurData(sql);

	while (val->Read()) {
		list_ville.push_back(val[2]->ToString());
	}
}