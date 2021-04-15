// CLogInDlg.cpp : implementation file
//

#include "stdafx.h"
#include "LogInDlg.h"
#include "afxdialogex.h"
#include "..\resource.h"


// CLogInDlg dialog

IMPLEMENT_DYNAMIC(CLogInDlg, CDialog)

CLogInDlg::CLogInDlg(CWnd* pParent /*=nullptr*/)
	: CDialog(IDD_CLogInDlg, pParent)
	, m_bLogIn(false)
{

}

CLogInDlg::~CLogInDlg()
{
}

void CLogInDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CLogInDlg, CDialog)
	ON_BN_CLICKED(IDOK, &CLogInDlg::OnBnClickedOk)
	ON_BN_CLICKED(IDCANCEL, &CLogInDlg::OnBnClickedCancel)
END_MESSAGE_MAP()


// CLogInDlg message handlers
BOOL CLogInDlg::OnInitDialog()
{
	CDialog::OnInitDialog();

	return TRUE;  // return TRUE unless you set the focus to a control
				  // EXCEPTION: OCX Property Pages should return FALSE
}

void CLogInDlg::OnBnClickedOk()
{
	string strResult = CheckInputVaild();
	if (!strResult.empty())
	{
		CString strMfc = CA2T(strResult.c_str());
		MessageBox(strMfc, L"Login Failed", MB_ICONERROR);
		return;
	}
	m_bLogIn = true;
	CDialog::OnOK();
}

void CLogInDlg::OnBnClickedCancel()
{
	m_bLogIn = false;
	CDialog::OnCancel();
}

string CLogInDlg::CheckInputVaild()
{
	string strResult = "Error";
	return strResult;
}

