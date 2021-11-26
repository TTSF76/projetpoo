#include "pch.h"
#include "CLconnect.h"

NS_Comp_Data::CLcad::CLcad(void) {
	this->sCnx = "Data Source=LAPTOP-JD3V9C6N\\MSSQL_FABIEN;Initial Catalog=Corbeille;Persist Security Info=True;User ID=CNX_P6;Password=Test123";

	this->sSql = "undefined";

	this->oCnx = gcnew System::Data::SqlClient::SqlConnection(this->sCnx);
	this->oCmd = gcnew System::Data::SqlClient::SqlCommand(this->sSql, this->oCnx);
	this->oDa = gcnew System::Data::SqlClient::SqlDataAdapter();
	this->oDs = gcnew System::Data::DataSet();

	this->oCmd->CommandType = System::Data::CommandType::Text;

}

System::Data::DataSet^ NS_Comp_Data::CLcad::getRows(System::String^ sSql, System::String^ sDataTableName) {
	this->oDs->Clear();
	this->sSql = sSql;
	this->oCmd->CommandText = this->sSql;
	this->oDa->SelectCommand = this->oCmd;
	this->oDa->Fill(this->oDs, sDataTableName);

	return this->oDs;
}

void NS_Comp_Data::CLcad::actionRows(System::String^ sSql) {
	this->sSql = sSql;
	this->oCmd->CommandText = this->sSql;
	this->oDa->SelectCommand = this->oCmd;
	this->oCnx->Open();
	this->oCmd->ExecuteNonQuery();
	this->oCnx->Close();
}