
#pragma once

class COutputList : public CListBox
{
public:
	COutputList();
	virtual ~COutputList();

protected:
	afx_msg void OnContextMenu(CWnd* pWnd, CPoint point);
	afx_msg void OnEditCopy();
	afx_msg void OnEditClear();
	afx_msg void OnViewOutput();

	DECLARE_MESSAGE_MAP()
};

class COutputWnd : public CDockablePane
{
public:
	COutputWnd();
	virtual ~COutputWnd();

	void UpdateFonts();

protected:
	void FillBuildWindow();
	void AdjustHorzScroll(CListBox& wndListBox);

protected:
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	afx_msg void OnSize(UINT nType, int cx, int cy);

	DECLARE_MESSAGE_MAP()

protected:
	CMFCTabCtrl	m_wndTabs;
	COutputList m_wndOutputBuild;
};

