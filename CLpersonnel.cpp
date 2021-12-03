#include "pch.h"
#include "CLpersonnel.h"

void NS_map_personnel::CLpersonnel::setDateEmbauche(System::String^ date_embauche) {
    this->date_embauche = date_embauche;
}

System::String^ NS_map_personnel::CLpersonnel::getDateEmbauche() {
    return date_embauche;
}

void NS_map_personnel::CLpersonnel::setAdresse(CLadresse^ adresse) {
    this->adresse_personnel = adresse;
}

CLadresse^ NS_map_personnel::CLpersonnel::getAdresse() {
    return adresse_personnel;
}

void NS_map_personnel::CLpersonnel::setIdSupHierarchique(int id_sup_hierarchique) {

    this->id_personnel_etre_dirige = id_sup_hierarchique;
}

void NS_map_personnel::CLpersonnel::setIdPersonnel(int id_personnel)
{
    this->id_personnel=id_personnel;
}

int NS_map_personnel::CLpersonnel::getIdPersonnel()
{
    return this->id_personnel;
}

System::String^ NS_map_personnel::CLpersonnel::Create()
{
    System::String^ id_manager;
    if (this->id_personnel_etre_dirige == 0) { id_manager = "NULL"; }
    else { id_manager = this->id_personnel_etre_dirige.ToString(); }
    return "DECLARE @prenom_personnel varchar(40); SET @prenom_personnel = '"+this->prenom+"'; DECLARE @nom_personnel varchar(40); SET @nom_personnel = '"+this->nom+"'; DECLARE @date_embauche datetime; SET @date_embauche = '"+this->date_embauche+"'; DECLARE @sup_hier int; SET @sup_hier = "+ id_manager +"; DECLARE @rue varchar(40); SET @rue = '"+adresse_personnel->getRue()+"'; DECLARE @numero_rue int; SET @numero_rue = '"+this->adresse_personnel->getNumeroRue()+"'; DECLARE @nom_residence varchar(40); SET @nom_residence = '"+this->adresse_personnel->getNomResidence()+"'; DECLARE @numero_etage int; SET @numero_etage = '"+this->adresse_personnel->getNumeroEtage()+"'; DECLARE @id_ville int; SET @id_ville = (SELECT id_ville FROM villes WHERE region='" + this->adresse_personnel->getRegion() + "' AND pays='" + this->adresse_personnel->getPays() + "' AND code_postal='" + this->adresse_personnel->getCodePostal() + "'); If Not Exists(SELECT id_adresse FROM adresses WHERE rue=@rue AND numero_rue=@numero_rue AND (NOT (nom_residence <> @nom_residence OR nom_residence IS NULL OR @nom_residence IS NULL) OR (nom_residence IS NULL AND @nom_residence IS NULL)) AND numero_etage=@numero_etage AND id_ville=@id_ville) Begin INSERT INTO adresses (rue,numero_rue,nom_residence,numero_etage,id_ville) VALUES(@rue,@numero_rue,@nom_residence,@numero_etage,@id_ville) End INSERT INTO personnel (prenom_personnel,nom_personnel,date_embauche,id_adresse,id_personnel_etre_dirige) VALUES (@prenom_personnel,@nom_personnel,@date_embauche,(SELECT id_adresse FROM adresses WHERE rue=@rue AND numero_rue=@numero_rue AND (NOT (nom_residence <> @nom_residence OR nom_residence IS NULL OR @nom_residence IS NULL) OR (nom_residence IS NULL AND @nom_residence IS NULL)) AND numero_etage=@numero_etage AND id_ville=@id_ville),@sup_hier);";
}

System::String^ NS_map_personnel::CLpersonnel::Update()
{
    System::String^ id_manager;
    if (this->id_personnel_etre_dirige == 0) { id_manager = "NULL"; }
    else { id_manager = this->id_personnel_etre_dirige.ToString(); }
    return "DECLARE @id_personnel int; SET @id_personnel = "+NS_map_personnel::CLpersonnel::pvalue+"; DECLARE @prenom_personnel varchar(40); SET @prenom_personnel = '"+this->prenom+"'; DECLARE @nom_personnel varchar(40); SET @nom_personnel = '"+this->nom+"'; DECLARE @date_embauche datetime; SET @date_embauche = '"+this->date_embauche+"'; DECLARE @sup_hier int; SET @sup_hier = "+id_manager+"; DECLARE @rue varchar(40); SET @rue = '"+this->adresse_personnel->getRue()+"'; DECLARE @numero_rue int; SET @numero_rue = '"+this->adresse_personnel->getNumeroRue() + "'; DECLARE @nom_residence varchar(40); SET @nom_residence = '"+this->adresse_personnel->getNomResidence()+"'; DECLARE @numero_etage int; SET @numero_etage = '" + this->adresse_personnel->getNumeroEtage() + "'; DECLARE @id_ville int; SET @id_ville = (SELECT id_ville FROM villes WHERE region='" + this->adresse_personnel->getRegion() + "' AND pays='" + this->adresse_personnel->getPays() + "' AND code_postal='" + this->adresse_personnel->getCodePostal() + "'); If Not Exists(SELECT id_adresse FROM adresses WHERE rue=@rue AND numero_rue=@numero_rue AND (NOT (nom_residence <> @nom_residence OR nom_residence IS NULL OR @nom_residence IS NULL) OR (nom_residence IS NULL AND @nom_residence IS NULL)) AND numero_etage=@numero_etage AND id_ville=@id_ville) Begin INSERT INTO adresses (rue,numero_rue,nom_residence,numero_etage,id_ville) VALUES(@rue,@numero_rue,@nom_residence,@numero_etage,@id_ville) End UPDATE personnel SET prenom_personnel=@prenom_personnel,nom_personnel=@nom_personnel,date_embauche=@date_embauche,id_personnel_etre_dirige=@sup_hier, id_adresse=(SELECT id_adresse FROM adresses WHERE rue=@rue AND numero_rue=@numero_rue AND (NOT (nom_residence <> @nom_residence OR nom_residence IS NULL OR @nom_residence IS NULL) OR (nom_residence IS NULL AND @nom_residence IS NULL)) AND numero_etage=@numero_etage AND id_ville=@id_ville) WHERE id_personnel=@id_personnel; IF NOT EXISTS(SELECT id_adresse FROM personnel WHERE id_adresse=( SELECT id_adresse FROM adresses WHERE id_adresse = (SELECT id_adresse FROM adresses WHERE id_adresse = (SELECT id_adresse FROM personnel WHERE id_personnel=@id_personnel))) AND id_personnel != @id_personnel) Begin DELETE FROM adresses WHERE NOT EXISTS (SELECT * FROM personnel WHERE personnel.id_adresse=adresses.id_adresse) AND NOT EXISTS (SELECT * FROM livrer WHERE livrer.id_adresse=adresses.id_adresse) AND NOT EXISTS (SELECT * FROM facturer WHERE facturer.id_adresse=adresses.id_adresse) AND NOT EXISTS (SELECT * FROM facturation WHERE facturation.id_adresse=adresses.id_adresse) AND NOT EXISTS (SELECT * FROM commande WHERE commande.id_adresse=adresses.id_adresse) End";
}

System::String^ NS_map_personnel::CLpersonnel::Delete()
{
    return "DELETE FROM personnel WHERE id_personnel="+this->id_personnel;
}

System::String^ NS_map_personnel::CLpersonnel::Select()
{
    return "SELECT * FROM personnel";
}