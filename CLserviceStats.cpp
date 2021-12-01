#include "pch.h"
#include "CLserviceStats.h"
#include "CLstats.h"

NS_stats_svc::CLserviceStats::CLserviceStats() {
	this->Ocad = gcnew NS_Comp_Data::CLconnect();
	this->mapStats = gcnew NS_map_stats::CLstats();
}

System::Data::DataSet^ NS_stats_svc::CLserviceStats::calculerPanierMoyen() {
	System::String^ sql;
	sql = this->mapStats->panierMoyen();
	return this->Ocad->getRows(sql,"bob");
}

System::Data::DataSet^ NS_stats_svc::CLserviceStats::calculerChiffreDaffaire()
{
	System::String^ sql;
	sql = this->mapStats->chiffreAffaire(1,2);
	return this->Ocad->getRows(sql, "bobi");
}