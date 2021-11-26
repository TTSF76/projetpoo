#pragma once
#include "CLpersonne.h"
#include "CLadresse.h"

namespace NS_map_personnel {
	ref class CLpersonnel : public CLpersonne {
private:

	int id_personnel_etre_dirige;
	CLadresse^ adresse;
	System::String^ date_embauche;
		NS_map_personnel::CLpersonnel^ superieur_hierarchique;
public:
		System::String^ Create() override;
	virtual System::String^ Update() override;
	virtual System::String^ Delete() override;
	virtual System::String^ Show() override;
	};
};

