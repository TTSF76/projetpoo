#pragma once
#include "pch.h"
#include "CLserviceclient.h"
#include "CLservicepersonnel.h"
#include "CLservicearticle.h"
#include "CLservicecommande.h"
#include "CLserviceadresse.h"


ref class UIAction
{
private:
	static NS_Client_svc::CLserviceclient^ svcClient = gcnew NS_Client_svc::CLserviceclient();
	static NS_Article_svc::CLservicearticle^ svcArticle = gcnew NS_Article_svc::CLservicearticle();
	static NS_Adresse_svc::CLserviceadresse^ svcAdresse = gcnew NS_Adresse_svc::CLserviceadresse();
	static System::Data::DataSet^ oDs;
	static NS_Personnel_svc::CLservicepersonnel^ svcPersonnel = gcnew NS_Personnel_svc::CLservicepersonnel();
	static NS_Commande_svc::CLservicecommande^ svcCommande = gcnew NS_Commande_svc::CLservicecommande();
public:
	static void selectButtonClient(System::Windows::Forms::DataGridView^, System::Windows::Forms::Label^);
	static void deleteButtonClient(System::Windows::Forms::Label^, NS_map_client::CLclient^, System::Windows::Forms::DataGridView^ dgv);
	static void validerButtonClient(System::Windows::Forms::Form^, NS_map_client::CLclient^);
	static void validerUpdateButtonClient(NS_map_client::CLclient^);
	
	static void selectButtonPersonnel(System::Windows::Forms::DataGridView^, System::Windows::Forms::Label^);
	static void deleteButtonPersonnel(System::Windows::Forms::Label^, NS_map_personnel::CLpersonnel^, System::Windows::Forms::DataGridView^ dgv);
	static void validerButtonPersonnel(System::Windows::Forms::Form^, NS_map_personnel::CLpersonnel^);

	static void selectButtonCommande(System::Windows::Forms::DataGridView^, System::Windows::Forms::Label^);
	static void validerButtonCommande(System::Windows::Forms::Form^, NS_map_commande::CLcommande^);
	static void deleteButtonCommande(System::Windows::Forms::Label^, NS_map_commande::CLcommande^, System::Windows::Forms::DataGridView^);

	static void selectButtonArticle(System::Windows::Forms::DataGridView^, System::Windows::Forms::Label^);
	static void validerButtonArticle(System::Windows::Forms::Form^ form, NS_map_article::CLarticle^ article);
	static void deleteButtonArticle(System::Windows::Forms::Label^ lbl, NS_map_article::CLarticle^ article, System::Windows::Forms::DataGridView^ dgv);

	static void insertButtonAdresseLiv(CLadresse^ adresse);
	static void insertButtonAdresseFac(CLadresse^ adresse);

	static void deleteButtonAdresseLiv(CLadresse^ adresse);
	static void deleteButtonAdresseFac(CLadresse^ adresse);

	static void validerUpdateButtonArticle(System::Windows::Forms::Form^ form, NS_map_article::CLarticle^ article);
};