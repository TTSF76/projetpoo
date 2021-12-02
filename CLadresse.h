#pragma once


ref class CLadresse {
private:
	int id_adresse;
	System::String^ pays;
	System::String^ region;
	int id_ville;
	System::String^ code_postal;
	System::String^ rue;
	System::String^ numero_rue;
	System::String^ nom_residence;
	int numero_etage;
public:
	int getIdAdresse();
	void setIdAdress(int);
	System::String^ getPays();
	void setPays(System::String^);
	System::String^ getRegion();
	void setRegion(System::String^);
	int getVille();
	void setVille(int);
	System::String^ getCodePostal();
	void setCodePostal(System::String^);
	System::String^ getNomResidence();
	void setNomResidence(System::String^);
	System::String^ getRue();
	void setRue(System::String^);
	System::String^ getNumeroRue();
	void setNumeroRue(System::String^);
	int getNumeroEtage();
	void setNumeroEtage(int);
	System::String^ DeleteLiv();
	System::String^ DeleteFac();
};