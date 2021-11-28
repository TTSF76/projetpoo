#include "pch.h"
#include "UIManager.h"

void UIManager::modifierCouleur(projectView::MyForm1^ Form, int numero) {
	System::Drawing::Color couleur_client_bouton = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(80)),
		static_cast<System::Int32>(static_cast<System::Byte>(0)));
	System::Drawing::Color couleur_client_panel = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(120)),
		static_cast<System::Int32>(static_cast<System::Byte>(0)));

	System::Drawing::Color couleur_stock_bouton = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(85)),
		static_cast<System::Int32>(static_cast<System::Byte>(165)));
	System::Drawing::Color couleur_stock_panel = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(131)),
		static_cast<System::Int32>(static_cast<System::Byte>(255)));

	System::Drawing::Color couleur_personnel_bouton = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(200)), static_cast<System::Int32>(static_cast<System::Byte>(60)),
		static_cast<System::Int32>(static_cast<System::Byte>(0)));
	System::Drawing::Color couleur_personnel_panel = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(60)),
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

		Form->bouton_client->BackColor = couleur_client_bouton;
		Form->panel1->BackColor = couleur_client_panel;
		Form->bouton_commande->BackColor = couleur_client_panel;
		Form->bouton_stock->BackColor = couleur_client_panel;
		Form->bouton_personnel->BackColor = couleur_client_panel;
		Form->bouton_stats->BackColor = couleur_client_panel;
		break;

	case 2:
		Form->bouton_stock->BackColor = couleur_stock_bouton;
		Form->panel1->BackColor = couleur_stock_panel;
		Form->bouton_commande->BackColor = couleur_stock_panel;
		Form->bouton_client->BackColor = couleur_stock_panel;
		Form->bouton_personnel->BackColor = couleur_stock_panel;
		Form->bouton_stats->BackColor = couleur_stock_panel;
		break;

	case 3:
		Form->bouton_personnel->BackColor = couleur_personnel_bouton;
		Form->panel1->BackColor = couleur_personnel_panel;
		Form->bouton_commande->BackColor = couleur_personnel_panel;
		Form->bouton_client->BackColor = couleur_personnel_panel;
		Form->bouton_stock->BackColor = couleur_personnel_panel;
		Form->bouton_stats->BackColor = couleur_personnel_panel;
		break;

	case 4:
		Form->bouton_commande->BackColor = couleur_commande_bouton;
		Form->panel1->BackColor = couleur_commande_panel;
		Form->bouton_personnel->BackColor = couleur_commande_panel;
		Form->bouton_client->BackColor = couleur_commande_panel;
		Form->bouton_stock->BackColor = couleur_commande_panel;
		Form->bouton_stats->BackColor = couleur_commande_panel;
		break;

	case 5:

		Form->bouton_stats->BackColor = couleur_stats_bouton;
		Form->panel1->BackColor = couleur_stats_panel;
		Form->bouton_commande->BackColor = couleur_stats_panel;
		Form->bouton_client->BackColor = couleur_stats_panel;
		Form->bouton_stock->BackColor = couleur_stats_panel;
		Form->bouton_personnel->BackColor = couleur_stats_panel;
		break;

	}
}