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

System::String^ CLdate::getDate()
{
	return this->mois + "-" + this->jour + "-" + this->annee;
}

int CLdate::getDay() {
	return this->jour;
}

int CLdate::getMonth() {
	return this->mois;
}

int CLdate::getYear() {
	return this->annee;
}