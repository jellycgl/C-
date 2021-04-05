#pragma once

#ifdef _WIN32_WCE
#error "Windows CE ��֧�� CDHtmlDialog��"
#endif 

// CWebDialog �Ի���
class CWebDialog : public CDHtmlDialog
{
	DECLARE_DYNCREATE(CWebDialog)

public:
	CWebDialog(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~CWebDialog();

    HRESULT OnButtonOK(IHTMLElement *pElement) { return S_OK; }
    HRESULT OnButtonCancel(IHTMLElement *pElement) { return S_OK; }

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_WEBDIALOG, IDH = 0 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��
	virtual BOOL OnInitDialog();

	DECLARE_MESSAGE_MAP()
	DECLARE_DHTML_EVENT_MAP()

    afx_msg void OnPaint();
};
