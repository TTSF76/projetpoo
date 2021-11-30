#pragma once
#include "CLconnect.h"
#include "CLpersonnel.h"


namespace NS_Personnel_svc {
	ref class CLservicepersonnel
	{
	public:
		System::Data::DataSet^ selectAllPersonnel(System::String^);
		void insertPersonnel(NS_map_personnel::CLpersonnel^ client);
		CLservicepersonnel(void);
	private:
		NS_Comp_Data::CLconnect^ oCad;
		NS_map_personnel::CLpersonnel^ mapPersonnel;
	};
}