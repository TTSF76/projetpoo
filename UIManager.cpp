#include "pch.h"
#include "UIManager.h"

void UIManager::modifierCouleur(System::Windows::Forms::Panel^ panel_menu_left, System::Windows::Forms::Panel^ panel_header, System::Windows::Forms::Button^ bouton_client, System::Windows::Forms::Button^ bouton_commande, System::Windows::Forms::Button^ bouton_stock, System::Windows::Forms::Button^ bouton_personnel, System::Windows::Forms::Button^ bouton_stats, int numero, System::Windows::Forms::Form^ MyForm1) {
	System::Drawing::Color couleur_client_bouton = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(80)),
		static_cast<System::Int32>(static_cast<System::Byte>(0)));
	System::Drawing::Color couleur_client_panel = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(120)),
		static_cast<System::Int32>(static_cast<System::Byte>(0)));
	System::Drawing::Color couleur_client_form = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(120)), static_cast<System::Int32>(static_cast<System::Byte>(165)),
		static_cast<System::Int32>(static_cast<System::Byte>(145)));

	System::Drawing::Color couleur_stock_bouton = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(85)),
		static_cast<System::Int32>(static_cast<System::Byte>(165)));
	System::Drawing::Color couleur_stock_panel = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(131)),
		static_cast<System::Int32>(static_cast<System::Byte>(255)));
	System::Drawing::Color couleur_stock_form = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(126)), static_cast<System::Int32>(static_cast<System::Byte>(185)),
		static_cast<System::Int32>(static_cast<System::Byte>(209)));

	System::Drawing::Color couleur_personnel_bouton = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(117)), static_cast<System::Int32>(static_cast<System::Byte>(117)),
		static_cast<System::Int32>(static_cast<System::Byte>(0)));
	System::Drawing::Color couleur_personnel_panel = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(175)), static_cast<System::Int32>(static_cast<System::Byte>(175)),
		static_cast<System::Int32>(static_cast<System::Byte>(0)));
	System::Drawing::Color couleur_personnel_form = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(242)), static_cast<System::Int32>(static_cast<System::Byte>(225)),
		static_cast<System::Int32>(static_cast<System::Byte>(147)));

	System::Drawing::Color couleur_commande_bouton = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
		static_cast<System::Int32>(static_cast<System::Byte>(155)));
	System::Drawing::Color couleur_commande_panel = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(160)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
		static_cast<System::Int32>(static_cast<System::Byte>(255)));
	System::Drawing::Color couleur_commande_form = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
		static_cast<System::Int32>(static_cast<System::Byte>(255)));

	System::Drawing::Color couleur_stats_bouton = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(145)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
		static_cast<System::Int32>(static_cast<System::Byte>(0)));
	System::Drawing::Color couleur_stats_panel = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(226)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
		static_cast<System::Int32>(static_cast<System::Byte>(0)));
	System::Drawing::Color couleur_stats_form = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
		static_cast<System::Int32>(static_cast<System::Byte>(128)));


	switch (numero) {

	case 1:

		bouton_client->BackColor = couleur_client_bouton;
		panel_menu_left->BackColor = couleur_client_panel;
		bouton_commande->BackColor = couleur_client_panel;
		bouton_stock->BackColor = couleur_client_panel;
		bouton_personnel->BackColor = couleur_client_panel;
		bouton_stats->BackColor = couleur_client_panel;
		panel_header->BackColor = couleur_client_panel;
		MyForm1->BackColor = couleur_client_form;
		break;

	case 2:
		bouton_stock->BackColor = couleur_stock_bouton;
		panel_menu_left->BackColor = couleur_stock_panel;
		bouton_commande->BackColor = couleur_stock_panel;
		bouton_client->BackColor = couleur_stock_panel;
		bouton_personnel->BackColor = couleur_stock_panel;
		bouton_stats->BackColor = couleur_stock_panel;
		panel_header->BackColor = couleur_stock_panel;
		MyForm1->BackColor = couleur_stock_form;
		break;

	case 3:
		bouton_personnel->BackColor = couleur_personnel_bouton;
		panel_menu_left->BackColor = couleur_personnel_panel;
		bouton_commande->BackColor = couleur_personnel_panel;
		bouton_client->BackColor = couleur_personnel_panel;
		bouton_stock->BackColor = couleur_personnel_panel;
		bouton_stats->BackColor = couleur_personnel_panel;
		panel_header->BackColor = couleur_personnel_panel;
		MyForm1->BackColor = couleur_personnel_form;
		break;

	case 4:
		bouton_commande->BackColor = couleur_commande_bouton;
		panel_menu_left->BackColor = couleur_commande_panel;
		bouton_personnel->BackColor = couleur_commande_panel;
		bouton_client->BackColor = couleur_commande_panel;
		bouton_stock->BackColor = couleur_commande_panel;
		bouton_stats->BackColor = couleur_commande_panel;
		panel_header->BackColor = couleur_commande_panel;
		MyForm1->BackColor = couleur_commande_form;
		break;

	case 5:

		bouton_stats->BackColor = couleur_stats_bouton;
		panel_menu_left->BackColor = couleur_stats_panel;
		bouton_commande->BackColor = couleur_stats_panel;
		bouton_client->BackColor = couleur_stats_panel;
		bouton_stock->BackColor = couleur_stats_panel;
		bouton_personnel->BackColor = couleur_stats_panel;
		panel_header->BackColor = couleur_stats_panel;
		MyForm1->BackColor = couleur_stats_form;
		break;

	}
}

void UIManager::afficherElementRubrique(System::Windows::Forms::DataGridView^ DataGridView1, System::Windows::Forms::Button^ bouton_select, System::Windows::Forms::Button^ bouton_create, System::Windows::Forms::Button^ bouton_delete, System::Windows::Forms::Button^ bouton_update, System::Windows::Forms::Button^ bouton_stats_valider, System::Windows::Forms::Label^ label_bienvenue, System::Windows::Forms::PictureBox^ logo_welcome, System::Windows::Forms::Label^ titre_Rubrique, int numero_rubrique) {

	if (numero_rubrique == 5)
	{
		bouton_select->Visible = false;
		bouton_create->Visible = false;
		bouton_delete->Visible = false;
		bouton_update->Visible = false;
		// cbx_stats->Visible = true;
		bouton_stats_valider->Visible = true;
	}
	else
	{
		bouton_select->Visible = true;
		bouton_create->Visible = true;
		bouton_delete->Visible = true;
		bouton_update->Visible = true;
		// cbx_stats->Visible = false;
		bouton_stats_valider->Visible = false;
	}

	DataGridView1->Visible = true;
	titre_Rubrique->Visible = true;
	label_bienvenue->Visible = false;
	logo_welcome->Visible = false;
	
	switch (numero_rubrique)
	{
	case 1:
		titre_Rubrique->Text = L"CLIENTS";
		break;
	case 2:
		titre_Rubrique->Text = L"STOCK";
		break;
	case 3:
		titre_Rubrique->Text = L"PERSONNEL";
		break;
	case 4:
		titre_Rubrique->Text = L"COMMANDE";
		break;
	case 5:
		titre_Rubrique->Text = L"STATISTIQUES";
	default:
		break;
	}
}