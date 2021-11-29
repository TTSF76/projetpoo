#include "pch.h"
#include "UIManager.h"

void UIManager::modifierCouleur(System::Windows::Forms::Panel^ panel_menu_left, System::Windows::Forms::Panel^ panel_header, System::Windows::Forms::Button^ bouton_client, System::Windows::Forms::Button^ bouton_commande, System::Windows::Forms::Button^ bouton_stock, System::Windows::Forms::Button^ bouton_personnel, System::Windows::Forms::Button^ bouton_stats, int numero) {
	System::Drawing::Color couleur_client_bouton = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(80)),
		static_cast<System::Int32>(static_cast<System::Byte>(0)));
	System::Drawing::Color couleur_client_panel = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(120)),
		static_cast<System::Int32>(static_cast<System::Byte>(0)));

	System::Drawing::Color couleur_stock_bouton = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(85)),
		static_cast<System::Int32>(static_cast<System::Byte>(165)));
	System::Drawing::Color couleur_stock_panel = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(131)),
		static_cast<System::Int32>(static_cast<System::Byte>(255)));

	System::Drawing::Color couleur_personnel_bouton = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(117)), static_cast<System::Int32>(static_cast<System::Byte>(117)),
		static_cast<System::Int32>(static_cast<System::Byte>(0)));
	System::Drawing::Color couleur_personnel_panel = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(175)), static_cast<System::Int32>(static_cast<System::Byte>(175)),
		static_cast<System::Int32>(static_cast<System::Byte>(0)));

	System::Drawing::Color couleur_commande_bouton = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
		static_cast<System::Int32>(static_cast<System::Byte>(155)));
	System::Drawing::Color couleur_commande_panel = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(160)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
		static_cast<System::Int32>(static_cast<System::Byte>(255)));

	System::Drawing::Color couleur_stats_bouton = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(145)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
		static_cast<System::Int32>(static_cast<System::Byte>(0)));
	System::Drawing::Color couleur_stats_panel = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(226)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
		static_cast<System::Int32>(static_cast<System::Byte>(0)));

	switch (numero) {

	case 1:

		bouton_client->BackColor = couleur_client_bouton;
		panel_menu_left->BackColor = couleur_client_panel;
		bouton_commande->BackColor = couleur_client_panel;
		bouton_stock->BackColor = couleur_client_panel;
		bouton_personnel->BackColor = couleur_client_panel;
		bouton_stats->BackColor = couleur_client_panel;
		panel_header->BackColor = couleur_client_panel;
		break;

	case 2:
		bouton_stock->BackColor = couleur_stock_bouton;
		panel_menu_left->BackColor = couleur_stock_panel;
		bouton_commande->BackColor = couleur_stock_panel;
		bouton_client->BackColor = couleur_stock_panel;
		bouton_personnel->BackColor = couleur_stock_panel;
		bouton_stats->BackColor = couleur_stock_panel;
		panel_header->BackColor = couleur_stock_panel;
		break;

	case 3:
		bouton_personnel->BackColor = couleur_personnel_bouton;
		panel_menu_left->BackColor = couleur_personnel_panel;
		bouton_commande->BackColor = couleur_personnel_panel;
		bouton_client->BackColor = couleur_personnel_panel;
		bouton_stock->BackColor = couleur_personnel_panel;
		bouton_stats->BackColor = couleur_personnel_panel;
		panel_header->BackColor = couleur_personnel_panel;
		break;

	case 4:
		bouton_commande->BackColor = couleur_commande_bouton;
		panel_menu_left->BackColor = couleur_commande_panel;
		bouton_personnel->BackColor = couleur_commande_panel;
		bouton_client->BackColor = couleur_commande_panel;
		bouton_stock->BackColor = couleur_commande_panel;
		bouton_stats->BackColor = couleur_commande_panel;
		panel_header->BackColor = couleur_commande_panel;
		break;

	case 5:

		bouton_stats->BackColor = couleur_stats_bouton;
		panel_menu_left->BackColor = couleur_stats_panel;
		bouton_commande->BackColor = couleur_stats_panel;
		bouton_client->BackColor = couleur_stats_panel;
		bouton_stock->BackColor = couleur_stats_panel;
		bouton_personnel->BackColor = couleur_stats_panel;
		panel_header->BackColor = couleur_stats_panel;
		break;

	}
}

void UIManager::afficherElementRubrique(System::Windows::Forms::DataGridView^ DataGridView1, System::Windows::Forms::Button^ bouton_select, System::Windows::Forms::Button^ bouton_create, System::Windows::Forms::Button^ bouton_delete, System::Windows::Forms::Button^ bouton_update, System::Windows::Forms::Label^ label_bienvenue, System::Windows::Forms::PictureBox^ logo_welcome, System::Windows::Forms::Label^ titre_Rubrique, int numero_rubrique) {

	bouton_select->Visible = true;
	bouton_create->Visible = true;
	bouton_delete->Visible = true;
	bouton_update->Visible = true;
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