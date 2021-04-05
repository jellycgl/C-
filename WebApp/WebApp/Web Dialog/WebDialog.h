#pragma once

#ifdef _WIN32_WCE
#error "Windows CE 不支持 CDHtmlDialog。"
#endif 

// CWebDialog 对话框
class CWebDialog : public CDHtmlDialog
{
	DECLARE_DYNCREATE(CWebDialog)

public:
	CWebDialog(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~CWebDialog();

    HRESULT OnButtonOK(IHTMLElement *pElement) { return S_OK; }
    HRESULT OnButtonCancel(IHTMLElement *pElement) { return S_OK; }

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_WEBDIALOG, IDH = 0 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持
	virtual BOOL OnInitDialog();

	DECLARE_MESSAGE_MAP()
	DECLARE_DHTML_EVENT_MAP()

    afx_msg void OnPaint();
};
