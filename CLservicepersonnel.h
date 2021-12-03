#pragma once
#include "CLconnect.h"
#include "CLpersonnel.h"


namespace NS_Personnel_svc {
	ref class CLservicepersonnel
	{
	public:
		System::Data::DataSet^ selectAllPersonnel(System::String^);
		void insertPersonnel(NS_map_personnel::CLpersonnel^ personnel);
		void deletePersonnel(NS_map_personnel::CLpersonnel^ personnel);
		void updatePersonnel(NS_map_personnel::CLpersonnel^ personnel);
		CLservicepersonnel(void);
	private:
		NS_Comp_Data::CLconnect^ oCad;
		NS_map_personnel::CLpersonnel^ mapPersonnel;
	};
}
