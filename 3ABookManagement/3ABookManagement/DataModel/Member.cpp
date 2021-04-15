#include "stdafx.h"
#include "Member.h"


CMember::CMember()
: m_nID(-1)
, m_strName("")
, m_strAddress("")
, m_strPhoneNumber("")
, m_strEmail("")
, m_strHeadPic("")
, m_dDeposit(0.0)
, m_dBalance(0.0)
{
}

CMember::~CMember()
{
}

bool CMember::SetUserBooks(const set<string>& setBooks)
{
	if (setBooks.empty())
	{
		return false;
	}

	m_setBooks.clear();

	set<string>::iterator iterBegin = setBooks.begin();
	set<string>::iterator iterEnd = setBooks.end();
	for (; iterBegin != iterEnd; iterBegin++)
	{
		m_setBooks.insert(*iterBegin);
	}
	return false;
}

bool CMember::AddOneBook(const string & strBookID)
{
	if (strBookID.empty())
	{
		return false;
	}
	m_setBooks.insert(strBookID);
	return true;
}

bool CMember::DelOneBook(const string & strBookID)
{
	if (strBookID.empty())
	{
		return false;
	}
	set<string>::iterator iterFind = m_setBooks.find(strBookID);
	if (iterFind == m_setBooks.end())
	{
		return false;
	}
	m_setBooks.erase(iterFind);
	return true;
}

bool CMember::CheckOwnBook(const string & strBookID)
{
	if (strBookID.empty())
	{
		return false;
	}
	set<string>::iterator iterFind = m_setBooks.find(strBookID);
	return iterFind != m_setBooks.end();
}

bool CMember::SetMemberID(int nID)
{
	m_nID = nID;
	return true;
}

bool CMember::SetName(const string & strName)
{
	m_strName = strName;
	return true;
}

bool CMember::SetAddress(const string & strAddress)
{
	m_strAddress = strAddress;
	return true;
}

bool CMember::SetPhoneNumber(const string & strPhoneNumber)
{
	m_strPhoneNumber = strPhoneNumber;
	return true;
}

bool CMember::SetEmail(const string & strEmail)
{
	m_strEmail = strEmail;
	return true;
}

bool CMember::SetHeadPicture(const string & strHeadPic)
{
	m_strHeadPic = strHeadPic;
	return true;
}

bool CMember::SetDeposit(double dDeposit)
{
	m_dDeposit = dDeposit;
	return true;
}

bool CMember::SetBalance(double dBalance)
{
	m_dBalance = dBalance;
	return true;
}
