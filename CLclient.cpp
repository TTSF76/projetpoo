#include "pch.h"
#include "CLclient.h"


System::String^ NS_map_client::CLclient::Create()
{
	return "SELECT * FROM dbo.Table1";
}

System::String^ NS_map_client::CLclient::Update()
{
	return "";
}

System::String^ NS_map_client::CLclient::Delete()
{
	return "";
}

System::String^ NS_map_client::CLclient::Select()
{
	return "SELECT * FROM [ttsf76_db].[dbo].[client]";
}