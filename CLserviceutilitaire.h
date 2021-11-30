#pragma once
#include "CLUtilitaire.h"
#include "CLconnect.h"
#include <iostream>
#include <cliext/vector>
#include <array>

namespace NS_Utilitaire_svc {
	ref class CLserviceutilitaire
	{
	private:
		NS_Comp_Data::CLconnect^ Ocad;
		NS_map_Utilitaire::CLUtilitaire^ mapUtilitaire;
	public:
		cliext::vector<System::String^> repertorierVilles(cliext::vector<System::String^>);
		CLserviceutilitaire(void);
        cliext::vector<System::String^> repertorierPays(cliext::vector<System::String^>);
		cliext::vector<System::String^> repertorierCodePostaux(cliext::vector<System::String^>);
		cliext::vector<System::String^> repertorierRegion(cliext::vector<System::String^>);

		cliext::vector<System::String^> miseAjourVilleCBCP(cliext::vector<System::String^>, System::String^);
		cliext::vector<System::String^> miseAjourRegionCBCP(cliext::vector<System::String^>, System::String^);
		cliext::vector<System::String^> miseAjourPaysCBCP(cliext::vector<System::String^>, System::String^);

		cliext::vector<System::String^> miseAjourCodePostalCBV(cliext::vector<System::String^>, System::String^);
		cliext::vector<System::String^> miseAjourRegionCBV(cliext::vector<System::String^>, System::String^);
		cliext::vector<System::String^> miseAjourPaysCBV(cliext::vector<System::String^>, System::String^);
	};
}