#include "pch.h"
#include "CLserviceclient.h"

NS_Client_svc::CLserviceclient::CLserviceclient(void)
{
	this->oCad = gcnew NS_Comp_Data::CLconnect();
	this->mapClient = gcnew NS_map_client::CLclient();
}


System::Data::DataSet^ NS_Client_svc::CLserviceclient::selectAllClients(System::String^ dataTableName) {
	System::String^ sql;
	sql = this->mapClient->Select();
	return this->oCad->getRows(sql, dataTableName);
}

void NS_Client_svc::CLserviceclient::insertClient(NS_map_client::CLclient^ client)
{
	System::String^ sql;
	this->mapClient = client;
	sql = this->mapClient->Create();
	this->oCad->actionRows(sql);
}

void NS_Client_svc::CLserviceclient::deleteClient(NS_map_client::CLclient^ client)
{
	System::String^ sql;
	this->mapClient = client;
	sql = this->mapClient->Delete();
	this->oCad->actionRows(sql);
}