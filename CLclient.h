#pragma once
#include "CLpersonne.h"
#include "CLadresse.h"

namespace NS_map_client {
	ref class CLclient : public CLpersonne {
	private:
		CLadresse^ adresse_facturation;
		CLadresse^ adresse_livraison;
		System::String^ date_anniversaire;
	public:
		System::String^ Create() override;
		virtual System::String^ Update() override;
		virtual System::String^ Delete() override;
		virtual System::String^ Show() override;
	};
};