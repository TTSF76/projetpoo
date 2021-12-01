#pragma once

namespace NS_map_article {
	ref class CLarticle
	{
	private:

		int ref_article, stock_article, quantite_reapprovisionnement;
		System::String^ nature;
		System::String^ nom_article;
		System::String^ couleur_article;
		float remise_article, prix_article_ht, taux_tva;

	public:

		void setNature(System::String^);
		void setNom(System::String^);
		void setStock(int);
		void setRemise(float);
		void setPrixHT(float);
		void setQuantiteReapprovisionnement(int);
		void setTauxTVA(float);
		void setCouleur(System::String^);
		int getReference();
		System::String^ getNom();
		int getStock();
		float getRemise();
		float getPrixHT();
		int getQuantiteReapprovisionnement();
		float getTauxTVA();
		System::String^ getCouleur();

		System::String^ Create();
		System::String^ Update();
		System::String^ Delete();
		System::String^ Select();

	};
};
