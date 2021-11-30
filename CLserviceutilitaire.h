#pragma once
#include "CLUtilitaire.h"
#include "CLconnect.h"
#include <iostream>
#include <cliext/vector>

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

	};
}