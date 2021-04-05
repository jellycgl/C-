/*********************************************************************************
*FileName:  MyStatic
*Author:	Guoliang Chen
*Date:		2015-10-01
*Desc:		播放视频，接受鼠标事件以及拖放文件事件
**********************************************************************************/
#pragma once
#include <list>
using namespace std;

class CMyStatic : public CStatic
{
	DECLARE_DYNAMIC(CMyStatic)

public:
	CMyStatic();
	virtual ~CMyStatic();

protected:
	DECLARE_MESSAGE_MAP()
    virtual LRESULT DefWindowProc(UINT message, WPARAM wParam, LPARAM lParam);
	virtual void PreSubclassWindow();
	afx_msg void OnDropFiles(HDROP hDropInfo);

public:
	list<string> GetFileName()const{ return m_listFile; }
	void SetFileName(const list<string> & strFile){ m_listFile = strFile; }

private:
	bool			m_bDrawCursor;	// 光标重绘标识
	list<string>	m_listFile;		// 拖放的文件
};


