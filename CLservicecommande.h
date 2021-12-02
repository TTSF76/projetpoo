#pragma once
#include "pch.h"
#include "CLconnect.h"
#include "CLcommande.h"

namespace NS_Commande_svc {
	ref class CLservicecommande {
	public:
		System::Data::DataSet^ selectAllCommandes(System::String^);
		void insertCommande(NS_map_commande::CLcommande^);
		void deleteCommande(NS_map_commande::CLcommande^);
		CLservicecommande(void);
	private:
		NS_Comp_Data::CLconnect^ oCad;
		NS_map_commande::CLcommande^ mapCommande;
	};
}