#include "pch.h"
#include "CLservicepersonnel.h"

NS_Personnel_svc::CLservicepersonnel::CLservicepersonnel(void) {
	this->oCad = gcnew NS_Comp_Data::CLconnect();
	this->mapPersonnel = gcnew NS_map_personnel::CLpersonnel();
}

System::Data::DataSet^ NS_Personnel_svc::CLservicepersonnel::selectAllPersonnel(System::String^ dataTableName) {
	System::String^ sql;
	sql = this->mapPersonnel->Select();
	return this->oCad->getRows(sql, dataTableName);
}

void NS_Personnel_svc::CLservicepersonnel::insertPersonnel(NS_map_personnel::CLpersonnel^ personnel) {
	System::String^ sql;
	this->mapPersonnel = personnel;
	sql = this->mapPersonnel->Create();
	this->oCad->actionRows(sql);
}

void NS_Personnel_svc::CLservicepersonnel::deletePersonnel(NS_map_personnel::CLpersonnel^ personnel)
{
	System::String^ sql;
	this->mapPersonnel = personnel;
	sql = this->mapPersonnel->Delete();
	this->oCad->actionRows(sql);
}

void NS_Personnel_svc::CLservicepersonnel::updatePersonnel(NS_map_personnel::CLpersonnel^ personnel)
{
	System::String^ sql;
	this->mapPersonnel = personnel;
	sql = this->mapPersonnel->Update();
	this->oCad->actionRows(sql);
}
