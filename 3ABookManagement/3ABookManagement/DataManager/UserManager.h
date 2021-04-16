#pragma once

#include <map>
#include <list>
#include <string>

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
};