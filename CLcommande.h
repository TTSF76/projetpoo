#pragma once

public ref class CLcommande
{
private:
	System::String^ ref_commande;
	System:: String^ date_livraison;
	System::String^ date_emission;
	float total_ht, total_tva, total_ttc;

public:

	void Create();
	void Update();
	void Delete();
	void Show();
	void setReference(System::String^);
	void setDateLivraison(System::String^);
	void setDateEmission(System::String^);
	void setTotalHT(float);
	void setTotalTVA(float);
	void setTotalTTC(float);
	System::String^ getReference();
	System::String^ getDateLivraison();
	System::String^ getDateEmission();
	float getTotalHT();
	float getTotalTVA();
	float getTotalTTC();

};

