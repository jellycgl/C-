#include "stdafx.h"
#include "UserManager.h"
#include "..\..\Tools\jsoncpp\include\json\json.h"

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

Result CUserManager::LoadAllUsers()
{
	Result result;
	return result;
}

Result CUserManager::AddUser(const CUser & user)
{
	return Result();
}

Result CUserManager::DelUser(int nUserID)
{
	return Result();
}

Result CUserManager::UpdateUser(int nUserID, const CUser & newInfo)
{
	return Result();
}

Result CUserManager::GetUser(int nUserID)
{
	return Result();
}
