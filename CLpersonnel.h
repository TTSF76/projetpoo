#pragma once
#include "CLpersonne.h"
#include "CLadresse.h"

namespace NS_map_personnel {
	ref class CLpersonnel : public CLpersonne {
private:

	int id_personnel_etre_dirige;
	CLadresse^ adresse_personnel;
	System::String^ date_embauche;
	NS_map_personnel::CLpersonnel^ superieur_hierarchique;
	int id_personnel;

public:
	void setIdSupHierarchique(int);
	void setIdPersonnel(int);
	int getIdPersonnel();
	void setDateEmbauche(System::String^);
	System::String^ getDateEmbauche(); 
	void setAdresse(CLadresse^ adresse);
	CLadresse^ getAdresse();

	virtual System::String^ Create() override;
	virtual System::String^ Update() override;
	virtual System::String^ Delete() override;
	virtual System::String^ Select() override;
	};
};

