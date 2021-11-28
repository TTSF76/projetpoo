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
		NS_Comp_Data::CLcad^ oCad;
		NS_map_client::CLclient^ mapClient;
	};
}