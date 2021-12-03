#pragma once
#include "CLUtilitaire.h"
#include "CLconnect.h"
#include <iostream>
#include <cliext/vector>
#include <array>
#include <msclr\marshal_cppstd.h>

namespace NS_Utilitaire_svc {
	ref class CLserviceutilitaire
	{
	private:
		NS_Comp_Data::CLconnect^ Ocad;
		NS_map_Utilitaire::CLUtilitaire^ mapUtilitaire;
	public:
		std::vector <std::string> repertorierVilles(std::vector<std::string>);
		CLserviceutilitaire(void);
		std::vector<std::string> repertorierPays(std::vector<std::string>);
		std::vector<std::string> repertorierCodePostaux(std::vector<std::string>);
		std::vector<std::string> repertorierRegion(std::vector<std::string>);
		std::vector<std::string> repertorierIdPersonnel(std::vector<std::string>);
		std::vector<std::string> repertorierSuperieurHierarchique(std::vector<std::string>);


		std::vector<std::string> repertorierIdClients(std::vector<std::string>);
		System::String^ recupererNumeroIncrementiel(System::String^,System::String^);

		std::vector<std::string> repertorierIdAdresseFacturation(std::vector<std::string>,int);
		std::vector<std::string> miseAjourAdresseFacturation(std::vector<std::string>, int);

		std::vector<std::string> repertorierIdAdresseLivraison(std::vector<std::string>, int);
		std::vector<std::string> miseAjourAdresseLivraison(std::vector<std::string>, int);

        std::vector<std::string> miseAjourNomPrenom(std::vector<std::string>, int);
		std::vector<std::string> miseAjourNomPrenomPersonnel(std::vector<std::string>, int);

		std::vector<std::string> miseAjourVilleCBCP(std::vector<std::string>, System::String^);
		std::vector<std::string> miseAjourRegionCBCP(std::vector<std::string>, System::String^);
		std::vector<std::string> miseAjourPaysCBCP(std::vector<std::string>, System::String^);

		std::vector<std::string> repertorierArticles(std::vector<std::string>);
		std::vector<std::string> repertorierInfoArticles(std::vector<std::string> ,int);
		std::vector<std::string> NS_Utilitaire_svc::CLserviceutilitaire::miseAjourNomPrenonManager(std::vector<std::string> vecteur_nom_prenom_manager, int id_manager);

		std::vector<std::string> recupererInfoClient(std::vector<std::string>, System::String^);

	};
}