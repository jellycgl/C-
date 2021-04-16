#include "stdafx.h"
#include "UserManager.h"


CUserManager & CUserManager::GetInstance()
{
	static CUserManager userManager;
	return userManager;
}

CUserManager::CUserManager()
{
}


CUserManager::~CUserManager()
{
}
