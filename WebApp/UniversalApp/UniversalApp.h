
// UniversalApp.h : UniversalApp Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CUniversalAppApp:
// �йش����ʵ�֣������ UniversalApp.cpp
//

class CUniversalAppApp : public CWinApp
{
public:
	CUniversalAppApp();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	UINT  m_nAppLook;
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CUniversalAppApp theApp;