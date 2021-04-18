#pragma once

#include <set>
#include <string>

using namespace std;

class CMember
{
public:
	CMember();
	~CMember();

public:
	int GetID() const { return m_nID; }
	string GetName() const { return m_strName; }
	string GetAddress() const { return m_strAddress; }
	string GetPhoneNumber() const { return m_strPhoneNumber; }
	string GetEmail() const { return m_strEmail; }
	string GetHeadPicture() const { return m_strHeadPic; }
	double GetDeposit() const { return m_dDeposit; }
	double GetBalance() const { return m_dBalance; }
	const set<string> & GetUserBooks() { return m_setBooks; }

	bool SetMemberID(int nID);
	bool SetName(const string & strName);
	bool SetAddress(const string & strAddress);
	bool SetPhoneNumber(const string & strPhoneNumber);
	bool SetEmail(const string & strEmail);
	bool SetHeadPicture(const string & strHeadPic);
	bool SetDeposit(double dDeposit);
	bool SetBalance(double dBalance);

	bool SetUserBooks(const set<string> & setBooks);
	bool AddOneBook(const string & strBookID);
	bool DelOneBook(const string & strBookID);
	bool CheckOwnBook(const string & strBookID);

private:
	int m_nID;
	string m_strName;
	string m_strAddress;
	string m_strPhoneNumber;
	string m_strEmail;
	string m_strHeadPic;
	double m_dDeposit;
	double m_dBalance;
	set<string> m_setBooks;
};

