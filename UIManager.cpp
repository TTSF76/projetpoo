#include "pch.h"
#include "UIManager.h"

void UIManager::modifierCouleur(System::Windows::Forms::Panel^ panel1, System::Windows::Forms::Button^ bouton_client, System::Windows::Forms::Button^ bouton_commande, System::Windows::Forms::Button^ bouton_stock, System::Windows::Forms::Button^ bouton_personnel, System::Windows::Forms::Button^ bouton_stats, int numero) {
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
		panel1->BackColor = couleur_client_panel;
		bouton_commande->BackColor = couleur_client_panel;
		bouton_stock->BackColor = couleur_client_panel;
		bouton_personnel->BackColor = couleur_client_panel;
		bouton_stats->BackColor = couleur_client_panel;
		break;

	case 2:
		bouton_stock->BackColor = couleur_stock_bouton;
		panel1->BackColor = couleur_stock_panel;
		bouton_commande->BackColor = couleur_stock_panel;
		bouton_client->BackColor = couleur_stock_panel;
		bouton_personnel->BackColor = couleur_stock_panel;
		bouton_stats->BackColor = couleur_stock_panel;
		break;

	case 3:
		bouton_personnel->BackColor = couleur_personnel_bouton;
		panel1->BackColor = couleur_personnel_panel;
		bouton_commande->BackColor = couleur_personnel_panel;
		bouton_client->BackColor = couleur_personnel_panel;
		bouton_stock->BackColor = couleur_personnel_panel;
		bouton_stats->BackColor = couleur_personnel_panel;
		break;

	case 4:
		bouton_commande->BackColor = couleur_commande_bouton;
		panel1->BackColor = couleur_commande_panel;
		bouton_personnel->BackColor = couleur_commande_panel;
		bouton_client->BackColor = couleur_commande_panel;
		bouton_stock->BackColor = couleur_commande_panel;
		bouton_stats->BackColor = couleur_commande_panel;
		break;

	case 5:

		bouton_stats->BackColor = couleur_stats_bouton;
		panel1->BackColor = couleur_stats_panel;
		bouton_commande->BackColor = couleur_stats_panel;
		bouton_client->BackColor = couleur_stats_panel;
		bouton_stock->BackColor = couleur_stats_panel;
		bouton_personnel->BackColor = couleur_stats_panel;
		break;

	}
}