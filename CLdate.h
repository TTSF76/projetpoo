#pragma once
public ref class CLdate
{
private:
	int  jour, mois, annee;
public:
	CLdate();
	void CheckValidite();
	void setDate(int mois, int jour, int annee);
	System::String^ getDate();
	int getDay();
	int getMonth();
	int getYear();
};