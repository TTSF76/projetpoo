#include "pch.h"
#include "CLclient.h"


System::String^ NS_map_client::CLclient::Create()
{

	return "insert into client (nom_client, prenom_client, date_naissance) values ('"+this->nom+"', '" + this->prenom + "','" + this->date_anniversaire + "') DECLARE @id_client int		SET @id_client = SCOPE_IDENTITY()		DECLARE @rue1 varchar(40)		SET @rue1 = '" + this->adresse_livraison->getRue() + "'		DECLARE @numero_rue1 char(40)		SET @numero_rue1 = '"+this->adresse_livraison->getNumeroRue()+"'		DECLARE @nom_residence1 char(40)		SET @nom_residence1 = '"+this->adresse_livraison->getNomResidence()+"'		DECLARE @numero_etage1 int		SET @numero_etage1 = "+this->adresse_livraison->getNumeroEtage()+"		DECLARE @id_ville1 int		SET @id_ville1 = "+this->adresse_livraison->getVille()+"		if not exists(select id_adresse from adresses where rue = @rue1 AND numero_rue = @numero_rue1 AND(NOT(nom_residence <> @nom_residence1 OR nom_residence IS NULL OR @nom_residence1 IS NULL) OR(nom_residence IS NULL AND @nom_residence1 IS NULL)) AND numero_etage = @numero_etage1 AND id_ville = @id_ville1)			begin			insert into adresses(rue, numero_rue, nom_residence, numero_etage, id_ville) values(@rue1, @numero_rue1, @nom_residence1, @numero_etage1, @id_ville1)			end			insert into livrer(id_adresse, id_client)			values			((select id_adresse from adresses where rue = @rue1 AND numero_rue = @numero_rue1 AND nom_residence = @nom_residence1 AND numero_etage = @numero_etage1 AND id_ville = @id_ville1),				(select id_client from client where id_client = @id_client))			DECLARE @rue2 varchar(40)			SET @rue2 = '"+this->adresse_facturation->getRue()+"'			DECLARE @numero_rue2 char(40)			SET @numero_rue2 = '" + this->adresse_facturation->getNumeroRue() + "'			DECLARE @nom_residence2 char(40)			SET @nom_residence2 = '"+this->adresse_facturation->getNomResidence()+"'			DECLARE @numero_etage2 int			SET @numero_etage2 = '"+this->adresse_facturation->getNumeroEtage()+"'			DECLARE @id_ville2 int			SET @id_ville2 = '"+this->adresse_livraison->getVille()+"'			if not exists(select id_adresse from adresses where rue = @rue2 AND numero_rue = @numero_rue2 AND(NOT(nom_residence <> @nom_residence2 OR nom_residence IS NULL OR @nom_residence2 IS NULL) OR(nom_residence IS NULL AND @nom_residence2 IS NULL)) AND numero_etage = @numero_etage2 AND id_ville = @id_ville2)				begin				insert into adresses(rue, numero_rue, nom_residence, numero_etage, id_ville) values(@rue2, @numero_rue2, @nom_residence2, @numero_etage2, @id_ville2)				end				insert into facturer(id_adresse, id_client)				values				((select id_adresse from adresses where rue = @rue2 AND numero_rue = @numero_rue2 AND nom_residence = @nom_residence2 AND numero_etage = @numero_etage2 AND id_ville = @id_ville2),					(select id_client from client where id_client = @id_client))";
}

System::String^ NS_map_client::CLclient::Update()
{
	return "";
}

System::String^ NS_map_client::CLclient::Delete()
{
	return "";
}

System::String^ NS_map_client::CLclient::Select()
{
	return "SELECT * FROM [ttsf76_db].[dbo].[client]";
}