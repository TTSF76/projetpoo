#include "pch.h"
#include "CLclient.h"




void NS_map_client::CLclient::setDateNaissance(System::String^ date_anniversaire)
{
	this->date_anniversaire = date_anniversaire;
}

System::String^ NS_map_client::CLclient::getDateNaissance()
{
	return this->date_anniversaire;
}

void NS_map_client::CLclient::setAdresseLivraison(CLadresse^ adresse_livraison)
{
	this->adresse_livraison = adresse_livraison;
}

CLadresse^ NS_map_client::CLclient::geAdresseLivraison(CLadresse^ adresse_livraison)
{
	return this->adresse_livraison;
}

void NS_map_client::CLclient::setAdresseFacturation(CLadresse^ adresse_facturation)
{
	this->adresse_facturation = adresse_facturation;
}

CLadresse^ NS_map_client::CLclient::geAdresseFacturation(CLadresse^ adresse_facturation)
{
	return this->adresse_facturation;
}

int NS_map_client::CLclient::getIdClient()
{
	return this->id_client;
}

void NS_map_client::CLclient::setIdClient(int id_client)
{
	this->id_client = id_client;
}

System::String^ NS_map_client::CLclient::Create()
{
	return "insert into client (nom_client, prenom_client, date_naissance) values ('"+this->nom+"', '" + this->prenom + "','" + this->date_anniversaire + "') DECLARE @id_client int		SET @id_client = SCOPE_IDENTITY()		DECLARE @rue1 varchar(40)		SET @rue1 = '" + this->adresse_livraison->getRue() + "'		DECLARE @numero_rue1 char(40)		SET @numero_rue1 = '"+this->adresse_livraison->getNumeroRue()+"'		DECLARE @nom_residence1 char(40)		SET @nom_residence1 = '"+this->adresse_livraison->getNomResidence()+"'		DECLARE @numero_etage1 int		SET @numero_etage1 = "+this->adresse_livraison->getNumeroEtage()+"		DECLARE @id_ville1 int		SET @id_ville1 = "+this->adresse_livraison->getVille()+"		if not exists(select id_adresse from adresses where rue = @rue1 AND numero_rue = @numero_rue1 AND(NOT(nom_residence <> @nom_residence1 OR nom_residence IS NULL OR @nom_residence1 IS NULL) OR(nom_residence IS NULL AND @nom_residence1 IS NULL)) AND numero_etage = @numero_etage1 AND id_ville = @id_ville1)			begin			insert into adresses(rue, numero_rue, nom_residence, numero_etage, id_ville) values(@rue1, @numero_rue1, @nom_residence1, @numero_etage1, @id_ville1)			end			insert into livrer(id_adresse, id_client)			values			((select id_adresse from adresses where rue = @rue1 AND numero_rue = @numero_rue1 AND nom_residence = @nom_residence1 AND numero_etage = @numero_etage1 AND id_ville = @id_ville1),				(select id_client from client where id_client = @id_client))			DECLARE @rue2 varchar(40)			SET @rue2 = '"+this->adresse_facturation->getRue()+"'			DECLARE @numero_rue2 char(40)			SET @numero_rue2 = '" + this->adresse_facturation->getNumeroRue() + "'			DECLARE @nom_residence2 char(40)			SET @nom_residence2 = '"+this->adresse_facturation->getNomResidence()+"'			DECLARE @numero_etage2 int			SET @numero_etage2 = '"+this->adresse_facturation->getNumeroEtage()+"'			DECLARE @id_ville2 int			SET @id_ville2 = '"+this->adresse_livraison->getVille()+"'			if not exists(select id_adresse from adresses where rue = @rue2 AND numero_rue = @numero_rue2 AND(NOT(nom_residence <> @nom_residence2 OR nom_residence IS NULL OR @nom_residence2 IS NULL) OR(nom_residence IS NULL AND @nom_residence2 IS NULL)) AND numero_etage = @numero_etage2 AND id_ville = @id_ville2)				begin				insert into adresses(rue, numero_rue, nom_residence, numero_etage, id_ville) values(@rue2, @numero_rue2, @nom_residence2, @numero_etage2, @id_ville2)				end				insert into facturer(id_adresse, id_client)				values				((select id_adresse from adresses where rue = @rue2 AND numero_rue = @numero_rue2 AND nom_residence = @nom_residence2 AND numero_etage = @numero_etage2 AND id_ville = @id_ville2),					(select id_client from client where id_client = @id_client))";
}

System::String^ NS_map_client::CLclient::Update()
{
	return "UPDATE client set date_naissance='" + this->date_anniversaire +"',nom_client='"+this->nom+"',prenom_client='"+this->prenom+"' WHERE id_client="+this->cvalue;
}

System::String^ NS_map_client::CLclient::Delete()
{
	return "DECLARE @id_client int SET @id_client = '"+this->id_client+"' DECLARE @id_adresse int delete from facturer where id_client = @id_client delete from livrer where id_client = @id_client delete from client where id_client = @id_client DELETE FROM adresses WHERE NOT EXISTS (SELECT * FROM personnel WHERE personnel.id_adresse=adresses.id_adresse) AND NOT EXISTS (SELECT * FROM livrer WHERE livrer.id_adresse=adresses.id_adresse) AND NOT EXISTS (SELECT * FROM facturer WHERE facturer.id_adresse=adresses.id_adresse) AND NOT EXISTS (SELECT * FROM facturation WHERE facturation.id_adresse=adresses.id_adresse) AND NOT EXISTS (SELECT * FROM commande WHERE commande.id_adresse=adresses.id_adresse)";
}

System::String^ NS_map_client::CLclient::Select()
{
	return "SELECT * FROM client";
}