#include "pch.h"
#include "UIAction.h"

void UIAction::selectButton(System::Windows::Forms::DataGridView^ dgv, System::Windows::Forms::Label^ lbl)
{
	if (lbl->Text == "CLIENTS") {
		dgv->Refresh();
		UIAction::oDs = UIAction::svcClient->selectAllClients("Rsl");
		dgv->DataSource = UIAction::oDs;
		dgv->DataMember = "Rsl";
	}
}
