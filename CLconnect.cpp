#include "pch.h"
#include "CLconnect.h"

NS_Comp_Data::CLconnect::CLconnect(void) {
	this->connexion_s = "Data Source=ttsf.database.windows.net;Initial Catalog=ttsf;User ID=ttsf76_db;Password=yAHsu@XKdgsC6Hy";

	this->requete_SQL = "undefined";

	this->SqlConnection = gcnew System::Data::SqlClient::SqlConnection(this->connexion_s);
	this->SqlCommand = gcnew System::Data::SqlClient::SqlCommand(this->requete_SQL, this->SqlConnection);
	this->SqlDataAdapter = gcnew System::Data::SqlClient::SqlDataAdapter();
	this->DataSet = gcnew System::Data::DataSet();

	this->SqlCommand->CommandType = System::Data::CommandType::Text;

}

System::Data::DataSet^ NS_Comp_Data::CLconnect::getRows(System::String^ sSql, System::String^ sDataTableName) {
	this->DataSet->Clear();
	this->requete_SQL = sSql;
	this->SqlCommand->CommandText = this->requete_SQL;
	this->SqlDataAdapter->SelectCommand = this->SqlCommand;
	this->SqlDataAdapter->Fill(this->DataSet, sDataTableName);

	return this->DataSet;
}

void NS_Comp_Data::CLconnect::actionRows(System::String^ sSql) {
	this->requete_SQL = sSql;
	this->SqlCommand->CommandText = this->requete_SQL;
	this->SqlDataAdapter->SelectCommand = this->SqlCommand;
	this->SqlConnection->Open();
	this->SqlCommand->ExecuteNonQuery();
	this->SqlConnection->Close();
}

System::Data::SqlClient::SqlDataReader^ NS_Comp_Data::CLconnect::lecteurData(System::String^ sSql) {
	this->requete_SQL = sSql;
	SqlCommand = gcnew System::Data::SqlClient::SqlCommand(requete_SQL, this->SqlConnection);
	this->SqlCommand->CommandType = System::Data::CommandType::Text;
	SqlConnection->Close();
	SqlConnection->Open();
	System::Data::SqlClient::SqlDataReader^ val = this->SqlCommand->ExecuteReader();
	return val;

}