#pragma once
#include "Web Dialog\WebDialog.h"

// CWebAppDlg �Ի���
class CWebAppDlg : public CDialogEx
{
// ����
public:
	CWebAppDlg(CWnd* pParent = NULL);
    ~CWebAppDlg();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_WEBAPP_DIALOG };
#endif

protected:
	virtual BOOL OnInitDialog();
	virtual void DoDataExchange(CDataExchange* pDX);

// ʵ��
protected:
	// ���ɵ���Ϣӳ�亯��
	afx_msg void OnPaint();
    afx_msg void OnDestroy();
	afx_msg void OnSize(UINT nType, int cx, int cy);
	DECLARE_MESSAGE_MAP()

private:
	// ���ó������
	void SetAppTitle();

	// �Ի�ӿ�
	void Draw();

	// ��ʼ���ؼ���Ϣ
	void InitControl();

	// �����ؼ�λ��
	void MoveControl();

private:
    // Web Dialog
    CWebDialog  * m_pDlgWeb;
};
