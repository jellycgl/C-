#include "stdafx.h"
#include "MemberManager.h"


CMemberManager & CMemberManager::GetInstance()
{
	static CMemberManager memberManager;
	return memberManager;
}

CMemberManager::CMemberManager()
{
}


CMemberManager::~CMemberManager()
{
}
