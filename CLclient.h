#pragma once
#include "CLpersonne.h"
#include "CLadresse.h"

namespace NS_map_client {
	ref class CLclient : public CLpersonne {
	private:
		System::String^ nom;
		System::String^ prenom;
		System::String^ date_anniversaire;
	public:
		void setDateNaissance(System::String^ date_anniversaire);
		System::String^ getDateNaissance();
		virtual System::String^ Create(CLadresse^ adresse_livraison, CLadresse^ adresse_facturation) override;
		virtual System::String^ Update() override;
		virtual System::String^ Delete() override;
		virtual System::String^ Select() override;
	};
};