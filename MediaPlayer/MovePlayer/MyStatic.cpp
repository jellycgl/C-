// MyStatic.cpp : implementation file
//

#include "stdafx.h"
#include "MovePlayer.h"
#include "MyStatic.h"

// CMyStatic

IMPLEMENT_DYNAMIC(CMyStatic, CStatic)

CMyStatic::CMyStatic()
{

}

CMyStatic::~CMyStatic()
{
}

BEGIN_MESSAGE_MAP(CMyStatic, CStatic)
	ON_WM_DROPFILES()
    ON_WM_DRAWITEM()
END_MESSAGE_MAP()

void CMyStatic::PreSubclassWindow()
{
	DragAcceptFiles();
	__super::PreSubclassWindow();
}

LRESULT CMyStatic::DefWindowProc(UINT message, WPARAM wParam, LPARAM lParam)
{
	// 更换系统光标
	if ( WM_SETCURSOR == message )
	{
		::SetCursor(AfxGetApp()->LoadCursor(IDC_CURSOR1));
		return true;
	}

	if ((WM_MOUSEMOVE == message ||
		 WM_LBUTTONUP == message ||
		 WM_LBUTTONDOWN == message) &&
		 m_bDrawCursor)
	{
		::SetCursor(AfxGetApp()->LoadCursor(IDC_CURSOR1));
	}

	return __super::DefWindowProc(message, wParam, lParam);
}

void CMyStatic::OnDropFiles(HDROP hDropInfo)
{
	string strfile = "";
	int DropCount = DragQueryFile(hDropInfo, -1, NULL, 0);
	for ( int i = 0; i < DropCount; ++i )
	{
		char szFile[MAX_PATH];
		DragQueryFile(hDropInfo, i, szFile, MAX_PATH); 
		strfile = szFile;
		m_listFile.push_back(strfile);
	}
	DragFinish(hDropInfo);
}


void CMyStatic::OnDrawItem(int nIDCtl, LPDRAWITEMSTRUCT lpDrawItemStruct)
{
    // TODO: Add your message handler code here and/or call default

    CStatic::OnDrawItem(nIDCtl, lpDrawItemStruct);
}
