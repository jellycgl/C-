#include "stdafx.h"
#include "..\WebApp.h"
#include "WebDialog.h"

// CWebDialog ¶Ô»°¿ò
IMPLEMENT_DYNCREATE(CWebDialog, CDHtmlDialog)
CWebDialog::CWebDialog(CWnd* pParent /*=NULL*/)
	: CDHtmlDialog(IDD_WEBDIALOG, 0, pParent)
{
}

CWebDialog::~CWebDialog()
{
}

void CWebDialog::DoDataExchange(CDataExchange* pDX)
{
	__super::DoDataExchange(pDX);
}

BOOL CWebDialog::OnInitDialog()
{
    __super::OnInitDialog();

    //EnableAutomation();
    //SetExternalDispatch(GetIDispatch(TRUE));

	return TRUE;
}

void CWebDialog::OnPaint()
{
    CPaintDC dc(this);

    CRect rectClient;
    GetClientRect(&rectClient);

    // Draw Background
    CBrush br(RGB(0, 248, 255));
    dc.FillRect(rectClient, &br);
}

BEGIN_MESSAGE_MAP(CWebDialog, CDHtmlDialog)
    //ON_WM_PAINT()
END_MESSAGE_MAP()

BEGIN_DHTML_EVENT_MAP(CWebDialog)
	DHTML_EVENT_ONCLICK(_T("ButtonOK"), OnButtonOK)
	DHTML_EVENT_ONCLICK(_T("ButtonCancel"), OnButtonCancel)
END_DHTML_EVENT_MAP()
