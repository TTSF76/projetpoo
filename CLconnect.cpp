#include "pch.h"
#include "CLconnect.h"

NS_Comp_Data::CLcad::CLcad(void) {
	this->connexion_s = "Data Source=sql5102.site4now.net;Initial Catalog=db_a7ccf4_rouencaen001;Persist Security Info=True;User ID=db_a7ccf4_rouencaen001_admin;Password=TTSF7676";

	this->requete_SQL = "undefined";

	this->SqlConnection = gcnew System::Data::SqlClient::SqlConnection(this->connexion_s);
	this->SqlCommand = gcnew System::Data::SqlClient::SqlCommand(this->requete_SQL, this->SqlConnection);
	this->SqlDataAdapter = gcnew System::Data::SqlClient::SqlDataAdapter();
	this->DataSet = gcnew System::Data::DataSet();

	this->SqlCommand->CommandType = System::Data::CommandType::Text;

}

System::Data::DataSet^ NS_Comp_Data::CLcad::getRows(System::String^ sSql, System::String^ sDataTableName) {
	this->DataSet->Clear();
	this->requete_SQL = sSql;
	this->SqlCommand->CommandText = this->requete_SQL;
	this->SqlDataAdapter->SelectCommand = this->SqlCommand;
	this->SqlDataAdapter->Fill(this->DataSet, sDataTableName);

	return this->DataSet;
}

void NS_Comp_Data::CLcad::actionRows(System::String^ sSql) {
	this->requete_SQL = sSql;
	this->SqlCommand->CommandText = this->requete_SQL;
	this->SqlDataAdapter->SelectCommand = this->SqlCommand;
	this->SqlConnection->Open();
	this->SqlCommand->ExecuteNonQuery();
	this->SqlConnection->Close();
}