// MySliderCtrl.cpp : implementation file
//

#include "stdafx.h"
#include "MovePlayer.h"
#include "MySliderCtrl.h"

// CMySliderCtrl

IMPLEMENT_DYNAMIC(CMySliderCtrl, CSliderCtrl)

CMySliderCtrl::CMySliderCtrl()
{

}

CMySliderCtrl::~CMySliderCtrl()
{
}


BEGIN_MESSAGE_MAP(CMySliderCtrl, CSliderCtrl)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

void CMySliderCtrl::OnLButtonDown(UINT nFlags, CPoint point)
{
	DWORD currentpos = GetPos();
	CRect rc;
	GetClientRect(&rc);
	int min, max;
	GetRange(min, max);
	DWORD clickpos = min + (point.x - 9) * (max - min) / (rc.right - 9 * 2);
	SetPageSize(fabsl(clickpos - currentpos));

	__super::OnLButtonDown(nFlags, point);
}
