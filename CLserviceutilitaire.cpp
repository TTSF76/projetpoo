#include "pch.h"
#include "CLserviceutilitaire.h"


std::vector<std::string> NS_Utilitaire_svc::CLserviceutilitaire::repertorierVilles(std::vector<std::string> list_ville)
{
	System::String^ sql;
	sql = mapUtilitaire->SelectVille();
	System::Data::SqlClient::SqlDataReader^ val = Ocad->lecteurData(sql);

	while (val->Read()) {
		list_ville.push_back(msclr::interop::marshal_as<std::string>(val[2]->ToString()));
	}
	return list_ville;
}

std::vector<std::string> NS_Utilitaire_svc::CLserviceutilitaire::repertorierIdClients(std::vector<std::string> list_id_client)
{
	System::String^ sql;
	sql = mapUtilitaire->SelectIdClient();
	System::Data::SqlClient::SqlDataReader^ val = Ocad->lecteurData(sql);

	while (val->Read()) {
		list_id_client.push_back(msclr::interop::marshal_as<std::string>(val[0]->ToString()));
	}
	return list_id_client;
}

NS_Utilitaire_svc::CLserviceutilitaire::CLserviceutilitaire(void) {
	this->Ocad = gcnew NS_Comp_Data::CLconnect();
	this->mapUtilitaire = gcnew NS_map_Utilitaire::CLUtilitaire();
}



std::vector<std::string> NS_Utilitaire_svc::CLserviceutilitaire::repertorierPays(std::vector<std::string> list_pays) {
	System::String^ sql;
	sql = mapUtilitaire->SelectPays();
	System::Data::SqlClient::SqlDataReader^ val = Ocad->lecteurData(sql);

	while (val->Read()) {
		list_pays.push_back(msclr::interop::marshal_as<std::string>(val[0]->ToString()));
	}
	return list_pays;
}

std::vector<std::string > NS_Utilitaire_svc::CLserviceutilitaire::repertorierCodePostaux(std::vector<std::string> list_code_postaux) {
	System::String^ sql;
	sql = mapUtilitaire->SelectCodePostal();
	System::Data::SqlClient::SqlDataReader^ val = Ocad->lecteurData(sql);

	while (val->Read()) {
		list_code_postaux.push_back(msclr::interop::marshal_as<std::string>(val[0]->ToString()));
	}
	return list_code_postaux;
}

std::vector<std::string> NS_Utilitaire_svc::CLserviceutilitaire::repertorierRegion(std::vector<std::string> list_region) {
	System::String^ sql;
	sql = mapUtilitaire->SelectRegion();
	System::Data::SqlClient::SqlDataReader^ val = Ocad->lecteurData(sql);

	while (val->Read()) {
		list_region.push_back(msclr::interop::marshal_as<std::string>(val[0]->ToString()));
	}
	return list_region;
}


std::vector<std::string> NS_Utilitaire_svc::CLserviceutilitaire:: miseAjourVilleCBCP(std::vector<std::string> vecteur_ville, System::String^ code_postal)
{

	System::String^ sql;
	sql = mapUtilitaire->SelectVilleCp(code_postal);
	System::Data::SqlClient::SqlDataReader^ val = Ocad->lecteurData(sql);

	while (val->Read()) {
		vecteur_ville.push_back(msclr::interop::marshal_as<std::string>(val[0]->ToString()));
	}
	return vecteur_ville;
}

std::vector<std::string> NS_Utilitaire_svc::CLserviceutilitaire::miseAjourRegionCBCP(std::vector<std::string> vecteur_region, System::String^ code_postal)
{

	System::String^ sql;
	sql = mapUtilitaire->SelectRegionCp(code_postal);
	System::Data::SqlClient::SqlDataReader^ val = Ocad->lecteurData(sql);

	while (val->Read()) {
		vecteur_region.push_back(msclr::interop::marshal_as<std::string>(val[0]->ToString()));
	}
	return vecteur_region;
}

std::vector<std::string> NS_Utilitaire_svc::CLserviceutilitaire::miseAjourPaysCBCP(std::vector<std::string> vecteur_pays, System::String^ code_postal)
{

	System::String^ sql;
	sql = mapUtilitaire->SelectPaysCp(code_postal);
	System::Data::SqlClient::SqlDataReader^ val = Ocad->lecteurData(sql);

	while (val->Read()) {
		vecteur_pays.push_back(msclr::interop::marshal_as<std::string>(val[0]->ToString()));
	}
	return vecteur_pays;
}