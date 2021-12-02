#pragma once
#include "pch.h"
#include "CLconnect.h"
#include "CLAdresse.h"

namespace NS_Adresse_svc {
	ref class CLserviceadresse {
	public:
		void insertAdresse(CLadresse^ adresse);
		void deleteAdresseLiv(CLadresse^ adresse);
		void deleteAdresseFac(CLadresse^ adresse);
		CLserviceadresse(void);
	private:
		NS_Comp_Data::CLconnect^ oCad;
		CLadresse^ mapAdresse;
	};
}