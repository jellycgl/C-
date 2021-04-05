#pragma once
#include "Web Dialog\WebDialog.h"

// CWebAppDlg 对话框
class CWebAppDlg : public CDialogEx
{
// 构造
public:
	CWebAppDlg(CWnd* pParent = NULL);
    ~CWebAppDlg();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_WEBAPP_DIALOG };
#endif

protected:
	virtual BOOL OnInitDialog();
	virtual void DoDataExchange(CDataExchange* pDX);

// 实现
protected:
	// 生成的消息映射函数
	afx_msg void OnPaint();
    afx_msg void OnDestroy();
	afx_msg void OnSize(UINT nType, int cx, int cy);
	DECLARE_MESSAGE_MAP()

private:
	// 设置程序标题
	void SetAppTitle();

	// 自绘接口
	void Draw();

	// 初始化控件信息
	void InitControl();

	// 调整控件位置
	void MoveControl();

private:
    // Web Dialog
    CWebDialog  * m_pDlgWeb;
};
