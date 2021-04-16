#include "stdafx.h"
#include "Book.h"


CBook::CBook()
: m_strID("")
, m_strName("")
, m_strNote("")
, m_strPublish("")
, m_strMemberID("")
, m_dCost(0.0)
, m_dPrice(0.0)
, m_dProfit(0.0)
, m_dDiscount(0.0)
, m_dOverAmount(0.0)
, m_tmSale(NULL)
, m_tmBorrow(NULL)
, m_tmReturn(NULL)
, m_tmOverBorrow(NULL)
{
}

CBook::~CBook()
{
}

void CBook::SetBookType(int nType)
{
	m_nType = nType;
}

void CBook::SetBookID(const string & strID)
{
	m_strID = strID;
}

void CBook::SetBookName(const string & strName)
{
	m_strName = strName;
}

void CBook::SetBookNote(const string & strNote)
{
	m_strNote = strNote;
}

void CBook::SetBookPublish(const string & strPublish)
{
	m_strPublish = strPublish;
}

void CBook::SetBookMemberID(const string & strMemberID)
{
	m_strMemberID = strMemberID;
}

void CBook::SetBookCost(double dCost)
{
	m_dCost = dCost;
}

void CBook::SetBookPrice(double dPrice)
{
	m_dPrice = dPrice;
}

void CBook::SetBookProfit(double dProfit)
{
	m_dProfit = dProfit;
}

void CBook::SetBookDiscount(double dDiscount)
{
	m_dDiscount = dDiscount;
}

void CBook::SetBookOverAmount(double dOverAmount)
{
	m_dOverAmount = dOverAmount;
}

void CBook::SetBookSaleTime(const time_t & tmSale)
{
	m_tmSale = tmSale;
}

void CBook::SetBookBorrowTime(const time_t & tmBorrow)
{
	m_tmBorrow = tmBorrow;
}

void CBook::SetBookReturnTime(const time_t & tmReturn)
{
	m_tmReturn = tmReturn;
}

void CBook::SetBookOverBorrowTime(const time_t & tmOverBorrow)
{
	m_tmOverBorrow = tmOverBorrow;
}
