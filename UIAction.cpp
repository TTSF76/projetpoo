#include "pch.h"
#include "UIAction.h"
#include "CLclient.h"

void UIAction::selectButton(System::Windows::Forms::DataGridView^ dgv, System::Windows::Forms::Label^ lbl)
{
	if (lbl->Text == "CLIENTS") {
		dgv->Refresh();
		UIAction::oDs = UIAction::svcClient->selectAllClients("Rsl");
		dgv->DataSource = UIAction::oDs;
		dgv->DataMember = "Rsl";
	}
}
void UIAction::validerButton(System::Windows::Forms::Form^ form, NS_map_client::CLclient^ client)
{
	if (form->Name == "Ins�rer un nouveau client") {
		UIAction::svcClient->insertClient(client);
	}
}