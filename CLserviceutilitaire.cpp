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



std::vector<std::string> NS_Utilitaire_svc::CLserviceutilitaire::repertorierIdAdresseFacturation(std::vector<std::string> list_id_adresse_facturation, int id_client)
{
	System::String^ sql;
	sql = mapUtilitaire->SelectIdAdresseFacturation(id_client);
	System::Data::SqlClient::SqlDataReader^ val = Ocad->lecteurData(sql);

	while (val->Read()) {
		list_id_adresse_facturation.push_back(msclr::interop::marshal_as<std::string>(val[0]->ToString()));
	}
	return list_id_adresse_facturation;
}

std::vector<std::string> NS_Utilitaire_svc::CLserviceutilitaire::miseAjourAdresseFacturation(std::vector<std::string> vecteur_adresse_facturation, int id_adresse_facturation) {

	System::String^ sql;
	sql = mapUtilitaire->SelectInfoAdresseFacturation(id_adresse_facturation);
	System::Data::SqlClient::SqlDataReader^ val = Ocad->lecteurData(sql);

	while (val->Read()) {
		
		vecteur_adresse_facturation.push_back(msclr::interop::marshal_as<std::string>(val[0]->ToString()));
		vecteur_adresse_facturation.push_back(msclr::interop::marshal_as<std::string>(val[1]->ToString()));
		vecteur_adresse_facturation.push_back(msclr::interop::marshal_as<std::string>(val[2]->ToString()));
		vecteur_adresse_facturation.push_back(msclr::interop::marshal_as<std::string>(val[3]->ToString()));
		vecteur_adresse_facturation.push_back(msclr::interop::marshal_as<std::string>(val[4]->ToString()));
		vecteur_adresse_facturation.push_back(msclr::interop::marshal_as<std::string>(val[5]->ToString()));
		vecteur_adresse_facturation.push_back(msclr::interop::marshal_as<std::string>(val[6]->ToString()));
		vecteur_adresse_facturation.push_back(msclr::interop::marshal_as<std::string>(val[7]->ToString()));

	}
	return vecteur_adresse_facturation;
}

std::vector<std::string> NS_Utilitaire_svc::CLserviceutilitaire::repertorierIdAdresseLivraison(std::vector<std::string> list_id_adresse_livraison, int id_client)
{
	System::String^ sql;
	sql = mapUtilitaire->SelectIdAdresseLivraison(id_client);
	System::Data::SqlClient::SqlDataReader^ val = Ocad->lecteurData(sql);

	while (val->Read()) {
		list_id_adresse_livraison.push_back(msclr::interop::marshal_as<std::string>(val[0]->ToString()));
	}
	return list_id_adresse_livraison;
}

std::vector<std::string> NS_Utilitaire_svc::CLserviceutilitaire::repertorierInfoArticles(std::vector<std::string> liste_info_articles, int ref_article)
{
	System::String^ sql;
	sql = mapUtilitaire->SelectInfoArticle(ref_article);
	System::Data::SqlClient::SqlDataReader^ val = Ocad->lecteurData(sql);

	while (val->Read()) {
		liste_info_articles.push_back(msclr::interop::marshal_as<std::string>(val[0]->ToString()));
		liste_info_articles.push_back(msclr::interop::marshal_as<std::string>(val[1]->ToString()));
		liste_info_articles.push_back(msclr::interop::marshal_as<std::string>(val[2]->ToString()));
		liste_info_articles.push_back(msclr::interop::marshal_as<std::string>(val[3]->ToString()));
		liste_info_articles.push_back(msclr::interop::marshal_as<std::string>(val[4]->ToString()));
		liste_info_articles.push_back(msclr::interop::marshal_as<std::string>(val[5]->ToString()));
		liste_info_articles.push_back(msclr::interop::marshal_as<std::string>(val[6]->ToString()));
		liste_info_articles.push_back(msclr::interop::marshal_as<std::string>(val[7]->ToString()));
		liste_info_articles.push_back(msclr::interop::marshal_as<std::string>(val[8]->ToString()));
	}
	return liste_info_articles;
}

std::vector<std::string> NS_Utilitaire_svc::CLserviceutilitaire::miseAjourAdresseLivraison(std::vector<std::string> vecteur_adresse_livraison, int id_adresse_livraison) {

	System::String^ sql;
	sql = mapUtilitaire->SelectInfoAdresseLivraison(id_adresse_livraison);
	System::Data::SqlClient::SqlDataReader^ val = Ocad->lecteurData(sql);

	while (val->Read()) {

		vecteur_adresse_livraison.push_back(msclr::interop::marshal_as<std::string>(val[0]->ToString()));
		vecteur_adresse_livraison.push_back(msclr::interop::marshal_as<std::string>(val[1]->ToString()));
		vecteur_adresse_livraison.push_back(msclr::interop::marshal_as<std::string>(val[2]->ToString()));
		vecteur_adresse_livraison.push_back(msclr::interop::marshal_as<std::string>(val[3]->ToString()));
		vecteur_adresse_livraison.push_back(msclr::interop::marshal_as<std::string>(val[4]->ToString()));
		vecteur_adresse_livraison.push_back(msclr::interop::marshal_as<std::string>(val[5]->ToString()));
		vecteur_adresse_livraison.push_back(msclr::interop::marshal_as<std::string>(val[6]->ToString()));
		vecteur_adresse_livraison.push_back(msclr::interop::marshal_as<std::string>(val[7]->ToString()));

	}
	return vecteur_adresse_livraison;
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

std::vector<std::string> NS_Utilitaire_svc::CLserviceutilitaire::repertorierIdPersonnel(std::vector<std::string> list_id_personnel) {
	System::String^ sql;
	sql = mapUtilitaire->SelectIdPersonnel();
	System::Data::SqlClient::SqlDataReader^ val = Ocad->lecteurData(sql);

	while (val->Read()) {
		list_id_personnel.push_back(msclr::interop::marshal_as<std::string>(val[0]->ToString()));
	}
	return list_id_personnel;
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

std::vector<std::string> NS_Utilitaire_svc::CLserviceutilitaire::miseAjourNomPrenom(std::vector<std::string> vecteur_nom_prenom, int id_client) {

	System::String^ sql;
	sql = mapUtilitaire->SelectNomPrenom(id_client);
	System::Data::SqlClient::SqlDataReader^ val = Ocad->lecteurData(sql);

	while (val->Read()) {
		vecteur_nom_prenom.push_back(msclr::interop::marshal_as<std::string>(val[0]->ToString()));
		vecteur_nom_prenom.push_back(msclr::interop::marshal_as<std::string>(val[1]->ToString()));
		vecteur_nom_prenom.push_back(msclr::interop::marshal_as<std::string>(val[2]->ToString()));
	}
	return vecteur_nom_prenom;
}

std::vector<std::string> NS_Utilitaire_svc::CLserviceutilitaire::miseAjourNomPrenomPersonnel(std::vector<std::string> vecteur_nom_prenom_personnel, int id_personnel) {

	System::String^ sql;
	sql = mapUtilitaire->SelectNomPrenomPersonnel(id_personnel);
	System::Data::SqlClient::SqlDataReader^ val = Ocad->lecteurData(sql);

	while (val->Read()) {
		vecteur_nom_prenom_personnel.push_back(msclr::interop::marshal_as<std::string>(val[0]->ToString()));
		vecteur_nom_prenom_personnel.push_back(msclr::interop::marshal_as<std::string>(val[1]->ToString()));
		vecteur_nom_prenom_personnel.push_back(msclr::interop::marshal_as<std::string>(val[2]->ToString()));
		vecteur_nom_prenom_personnel.push_back(msclr::interop::marshal_as<std::string>(val[3]->ToString()));

	}
	return vecteur_nom_prenom_personnel;
}

System::String^ NS_Utilitaire_svc::CLserviceutilitaire::recupererNumeroIncrementiel(System::String^numero_incrementiel, System::String^ ref_command) {
	System::String^ sql;
	sql = mapUtilitaire->SelectIncrementReference(ref_command);
	System::Data::SqlClient::SqlDataReader^ val = Ocad->lecteurData(sql);

	while (val->Read()) {
		numero_incrementiel = val[0]->ToString();
	
	}
	return numero_incrementiel;
}