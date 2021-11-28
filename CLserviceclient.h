#pragma once
#include "pch.h"
#include "CLconnect.h"
#include "CLclient.h"

namespace NS_Client_svc {
	ref class CLserviceclient {
	public:
		System::Data::DataSet^ selectAllClients(System::String^);
		CLserviceclient(void);
	private:
		NS_Comp_Data::CLconnect^ oCad;
		NS_map_client::CLclient^ mapClient;
	};
}