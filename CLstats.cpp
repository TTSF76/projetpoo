#include "pch.h"
#include "CLstats.h"


System::String^ NS_map_stats::CLstats::panierMoyen() {
	return "EXEC panierMoyen;";
}

System::String^ NS_map_stats::CLstats::chiffreAffaire(int annee, int mois) {
	return "EXEC chiffreAffaire @annee = " + annee + ", @mois = " + mois + ";";
}

System::String^ NS_map_stats::CLstats::restocker() {
	return "EXEC restocker";
}

System::String^ NS_map_stats::CLstats::montantTotal(int clientId) {
	return "EXEC montantTotal @clientId = " + clientId + ";";
}

System::String^ NS_map_stats::CLstats::plusVendus() {
	return "EXEC plusVendus;";
}

System::String^ NS_map_stats::CLstats::moinsVendus() {
	return "EXEC moinsVendus;";
}

System::String^ NS_map_stats::CLstats::prixAchat() {
	return "EXEC prixAchat;";
}

System::String^ NS_map_stats::CLstats::prixCommercial() {
	return "EXEC prixCommercial";
}

System::String^ NS_map_stats::CLstats::varCommerciale(int tva, int marge, int remise, int demarque) {
	return "EXEC varCommerciale @tva = " + tva + ", @marge = " + marge + ", @remise = " + remise + ", @demarche = " + demarque + ";";
}