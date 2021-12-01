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

		std::vector<std::string> repertorierIdClients(std::vector<std::string>);

		std::vector<std::string> miseAjourVilleCBCP(std::vector<std::string>, System::String^);
		std::vector<std::string> miseAjourRegionCBCP(std::vector<std::string>, System::String^);
		std::vector<std::string> miseAjourPaysCBCP(std::vector<std::string>, System::String^);
	};
}