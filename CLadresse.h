#pragma once

ref class CLadresse {
private:
	int id_adresse;
	System::String^ pays;
	System::String^ region;
	System::String^ ville;
	System::String^ code_postal;
	System::String^ rue;
	int numero_rue;
	System::String^ nom_residence;
	int numero_etage;
public:
	int getIdAdresse();
	void setIdAdress(int);
	System::String^ getPays();
	void setPays(System::String^);
	System::String^ getRegion();
	void setRegion(System::String^);
	System::String^ getVille();
	void setVille(System::String^);
	System::String^ getCodePostal();
	void setCodePostal(System::String^);
	System::String^ getNomResidence();
	void setNomResidence(System::String^);
	int getNumeroRue();
	void setNumeroRue(int);
};