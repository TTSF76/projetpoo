#include "pch.h"
#include "CLpersonne.h"
 

void CLpersonne::setNom(System::String^ Name) {
	this->Nom = Name;
}

void CLpersonne::setPrenom(System::String^ Surname) {
	this->Prenom = Surname;
}

int CLpersonne::getId() {
	return id;
}

System::String^ CLpersonne::getNom() {
	return Nom;
}

System::String^ CLpersonne::getPrenom() {
	return Prenom;
}
