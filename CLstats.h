#pragma once
namespace NS_map_stats {
	ref class CLstats {
	public:
		System::String^ panierMoyen();
		System::String^ chiffreAffaire(int, int);
		System::String^ restocker();
		System::String^ montantTotal(int);
		System::String^ plusVendus();
		System::String^ moinsVendus();
		System::String^ prixAchat();
		System::String^ prixCommercial();
		System::String^ varCommerciale(int, int, int, int);
	};
}



