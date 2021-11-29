#include "pch.h"
#include "CLserviceutilitaire.h"

NS_Utilitaire_svc::CLserviceutilitaire::CLserviceutilitaire(void) {
	this->oCad = gcnew NS_Comp_Data::CLconnect();
	this->mapClient = gcnew NS_map_Utilitaire::CLUtilitaire();
}