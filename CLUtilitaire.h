#pragma once
namespace NS_map_Utilitaire {
	ref class CLUtilitaire
	{
	private:
	
	public:
		System::String^ SelectVille();
		System::String^ SelectPays(); 
		System::String^ SelectCodePostal();
		System::String^ SelectRegion();

		System::String^ SelectVilleCp(System::String^);
		System::String^ SelectRegionCp(System::String^);
		System::String^ SelectPaysCp(System::String^);

		System::String^ SelectCodePostalV(System::String^);
		System::String^ SelectPaysV(System::String^);
		System::String^ SelectRegionV(System::String^);

		System::String^ SelectIdClient();
		System::String^ SelectNomPrenom(int);
		
		System::String^ SelectIdAdresseFacturation(int);
		System::String^ SelectInfoAdresseFacturation(int);

		System::String^ SelectIdAdresseLivraison(int);
		System::String^ SelectInfoAdresseLivraison(int);

	};
}

