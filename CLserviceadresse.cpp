#include "pch.h"
#include "CLserviceadresse.h"

NS_Adresse_svc::CLserviceadresse::CLserviceadresse(void)
{
	this->oCad = gcnew NS_Comp_Data::CLconnect();
	this->mapAdresse = gcnew CLadresse();
}


void NS_Adresse_svc::CLserviceadresse::insertAdresse(CLadresse^ adresse)
{
    throw gcnew System::NotImplementedException();
}

void NS_Adresse_svc::CLserviceadresse::deleteAdresseLiv(CLadresse^ adresse)
{
	System::String^ sql;
	this->mapAdresse = adresse;
	sql = this->mapAdresse->DeleteLiv();
	this->oCad->actionRows(sql);
}

void NS_Adresse_svc::CLserviceadresse::deleteAdresseFac(CLadresse^ adresse)
{
	System::String^ sql;
	this->mapAdresse = adresse;
	sql = this->mapAdresse->DeleteFac();
	this->oCad->actionRows(sql);
}
