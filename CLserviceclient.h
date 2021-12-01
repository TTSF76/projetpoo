#pragma once
#include "pch.h"
#include "CLconnect.h"
#include "CLclient.h"

namespace NS_Client_svc {
	ref class CLserviceclient {
		public:
			System::Data::DataSet^ selectAllClients(System::String^);
			void insertClient(NS_map_client::CLclient^ client);
			void deleteClient(NS_map_client::CLclient^ client);
			CLserviceclient(void);
		private:
			NS_Comp_Data::CLconnect^ oCad;
			NS_map_client::CLclient^ mapClient;
	};
}