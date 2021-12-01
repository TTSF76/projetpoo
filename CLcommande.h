#pragma once

namespace NS_map_commande {
	public ref class CLcommande
	{
	private:
		System::String^ ref_commande;
		System::String^ date_livraison;
		System::String^ date_emission;
		System::String^ date_paiement;
		System::String^ moyen_paiement;
		float total_ht, total_tva, total_ttc;
		int id_client,id_personnel, id_adresse_livraison, id_adresse_facturation, nombre_paiement;

	public:
		System::String^ Create();
		void Update();
		void Delete();
	    System::String^ Select();
		void setReference(System::String^);
		void setDateLivraison(System::String^);
		void setDateEmission(System::String^);
		void setTotalHT(float);
		void setTotalTVA(float);
		void setTotalTTC(float);
		void setIdClient(int);
		void setIdPersonnel(int);
		void setIdAdresseLivraison(int);
		void setIdAdresseFacturation(int);
		void setNombrePaiement(int);
		void setMoyenPaiement(System::String^);
		
		System::String^ getReference();
		System::String^ getDateLivraison();
		System::String^ getDateEmission();
		System::String^ getDatePaiement();
		System::String^ getMoyenPaiement();
		float getTotalHT();
		float getTotalTVA();
		float getTotalTTC();
		int getIdClient();
		int getIdPersonnel();
		int getIdAdresseLivraison();
		int getIdAdresseFacturation();
		int getNombrePaiement();
	
		
		
	};
};
