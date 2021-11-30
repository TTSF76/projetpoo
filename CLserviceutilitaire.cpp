#include "pch.h"
#include "CLserviceutilitaire.h"


NS_Utilitaire_svc::CLserviceutilitaire::CLserviceutilitaire(void) {
	this->Ocad = gcnew NS_Comp_Data::CLconnect();
	this->mapUtilitaire = gcnew NS_map_Utilitaire::CLUtilitaire();
}

cliext::vector<System::String^> NS_Utilitaire_svc::CLserviceutilitaire::repertorierVilles(cliext::vector<System::String^> list_ville) {
	System::String^ sql;
	sql = mapUtilitaire->SelectVille();
	System::Data::SqlClient::SqlDataReader^ val = Ocad->lecteurData(sql);

	while (val->Read()) {
		list_ville.push_back(val[2]->ToString());
	}
	val->Close();
	return list_ville;
}

cliext::vector<System::String^> NS_Utilitaire_svc::CLserviceutilitaire::repertorierPays(cliext::vector<System::String^> list_pays) {
	System::String^ sql;
	sql = mapUtilitaire->SelectPays();
	System::Data::SqlClient::SqlDataReader^ val = Ocad->lecteurData(sql);

	while (val->Read()) {
		list_pays.push_back(val[0]->ToString());
	}
	val->Close();
	return list_pays;
}

cliext::vector<System::String^> NS_Utilitaire_svc::CLserviceutilitaire::repertorierCodePostaux(cliext::vector<System::String^> list_code_postaux) {
	System::String^ sql;
	sql = mapUtilitaire->SelectCodePostal();
	System::Data::SqlClient::SqlDataReader^ val = Ocad->lecteurData(sql);

	while (val->Read()) {
		list_code_postaux.push_back(val[0]->ToString());
	}
	val->Close();
	return list_code_postaux;
}

cliext::vector<System::String^> NS_Utilitaire_svc::CLserviceutilitaire::repertorierRegion(cliext::vector<System::String^> list_region) {
	System::String^ sql;
	sql = mapUtilitaire->SelectRegion();
	System::Data::SqlClient::SqlDataReader^ val = Ocad->lecteurData(sql);

	while (val->Read()) {
		list_region.push_back(val[0]->ToString());
	}
	val->Close();
	return list_region;
}