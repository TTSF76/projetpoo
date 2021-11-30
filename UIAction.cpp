#include "pch.h"
#include "UIAction.h"
#include "CLclient.h"
#include "CLpersonnel.h"

void UIAction::selectButtonClient(System::Windows::Forms::DataGridView^ dgv, System::Windows::Forms::Label^ lbl)
{
	if (lbl->Text == "CLIENTS") {
		dgv->Refresh();
		UIAction::oDs = UIAction::svcClient->selectAllClients("Rsl");
		dgv->DataSource = UIAction::oDs;
		dgv->DataMember = "Rsl";
	}
}
void UIAction::validerButtonClient(System::Windows::Forms::Form^ form, NS_map_client::CLclient^ client)
{
	if (form->Name == "InputClientInserer") {
		UIAction::svcClient->insertClient(client);
	}
}

void UIAction::selectButtonPersonnel(System::Windows::Forms::DataGridView^ dgv, System::Windows::Forms::Label^ lbl) {
	if (lbl->Text == "PERSONNEL") {
		dgv->Refresh();
		UIAction::oDs = UIAction::svcPersonnel->selectAllPersonnel("Rsl");
		dgv->DataSource = UIAction::oDs;
		dgv->DataMember = "Rsl";
	}
}

void UIAction::validerButtonPersonnel(System::Windows::Forms::Form^ form, NS_map_personnel::CLpersonnel^ personnel)
{
	if (form->Name == "InputPersonnelInserer") {
		UIAction::svcPersonnel->insertPersonnel(personnel);
	}
}