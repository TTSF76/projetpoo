#pragma once
ref class CLpersonne abstract
{
protected:
	int id;
	System::String^ nom;
	System::String^ prenom;

public:
	virtual System::String^ Create() = 0;
	virtual System::String^ Update() = 0;
	virtual System::String^ Delete() = 0;
	virtual System::String^ Select() = 0;
	virtual void setNom(System::String^);
	virtual void setPrenom(System::String^);
	virtual int getId();
	virtual System::String^ getNom();
	virtual System::String^ getPrenom();

};