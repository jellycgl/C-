#pragma once

#include <string>
#include <set>

using namespace std;

class CFinancialManagementSystemView : public CView
{
protected: // create from serialization only
	CFinancialManagementSystemView();
	virtual ~CFinancialManagementSystemView();
	DECLARE_DYNCREATE(CFinancialManagementSystemView)

// Attributes
public:
	void ExportToExcel();
	CFinancialManagementSystemDoc* GetDocument() const;

// Overrides
public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);

protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnInitialUpdate();
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// Implementation
public:
	
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

// Generated message map functions
protected:
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	afx_msg void OnFilePrintPreview();
	afx_msg void OnSize(UINT nType, int cx, int cy);
	afx_msg void OnRButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnContextMenu(CWnd* pWnd, CPoint point);
	afx_msg void OnOpenFile();
	DECLARE_MESSAGE_MAP()

private:
	void AutoJustColWidth(CListCtrl & listCtrl);
	void InsertOtherNames();
	bool IsNameExist(const string & strName);

private:
	CListCtrl	m_listCtrl;
	set<string>	m_setNames;
};

#ifndef _DEBUG  // debug version in FinancialManagementSystemView.cpp
inline CFinancialManagementSystemDoc* CFinancialManagementSystemView::GetDocument() const
   { return reinterpret_cast<CFinancialManagementSystemDoc*>(m_pDocument); }
#endif

