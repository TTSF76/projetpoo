#include "pch.h"
#include "CLservicearticle.h"

void NS_Article_svc::CLservicearticle::deleteArticle(NS_map_article::CLarticle^ article)
{
	System::String^ sql;
	this->mapArticle = article;
	sql = this->mapArticle->Delete();
	this->oCad->actionRows(sql);
}

NS_Article_svc::CLservicearticle::CLservicearticle(void)
{
	this->oCad = gcnew NS_Comp_Data::CLconnect();
	this->mapArticle = gcnew NS_map_article::CLarticle();
}


System::Data::DataSet^ NS_Article_svc::CLservicearticle::selectAllArticle(System::String^ dataTableName) {
	System::String^ sql;
	sql = this->mapArticle->Select();
	return this->oCad->getRows(sql, dataTableName);
}

void NS_Article_svc::CLservicearticle::insertArticle(NS_map_article::CLarticle^ article)
{
	System::String^ sql;
	this->mapArticle = article;
	sql = this->mapArticle->Create();
	this->oCad->actionRows(sql);
}