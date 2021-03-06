

#include "CLconnect.h"
#include "CLstats.h"
#pragma once
namespace NS_stats_svc {
	ref class CLserviceStats {
	private:
		NS_Comp_Data::CLconnect^ Ocad;
		NS_map_stats::CLstats^ mapStats;
	public:
		CLserviceStats();
		System::Data::DataSet^ calculerPanierMoyen();
		System::Data::DataSet^ calculerChiffreDaffaire(int, int);
		System::Data::DataSet^ identifierProduitSeuil();
		System::Data::DataSet^ calculerMontantTotalAchats(int);
		System::Data::DataSet^ identifierPlusVendus();
		System::Data::DataSet^ identifierMoinsVendus();
		System::Data::DataSet^ calculerValeurCommerciale();
		System::Data::DataSet^ calculerValeurDachat();
		System::Data::DataSet^ calculerVariationCommerciale(int, int, int, int);
		System::String^ convertToLabel(System::Data::DataSet^, System::String^);
	};
}