/*********************************************************************************
*FileName:  MyStatic
*Author:	Guoliang Chen
*Date:		2015-10-01
*Desc:		�������������ʱ���һЩ����
**********************************************************************************/
#pragma once

class CMySliderCtrl : public CSliderCtrl
{
	DECLARE_DYNAMIC(CMySliderCtrl)

public:
	CMySliderCtrl();
	virtual ~CMySliderCtrl();

protected:
	DECLARE_MESSAGE_MAP()
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
};


