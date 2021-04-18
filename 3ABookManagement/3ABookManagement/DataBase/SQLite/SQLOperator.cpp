#include "stdafx.h"
#include "sqlite3.h"
#include "SQLOperator.h"


CSQLOperator & CSQLOperator::GetInstance()
{
	static CSQLOperator sqlOp;
	return sqlOp;
}

CSQLOperator::CSQLOperator()
: m_pSqlite3(NULL)
, m_strDBPath("")
{
}

CSQLOperator::~CSQLOperator()
{
}

Result CSQLOperator::InitialDatabase()
{
	Result result = Result();
	int nRes = sqlite3_open(m_strDBPath.c_str(), &m_pSqlite3);
	if (nRes != SQLITE_OK)
	{
		result.errCode = EC_DBINITFAIL;
		result.errDesc = "Open database failed";
	}
	return result;
}

Result CSQLOperator::CloseDatabase()
{
	Result result = Result();
	sqlite3_close(m_pSqlite3);
	return result;
}

static int UserResult(void *NotUsed, int argc, char **argv, char **azColName)
{
	for (int i = 0; i < argc; i++)
	{
		//azColName[i];
		//(argv[i] ? argv[i] : "NULL");
	}
	return 0;
}

Result CSQLOperator::LoadAllUsers(list<CUser>& listUsers)
{
	Result result = Result();

	char *cErrMsg = NULL;
	char* sqlstatement = "select * from user;";
	int nRes = sqlite3_exec(m_pSqlite3, sqlstatement, UserResult, 0, &cErrMsg);
	if (nRes != SQLITE_OK)
	{
		result.errCode = EC_DBINITFAIL;
		result.errDesc = "load user fail: " + string(cErrMsg);
	}
	else
	{
		result.errCode = EC_SUCCESS;
		result.errDesc = "load user success";
	}

	return result;
}

Result CSQLOperator::AddUser(const CUser & user)
{
	Result result = Result();

	string strSql = "";
	strSql += "insert into user(id, role, name, password, headpic)";
	strSql += "values('";
	strSql += user.GetUserID();
	strSql += "',";
	strSql += user.GetUserRole();
	strSql += "',";
	strSql += user.GetUserName();
	strSql += "',";
	strSql += user.GetUserPassword();
	strSql += "',";
	strSql += user.GetUserHeadPicture();
	strSql += ");";

	char* cErrMsg = NULL;
	int nRes = sqlite3_exec(m_pSqlite3, strSql.c_str(), 0, 0, &cErrMsg);
	if (nRes != SQLITE_OK)
	{
		result.errCode = EC_DBINITFAIL;
		result.errDesc = "add user fail: " + string(cErrMsg);
	}
	else
	{
		result.errCode = EC_SUCCESS;
		result.errDesc = "add user success: " + user.GetUserName();
	}

	return result;
}

Result CSQLOperator::DeleteUser(const string & strUserID)
{
	Result result = Result();

	string strSql = "";
	strSql += "delete from user where id='";
	strSql += strUserID;
	strSql += "';";

	char* cErrMsg = NULL;
	int nRes = sqlite3_exec(m_pSqlite3, strSql.c_str(), 0, 0, &cErrMsg);
	if (nRes != SQLITE_OK)
	{
		result.errCode = EC_DELUSERFAIL;
		result.errDesc = "delete user fail: " + string(cErrMsg);
	}
	else
	{
		result.errCode = EC_SUCCESS;
		result.errDesc = "delete user success: " + strUserID;
	}

	return result;
}

Result CSQLOperator::ModifyUser(const CUser & newUser)
{
	Result result = Result();

	string strSql = "";
	strSql += "update user set name=";
	strSql += newUser.GetUserName();
	strSql += ", role=";
	strSql += newUser.GetUserRole();
	strSql += ", password=";
	strSql += newUser.GetUserPassword();
	strSql += ", headpic=";
	strSql += newUser.GetUserHeadPicture();
	strSql += " where id='";
	strSql += newUser.GetUserID();
	strSql += "';";

	char* cErrMsg = NULL;
	int nRes = sqlite3_exec(m_pSqlite3, strSql.c_str(), 0, 0, &cErrMsg);
	if (nRes != SQLITE_OK)
	{
		result.errCode = EC_ModifyUSERFAIL;
		result.errDesc = "modify user fail: " + string(cErrMsg);
	}
	else
	{
		result.errCode = EC_SUCCESS;
		result.errDesc = "modify user success: " + newUser.GetUserName();
	}

	return result;
}
