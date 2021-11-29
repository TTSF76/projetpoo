#pragma once
#include "CLUtilitaire.h"
#include "CLconnect.h"
#include <iostream>
#include <vector>

namespace NS_Utilitaire_svc {
	ref class CLserviceutilitaire
	{
	private:
		NS_Comp_Data::CLconnect^ Ocad;
		NS_map_Utilitaire::CLUtilitaire^ mapUtilitaire;
	public:
		void repertorierVilles(std::vector<System::String^>&);
		CLserviceutilitaire(void);

	};
}