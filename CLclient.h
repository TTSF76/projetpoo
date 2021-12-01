#pragma once
#include "CLpersonne.h"
#include "CLadresse.h"

namespace NS_map_client {
	ref class CLclient : public CLpersonne {
	private:
		CLadresse^ adresse_livraison;
		CLadresse^ adresse_facturation;
		System::String^ date_anniversaire;
		int id_client;
	public:
		void setDateNaissance(System::String^ date_anniversaire);
		System::String^ getDateNaissance();
		void setAdresseLivraison(CLadresse^ adresse_livraison);
		CLadresse^ geAdresseLivraison(CLadresse^ adresse_livraison);
		void setAdresseFacturation(CLadresse^ adresse_facturation);
		CLadresse^ geAdresseFacturation(CLadresse^ adresse_facturation);
		int getIdClient();
		void setIdClient(int id_client);
		virtual System::String^ Create() override;
		virtual System::String^ Update() override;
		virtual System::String^ Delete() override;
		virtual System::String^ Select() override;
	};
};