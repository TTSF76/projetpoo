#include "pch.h"
#include "CLservicecommande.h"

NS_Commande_svc::CLservicecommande::CLservicecommande(void)
{
	this->oCad = gcnew NS_Comp_Data::CLconnect();
	this->mapCommande = gcnew NS_map_commande::CLcommande();
}

System::Data::DataSet^ NS_Commande_svc::CLservicecommande::selectAllCommandes(System::String^ dataTableName) {
	System::String^ sql;
	sql = this->mapCommande->Select();
	return this->oCad->getRows(sql, dataTableName);
}

void NS_Commande_svc::CLservicecommande::insertCommande(NS_map_commande::CLcommande^ commande)
{
	System::String^ sql;
	this->mapCommande = commande;
	sql = this->mapCommande->Create();
	this->oCad->actionRows(sql);
}

void NS_Commande_svc::CLservicecommande::deleteCommande(NS_map_commande::CLcommande^ commande)
{
	System::String^ sql;
	this->mapCommande = commande;
	sql = this->mapCommande->Delete();
	this->oCad->actionRows(sql);
}