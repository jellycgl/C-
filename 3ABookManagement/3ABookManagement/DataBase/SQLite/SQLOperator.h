#pragma once

#include <list>
#include <string>

#include "sqlite3.h"
#include "..\..\Common\Common.h"
#include "..\..\DataModel\User.h"

using namespace std;

// C++ 11 thread safety
class CSQLOperator
{

public:
	static CSQLOperator & GetInstance();

private:
	CSQLOperator();
	~CSQLOperator();
	CSQLOperator(const CSQLOperator & bookManager);
	const CSQLOperator &operator=(const CSQLOperator & bookManager);

public:
	// DataBase
	Result InitialDatabase();
	Result CloseDatabase();

	// User
	Result LoadAllUsers(list<CUser> & listUsers);
	Result AddUser(const CUser & user);
	Result DeleteUser(const string & strUserID);
	Result ModifyUser(const CUser & newUser);

private:
	string    m_strDBPath;
	sqlite3 * m_pSqlite3;
};

