#pragma once
#include "pch.h"
#include "CLconnect.h"
#include "CLarticle.h"

namespace NS_Article_svc {
	ref class CLservicearticle {
	public:
		System::Data::DataSet^ selectAllArticle(System::String^);
		void insertArticle(NS_map_article::CLarticle^ article);
		void deleteArticle(NS_map_article::CLarticle^ article);
		CLservicearticle(void);
	private:
		NS_Comp_Data::CLconnect^ oCad;
		NS_map_article::CLarticle^ mapArticle;
	};
}