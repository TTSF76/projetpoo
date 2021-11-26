#pragma once
#include "CLpersonne.h"
#include "CLadresse.h"

ref class CLpersonnel : public CLpersonne
{
private:

	int id_personnel_etre_dirige;
	CLadresse^ adresse;
	System::String^ date_embauche;

public:

	virtual System::String^ Create() override;
	virtual System::String^ Update() override;
	virtual System::String^ Delete() override;
	virtual System::String^ Show() override;


};

