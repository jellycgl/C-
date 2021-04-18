#pragma once
#include <ctime>
#include <string>

using namespace std;

class CBook
{
public:
	CBook();
	~CBook();

public:
	int GetBookType() const { return m_nType; }
	string GetBookID() const { return m_strID; }
	string GetBookName() const { return m_strName; }
	string GetBookNote() const { return m_strNote; }
	string GetBookPublish() const { return m_strPublish; }
	string GetBookMemberID() const { return m_strMemberID; }
	double GetBookCost() const { return m_dCost; }
	double GetBookPrice() const { return m_dPrice; }
	double GetBookProfit() const { return m_dProfit; }
	double GetBookDiscount() const { return m_dDiscount; }
	double GetBookOverAmount() const { return m_dOverAmount; }
	time_t GetBookSaleTime() const { return m_tmSale; }
	time_t GetBookBorrowTime() const { return m_tmBorrow; }
	time_t GetBookReturnTime() const { return m_tmReturn; }
	time_t GetBookOverBorrowTime() const { return m_tmOverBorrow; }

	void SetBookType(int nType);
	void SetBookID(const string & strID);
	void SetBookName(const string & strName);
	void SetBookNote(const string & strNote);
	void SetBookPublish(const string & strPublish);
	void SetBookMemberID(const string & strMemberID);
	void SetBookCost(double dCost);
	void SetBookPrice(double dPrice);
	void SetBookProfit(double dProfit);
	void SetBookDiscount(double dDiscount);
	void SetBookOverAmount(double dOverAmount);
	void SetBookSaleTime(const time_t & tmSale);
	void SetBookBorrowTime(const time_t & tmBorrow);
	void SetBookReturnTime(const time_t & tmReturn);
	void SetBookOverBorrowTime(const time_t & tmOverBorrow);

private:
	int m_nType;
	string m_strID;
	string m_strName;
	string m_strNote;
	string m_strPublish;
	string m_strMemberID;
	double m_dCost;
	double m_dPrice;
	double m_dProfit;
	double m_dDiscount;
	double m_dOverAmount;
	time_t m_tmSale;
	time_t m_tmBorrow;
	time_t m_tmReturn;
	time_t m_tmOverBorrow;
};

