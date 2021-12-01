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

System::Data::DataSet^ NS_stats_svc::CLserviceStats::identifierProduitSeuil()
{
	System::String^ sql;
	sql = this->mapStats->restocker();
	return this->Ocad->getRows(sql, "test");
}

System::Data::DataSet^ NS_stats_svc::CLserviceStats::calculerMontantTotalAchats()
{
	System::String^ sql;
	sql = this->mapStats->montantTotal(1);
	return this->Ocad->getRows(sql, "test");
}

System::Data::DataSet^ NS_stats_svc::CLserviceStats::identifierPlusVendus()
{
	System::String^ sql;
	sql = this->mapStats->plusVendus();
	return this->Ocad->getRows(sql, "rest");
}

System::Data::DataSet^ NS_stats_svc::CLserviceStats::identifierMoinsVendus()
{
	System::String^ sql;
	sql = this->mapStats->moinsVendus();
	return this->Ocad->getRows(sql, "test");
}

System::String^ NS_stats_svc::CLserviceStats::convertToLabel(System::Data::DataSet^ ds, System::String^ nom) {
	System::String^ result = nom+ ": ";
	for each (System::Data::DataTable^ table in ds->Tables)
	{
		for each (System::Data::DataRow^ row in table->Rows)
		{
			for each (System::Data::DataColumn^ column in table->Columns)
			{
				result += row[column];
			}
		}
	}
	return result;
}
