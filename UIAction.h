#pragma once
#include "pch.h"
#include "CLserviceclient.h"


ref class UIAction
{
private:
	static NS_Client_svc::CLserviceclient^ svcClient = gcnew NS_Client_svc::CLserviceclient();
	static System::Data::DataSet^ oDs;
public:
	static void selectButton(System::Windows::Forms::DataGridView^ dgb, System::Windows::Forms::Label^ lbl);
	static void validerButton(System::Windows::Forms::Form^ form,NS_map_client::CLclient^ client,CLadresse^ adresse_livraison, CLadresse^ adresse_facturation);
};
