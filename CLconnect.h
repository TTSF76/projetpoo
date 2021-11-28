#pragma once

namespace NS_Comp_Data {
	ref class CLconnect {
	private:
		System::String^ requete_SQL;
		System::String^ connexion_s;
		System::Data::SqlClient::SqlConnection^ SqlConnection;
		System::Data::SqlClient::SqlCommand^ SqlCommand;
		System::Data::SqlClient::SqlDataAdapter^ SqlDataAdapter;
		System::Data::DataSet^ DataSet;

	public:
		CLconnect(void);
		System::Data::DataSet^ getRows(System::String^, System::String^);
		void actionRows(System::String^);
	};
}