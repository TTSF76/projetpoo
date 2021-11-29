#pragma once
#include "CLUtilitaire.h"
#include "CLconnect.h"

namespace NS_Utilitaire_svc {
	ref class CLserviceutilitaire
	{
	private:

		NS_Comp_Data::CLconnect^ Ocad;
		NS_map_Utilitaire::CLUtilitaire^ mapUtilitaire;
	public:
		System::Data::DataSet^ repertorierVilles(System::String^);
		CLserviceutilitaire(void);

	};
}