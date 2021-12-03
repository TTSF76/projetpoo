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

void UIAction::selectButtonArticle(System::Windows::Forms::DataGridView^ dgv, System::Windows::Forms::Label^ lbl) {
	if (lbl->Text == "STOCK") {
		dgv->Refresh();
		UIAction::oDs = UIAction::svcArticle->selectAllArticle("Rsl");
		dgv->DataSource = UIAction::oDs;
		dgv->DataMember = "Rsl";
	}
}

void UIAction::deleteButtonClient(System::Windows::Forms::Label^, NS_map_client::CLclient^ client, System::Windows::Forms::DataGridView^ dgv)
{
	UIAction::svcClient->deleteClient(client);
	dgv->Refresh();
	UIAction::oDs = UIAction::svcClient->selectAllClients("Rsl");
	dgv->DataSource = UIAction::oDs;
	dgv->DataMember = "Rsl";
}

void UIAction::deleteButtonPersonnel(System::Windows::Forms::Label^, NS_map_personnel::CLpersonnel^ personnel, System::Windows::Forms::DataGridView^ dgv)
{
	UIAction::svcPersonnel->deletePersonnel(personnel);
	dgv->Refresh();
	UIAction::oDs = UIAction::svcPersonnel->selectAllPersonnel("Rsl");
	dgv->DataSource = UIAction::oDs;
	dgv->DataMember = "Rsl";
}

void UIAction::validerButtonPersonnel(System::Windows::Forms::Form^ form, NS_map_personnel::CLpersonnel^ personnel)
{
	if (form->Name == "InputPersonnelInserer") {
		UIAction::svcPersonnel->insertPersonnel(personnel);
	}
}

void UIAction::selectButtonCommande(System::Windows::Forms::DataGridView^ dgv, System::Windows::Forms::Label^ lbl) {
	if (lbl->Text == "COMMANDE") {
		dgv->Refresh();
		UIAction::oDs = UIAction::svcCommande->selectAllCommandes("Rsl");
		dgv->DataSource = UIAction::oDs;
		dgv->DataMember = "Rsl";
	}
}
void UIAction::validerButtonCommande(System::Windows::Forms::Form^ form, NS_map_commande::CLcommande^ commande)
{
	if (form->Name == "InputCommandeInserer") {
		UIAction::svcCommande->insertCommande(commande);
	}
}
void UIAction::deleteButtonCommande(System::Windows::Forms::Label^ lbl, NS_map_commande::CLcommande^ commande, System::Windows::Forms::DataGridView^ dgv) {
	UIAction::svcCommande->deleteCommande(commande);
	dgv->Refresh();
	UIAction::oDs = UIAction::svcCommande->selectAllCommandes("Rsl");
	dgv->DataSource = UIAction::oDs;
	dgv->DataMember = "Rsl";
}

void UIAction::validerButtonArticle(System::Windows::Forms::Form^ form, NS_map_article::CLarticle^ article)
{
	if (form->Name == "InputArticleInserer") {
		UIAction::svcArticle->insertArticle(article);
	}
}

void UIAction::validerUpdateButtonArticle(System::Windows::Forms::Form^ form, NS_map_article::CLarticle^ article)
{
	if (form->Name == "InputArticleUpdate") {
		UIAction::svcArticle->updateArticle(article);
	}
}


void UIAction::deleteButtonArticle(System::Windows::Forms::Label^ lbl, NS_map_article::CLarticle^ article, System::Windows::Forms::DataGridView^ dgv)
{
	UIAction::svcArticle->deleteArticle(article);
	dgv->Refresh();
	UIAction::oDs = UIAction::svcArticle->selectAllArticle("Rsl");
	dgv->DataSource = UIAction::oDs;
	dgv->DataMember = "Rsl";
}

void UIAction::deleteButtonAdresseLiv(CLadresse^ adresse)
{
	UIAction::svcAdresse->deleteAdresseLiv(adresse);
}

void UIAction::deleteButtonAdresseFac(CLadresse^ adresse)
{
	UIAction::svcAdresse->deleteAdresseFac(adresse);
}

void UIAction::insertButtonAdresseLiv(CLadresse^ adresse)
{
	UIAction::svcAdresse->insertAdresseLiv(adresse);
}

void UIAction::insertButtonAdresseFac(CLadresse^ adresse)
{
	UIAction::svcAdresse->insertAdresseFac(adresse);
}

void UIAction::validerUpdateButtonClient(NS_map_client::CLclient^ client)
{
	UIAction::svcClient->updateClient(client);
}

void UIAction::validerUpdateButtonPersonnel(System::Windows::Forms::Form^ form, NS_map_personnel::CLpersonnel^ personnel)
{
	UIAction::svcPersonnel->updatePersonnel(personnel);
}