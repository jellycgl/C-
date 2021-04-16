#pragma once

#include <string>

using namespace std;
// CLogInDlg dialog

class CLogInDlg : public CDialog
{
	DECLARE_DYNAMIC(CLogInDlg)

public:
	CLogInDlg(CWnd* pParent = nullptr);   // standard constructor
	virtual ~CLogInDlg();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_CLogInDlg };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	virtual BOOL OnInitDialog();

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedOk();
	afx_msg void OnBnClickedCancel();

public:
	bool GetLoginResult() { return m_bLogIn; }

private:
	string CheckInputVaild();

private:
	bool m_bLogIn;
};
