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

System::Data::DataSet^ NS_stats_svc::CLserviceStats::calculerChiffreDaffaire(int i1, int i2)
{
	System::String^ sql;
	sql = this->mapStats->chiffreAffaire(i1,i2);
	return this->Ocad->getRows(sql, "bobi");
}

System::Data::DataSet^ NS_stats_svc::CLserviceStats::identifierProduitSeuil()
{
	System::String^ sql;
	sql = this->mapStats->restocker();
	return this->Ocad->getRows(sql, "test");
}

System::Data::DataSet^ NS_stats_svc::CLserviceStats::calculerMontantTotalAchats(int i1)
{
	System::String^ sql;
	sql = this->mapStats->montantTotal(i1);
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

System::Data::DataSet^ NS_stats_svc::CLserviceStats::calculerValeurCommerciale()
{
	System::String^ sql;
	sql = this->mapStats->prixCommercial();
	return this->Ocad->getRows(sql, "test");
}

System::Data::DataSet^ NS_stats_svc::CLserviceStats::calculerValeurDachat()
{
	System::String^ sql;
	sql = this->mapStats->prixAchat();
	return this->Ocad->getRows(sql, "test");
}

System::Data::DataSet^ NS_stats_svc::CLserviceStats::calculerVariationCommerciale(int i1, int i2, int i3, int i4)
{
	System::String^ sql;
	sql = this->mapStats->varCommerciale(i1, i2, i3, i4);
	return this->Ocad->getRows(sql, "test");
}

System::String^ NS_stats_svc::CLserviceStats::convertToLabel(System::Data::DataSet^ ds, System::String^ nom) {
	System::String^ result = nom+ ": ";
	for each (System::Data::DataTable^ table in ds->Tables)
	{
		for each (System::Data::DataRow^ row in table->Rows)
		{
			result += "\n";
			for each (System::Data::DataColumn^ column in table->Columns)
			{
				result += row[column];
			}
		}
	}
	return result;
}
