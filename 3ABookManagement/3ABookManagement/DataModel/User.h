#pragma once
#include "string"

using namespace std;

enum UserRole
{
	UR_UNKNOWN = -1,
	UR_SYSADMIN = 0,
	UR_BOOKMANAGER = 1
};

class CUser
{
public:
	CUser();
	~CUser();

public:
	int GetUserID() { return m_nID; }
	int GetUserRole() { return m_nRole; }
	string GetUserName() { return m_strName; }
	string GetUserPassword() { return m_strPassword; }
	string GetUserHeadPicture() { return m_strHeadPic; }

	bool SetUserID(int nID);
	bool SetUserRole(int nRole);
	bool SetUserName(string strName);
	bool SetUserPassword(string strPassword);
	bool SetUserHeadPicture(string strHeadPic);

private:
	int m_nID;
	int m_nRole;
	string m_strName;
	string m_strPassword;
	string m_strHeadPic;
};

