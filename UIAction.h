#pragma once
#include "pch.h"
#include "CLserviceclient.h"
#include "CLservicepersonnel.h"
#include "CLservicearticle.h"


ref class UIAction
{
private:
	static NS_Client_svc::CLserviceclient^ svcClient = gcnew NS_Client_svc::CLserviceclient();
	static NS_Article_svc::CLservicearticle^ svcArticle = gcnew NS_Article_svc::CLservicearticle();
	static System::Data::DataSet^ oDs;
	static NS_Personnel_svc::CLservicepersonnel^ svcPersonnel = gcnew NS_Personnel_svc::CLservicepersonnel();
public:
	static void selectButtonClient(System::Windows::Forms::DataGridView^, System::Windows::Forms::Label^);
	static void deleteButtonClient(System::Windows::Forms::Label^, NS_map_client::CLclient^, System::Windows::Forms::DataGridView^ dgv);
	
	static void validerButtonClient(System::Windows::Forms::Form^, NS_map_client::CLclient^);

	static void selectButtonPersonnel(System::Windows::Forms::DataGridView^, System::Windows::Forms::Label^);
	static void deleteButtonPersonnel(System::Windows::Forms::Label^, NS_map_personnel::CLpersonnel^, System::Windows::Forms::DataGridView^ dgv);

	static void validerButtonPersonnel(System::Windows::Forms::Form^, NS_map_personnel::CLpersonnel^);

	static void selectButtonStock(System::Windows::Forms::DataGridView^, System::Windows::Forms::Label^);
};