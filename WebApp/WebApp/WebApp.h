
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"

CString GetExeFullPath();

// CWebAppApp: 
class CWebAppApp : public CWinApp
{
public:
	CWebAppApp();

	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};

extern CWebAppApp theApp;