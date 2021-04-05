#include "stdafx.h"
#include "WebApp.h"
#include "WebAppDlg.h"
#include "afxdialogex.h"
#include "Tool\ConfHelper.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

const int BORDER = 10;
const int INTERVAL = 10;
const int BUTTONWIDTH = 90;
const int BUTTONHEIGHT = 25;

// Web App Dialog
CWebAppDlg::CWebAppDlg(CWnd* pParent /*=NULL*/)
: CDialogEx(IDD_WEBAPP_DIALOG, pParent)
, m_pDlgWeb(NULL)
{
}

CWebAppDlg::~CWebAppDlg()
{
    if (NULL != m_pDlgWeb)
    {
        delete m_pDlgWeb;
        m_pDlgWeb = NULL;
    }
}

void CWebAppDlg::DoDataExchange(CDataExchange* pDX)
{
	__super::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CWebAppDlg, CDialogEx)
	ON_WM_SIZE()
	ON_WM_PAINT()
    ON_WM_DESTROY()
END_MESSAGE_MAP()

void CWebAppDlg::SetAppTitle()
{
    CString strExePath = GetExeFullPath() + "AppConf.ini";

    CConfHelper conf(strExePath.GetString());
    
    string strTitle = conf.GetStringValue("App", "Title");

    SetWindowText(strTitle.c_str());
}

BOOL CWebAppDlg::OnInitDialog()
{
	__super::OnInitDialog();

	InitControl();
    MoveControl();

    SetAppTitle();
	ShowWindow(SW_SHOWMAXIMIZED);

	return TRUE;
}

void CWebAppDlg::OnDestroy()
{
    __super::OnDestroy();

    if (NULL != m_pDlgWeb && NULL != m_pDlgWeb->GetSafeHwnd())
    {
        m_pDlgWeb->DestroyWindow();
    }
}

void CWebAppDlg::OnPaint()
{
	Draw();
}

void CWebAppDlg::Draw()
{
	CPaintDC dc(this);

	CRect rectClient;
	GetClientRect(&rectClient);

	// Draw Background
	CBrush br(RGB(248, 248, 255));
	dc.FillRect(rectClient, &br);

	// Draw UnderLine
	CPen pen(PS_SOLID, 2, RGB(189, 183, 107));
	CPen *pOldPen = dc.SelectObject(&pen);
	CPoint ptOrg, ptDst;
	ptOrg.x = rectClient.left;
	ptOrg.y = rectClient.bottom - BORDER - BUTTONHEIGHT - INTERVAL;
	ptDst.x = rectClient.right;
	ptDst.y = ptOrg.y;
	dc.MoveTo(ptOrg);
	dc.LineTo(ptDst);
	dc.SelectObject(pOldPen);
}

void CWebAppDlg::OnSize(UINT nType, int cx, int cy)
{
	__super::OnSize(nType, cx, cy);

	MoveControl();
}

void CWebAppDlg::InitControl()
{
    if (NULL == m_pDlgWeb)
    {
        m_pDlgWeb = new CWebDialog;
    }

    if (NULL == m_pDlgWeb->GetSafeHwnd())
    {
        m_pDlgWeb->Create(IDD_WEBDIALOG, this);
    }

    if (NULL != m_pDlgWeb && NULL != m_pDlgWeb->GetSafeHwnd())
    {
        m_pDlgWeb->ShowWindow(SW_SHOW);
    }
}

void CWebAppDlg::MoveControl()
{
	CRect rectClient;
	GetClientRect(&rectClient);

	CRect rectCancel;
	CWnd * pWnd = GetDlgItem(IDCANCEL);
	if ( NULL != pWnd )
	{
		rectCancel.right  = rectClient.right - BORDER;
		rectCancel.bottom = rectClient.bottom - BORDER;
		rectCancel.left   = rectCancel.right - BUTTONWIDTH;
		rectCancel.top    = rectCancel.bottom - BUTTONHEIGHT;
		pWnd->MoveWindow(rectCancel);
	}

	CRect rectOK;
	pWnd = GetDlgItem(IDOK);
	if ( NULL != pWnd )
	{
		rectOK.right  = rectCancel.left - INTERVAL;
		rectOK.bottom = rectCancel.bottom;
		rectOK.left   = rectOK.right - BUTTONWIDTH;
		rectOK.top	  = rectCancel.top;
		pWnd->MoveWindow(rectOK);
	}

	CRect rectWebPage;
    if ( NULL != m_pDlgWeb && NULL != m_pDlgWeb->GetSafeHwnd() )
    {
        rectWebPage.left = rectClient.left + BORDER;
        rectWebPage.top = rectClient.top + BORDER;
        rectWebPage.right = rectClient.right - BORDER;
        rectWebPage.bottom = rectCancel.top - INTERVAL * 2 - 2;
        m_pDlgWeb->MoveWindow(rectWebPage);
    }
}
