#pragma once
ref class CLpersonne
{
protected:
	int id;
	System::String^ Nom;
	System::String^ Prenom;

public:
	virtual System::String^ Create() = 0;
	virtual System::String^ Update() = 0;
	virtual System::String^ Delete() = 0;
	virtual System::String^ Show() = 0;
	virtual void setNom(System::String^);
	virtual void setPrenom(System::String^);
	virtual int getId();
	virtual System::String^ getNom();
	virtual System::String^ getPrenom();

};

