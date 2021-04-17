#include "pch.h"
#include "TestFunction.h"

bool AddUser(const string& sName, const string& sAge)
{
	string strSql = "";
	strSql += "insert into user(name,age)";
	strSql += "values('";
	strSql += sName;
	strSql += "',";
	strSql += sAge;
	strSql += ");";

	char* cErrMsg;
	int nRes = sqlite3_exec(pDB, strSql.c_str(), 0, 0, &cErrMsg);
	if (nRes != SQLITE_OK)
	{
		cout << "add user fail: " << cErrMsg << endl;
		return false;
	}
	else
	{
		cout << "add user success: " << sName.c_str() << "\t" << sAge.c_str() << endl;
	}

	return true;
}

bool DeleteUser(const string& sName)
{
	string strSql = "";
	strSql += "delete from user where name='";
	strSql += sName;
	strSql += "';";

	char* cErrMsg;
	int nRes = sqlite3_exec(pDB, strSql.c_str(), 0, 0, &cErrMsg);
	if (nRes != SQLITE_OK)
	{
		cout << "delete user fail: " << cErrMsg << endl;
		return false;
	}
	else
	{
		cout << "delete user success: " << sName.c_str() << endl;
	}

	return true;
}

bool ModifyUser(const string& sName, const string& sAge)
{
	string strSql = "";
	strSql += "update user set age =";
	strSql += sAge;
	strSql += " where name='";
	strSql += sName;
	strSql += "';";

	char* cErrMsg;
	int nRes = sqlite3_exec(pDB, strSql.c_str(), 0, 0, &cErrMsg);
	if (nRes != SQLITE_OK)
	{
		cout << "modify user fail: " << cErrMsg << endl;
		return false;
	}
	else
	{
		cout << "modify user success: " << sName.c_str() << "\t" << sAge.c_str() << endl;
	}

	return true;
}

static int UserResult(void *NotUsed, int argc, char **argv, char **azColName)
{
	for (int i = 0; i < argc; i++)
	{
		cout << azColName[i] << " = " << (argv[i] ? argv[i] : "NULL") << ", ";
	}
	cout << endl;

	return 0;
}

bool SelectUser()
{
	char* cErrMsg;
	int res = sqlite3_exec(pDB, "select * from user;", UserResult, 0, &cErrMsg);

	if (res != SQLITE_OK)
	{
		cout << "select fail: " << cErrMsg << endl;
		return false;
	}

	return true;
}