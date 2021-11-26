#include "pch.h"
#include "CLdate.h"

CLdate::CLdate() {
}

void CLdate::CheckValidite() {

}

void CLdate::setDate(int mois, int jour, int annee) {

	this->annee = annee;
	this->mois = mois;
	this->jour = jour;
}
System::String^ CLdate::getDate() {
	return mois.ToString() + '/' + jour.ToString() + '/' + annee.ToString();
}