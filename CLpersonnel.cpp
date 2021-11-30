#include "pch.h"
#include "CLpersonnel.h"

void NS_map_personnel::CLpersonnel::setDateEmbauche(System::String^ date_embauche) {
    this->date_embauche = date_embauche;
}

System::String^ NS_map_personnel::CLpersonnel::getDateEmbauche() {
    return date_embauche;
}

void NS_map_personnel::CLpersonnel::setAdresse(CLadresse^ adresse) {
    this->adresse = adresse;
}

CLadresse^ NS_map_personnel::CLpersonnel::getAdresse() {
    return adresse;
}

void NS_map_personnel::CLpersonnel::setIdSupHierarchique(int id_sup_hierarchique) {

    this->id_personnel_etre_dirige = id_sup_hierarchique;
}

System::String^ NS_map_personnel::CLpersonnel::Create()
{
    return "DECLARE @prenom_personnel varchar(40); SET @prenom_personnel = '"+this->prenom+"'; DECLARE @nom_personnel varchar(40); SET @nom_personnel = '"+this->nom+"'; DECLARE @date_embauche datetime; SET @date_embauche = '"+this->date_embauche+"'; DECLARE @sup_hier int; SET @sup_hier = '"+this->id_personnel_etre_dirige+"'; DECLARE @rue varchar(40); SET @rue = '"+adresse->getRue()+"'; DECLARE @numero_rue int; SET @numero_rue = '"+this->adresse->getNumeroRue()+"'; DECLARE @nom_residence varchar(40); SET @nom_residence = '"+this->adresse->getNomResidence()+"'; DECLARE @numero_etage int; SET @numero_etage = '"+this->adresse->getNumeroEtage()+"'; DECLARE @id_ville int; SET @id_ville = '"+this->adresse->getVille()+"'; If Not Exists(SELECT id_adresse FROM adresses WHERE rue=@rue AND numero_rue=@numero_rue AND (NOT (nom_residence <> @nom_residence OR nom_residence IS NULL OR @nom_residence IS NULL) OR (nom_residence IS NULL AND @nom_residence IS NULL)) AND numero_etage=@numero_etage AND id_ville=@id_ville) Begin INSERT INTO adresses (rue,numero_rue,nom_residence,numero_etage,id_ville) VALUES(@rue,@numero_rue,@nom_residence,@numero_etage,@id_ville) End INSERT INTO personnel (prenom_personnel,nom_personnel,date_embauche,id_adresse,id_personnel_etre_dirige) VALUES (@prenom_personnel,@nom_personnel,@date_embauche,(SELECT id_adresse FROM adresses WHERE rue=@rue AND numero_rue=@numero_rue AND (NOT (nom_residence <> @nom_residence OR nom_residence IS NULL OR @nom_residence IS NULL) OR (nom_residence IS NULL AND @nom_residence IS NULL)) AND numero_etage=@numero_etage AND id_ville=@id_ville),@sup_hier);";
}

System::String^ NS_map_personnel::CLpersonnel::Update()
{
    return "";
}

System::String^ NS_map_personnel::CLpersonnel::Delete()
{
    return "";
}

System::String^ NS_map_personnel::CLpersonnel::Select()
{
    return "SELECT * FROM personnel";
}