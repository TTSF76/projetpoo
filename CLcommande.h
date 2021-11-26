#pragma once
#include "CLdate.h"

public ref class CLcommande
{
private:
	System::String^ ref_commande;
	CLdate^ date_livraison;
	CLdate^ date_emission;
	float total_ht, total_tva, total_ttc;

public:

	void Create();
	void Update();
	void Delete();
	void Show();
	void setReference(System::String^);
	void setDateLivraison(CLdate^);
	void setDateEmission(CLdate^);
	void setTotalHT(float);
	void setTotalTVA(float);
	void setTotalTTC(float);
	System::String^ getReference();
	CLdate^ getDateLivraison();
	CLdate^ getDateEmission();
	float getTotalHT();
	float getTotalTVA();
	float getTotalTTC();

};

