#pragma once
ref class CLdate
{
private:
	int  jour, mois, annee;
public:
	CLdate();
	void CheckValidite();
	void setDate(int, int, int);
	System::String^ getDate();
};