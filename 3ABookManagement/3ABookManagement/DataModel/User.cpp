#include "stdafx.h"
#include "User.h"

CUser::CUser()
: m_nID(-1)
, m_nRole(UR_UNKNOWN)
, m_strName("")
, m_strPassword("")
, m_strHeadPic("")
{
}

CUser::~CUser()
{
}

bool CUser::SetUserID(int nID)
{
	m_nID = nID;
	return true;
}

bool CUser::SetUserRole(int nRole)
{
	m_nRole = nRole;
	return true;
}

bool CUser::SetUserName(string strName)
{
	m_strName = strName;
	return true;
}

bool CUser::SetUserPassword(string strPassword)
{
	m_strPassword = strPassword;
	return true;
}

bool CUser::SetUserHeadPicture(string strHeadPic)
{
	m_strHeadPic = strHeadPic;
	return true;
}
