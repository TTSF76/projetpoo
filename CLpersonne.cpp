#include "pch.h"
#include "CLpersonne.h"
 

void CLpersonne::setNom(System::String^ Name) {
	this->nom = Name;
}

void CLpersonne::setPrenom(System::String^ Surname) {
	this->prenom = Surname;
}

int CLpersonne::getId() {
	return id;
}

System::String^ CLpersonne::getNom() {
	return nom;
}

System::String^ CLpersonne::getPrenom() {
	return prenom;
}
