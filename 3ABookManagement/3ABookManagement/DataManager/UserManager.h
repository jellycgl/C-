#pragma once

#include <map>
#include <list>
#include <string>

#include "..\Common\Common.h"
#include "..\DataModel\User.h"

using namespace std;


// C++ 11 thread safety
class CUserManager
{

public:
	static CUserManager & GetInstance();

private:
	CUserManager();
	~CUserManager();
	CUserManager(const CUserManager & userManager);
	const CUserManager &operator=(const CUserManager & userManager);

public:
	Result LoadAllUsers();

	Result AddUser(const CUser & user);

	Result DelUser(int nUserID);

	Result UpdateUser(int nUserID, const CUser & newInfo);

	Result GetUser(int nUserID);

private:
	map<int, CUser> m_mapID2Users;
};