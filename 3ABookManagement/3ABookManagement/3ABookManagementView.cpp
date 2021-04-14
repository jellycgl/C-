// This MFC Samples source code demonstrates using MFC Microsoft Office Fluent User Interface
// (the "Fluent UI") and is provided only as referential material to supplement the
// Microsoft Foundation Classes Reference and related electronic documentation
// included with the MFC C++ library software.
// License terms to copy, use or distribute the Fluent UI are available separately.
// To learn more about our Fluent UI licensing program, please visit
// https://go.microsoft.com/fwlink/?LinkId=238214.
//
// Copyright (C) Microsoft Corporation
// All rights reserved.

// 3ABookManagementView.cpp : implementation of the CMy3ABookManagementView class
//

#include "stdafx.h"
// SHARED_HANDLERS can be defined in an ATL project implementing preview, thumbnail
// and search filter handlers and allows sharing of document code with that project.
#ifndef SHARED_HANDLERS
#include "3ABookManagement.h"
#endif

#include "3ABookManagementDoc.h"
#include "3ABookManagementView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy3ABookManagementView

IMPLEMENT_DYNCREATE(CMy3ABookManagementView, CView)

BEGIN_MESSAGE_MAP(CMy3ABookManagementView, CView)
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CMy3ABookManagementView::OnFilePrintPreview)
	ON_WM_CONTEXTMENU()
	ON_WM_RBUTTONUP()
END_MESSAGE_MAP()

// CMy3ABookManagementView construction/destruction

CMy3ABookManagementView::CMy3ABookManagementView() noexcept
{
	// TODO: add construction code here

}

CMy3ABookManagementView::~CMy3ABookManagementView()
{
}

BOOL CMy3ABookManagementView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

// CMy3ABookManagementView drawing

void CMy3ABookManagementView::OnDraw(CDC* /*pDC*/)
{
	CMy3ABookManagementDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: add draw code for native data here
}


// CMy3ABookManagementView printing


void CMy3ABookManagementView::OnFilePrintPreview()
{
#ifndef SHARED_HANDLERS
	AFXPrintPreview(this);
#endif
}

BOOL CMy3ABookManagementView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CMy3ABookManagementView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CMy3ABookManagementView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}

void CMy3ABookManagementView::OnRButtonUp(UINT /* nFlags */, CPoint point)
{
	ClientToScreen(&point);
	OnContextMenu(this, point);
}

void CMy3ABookManagementView::OnContextMenu(CWnd* /* pWnd */, CPoint point)
{
#ifndef SHARED_HANDLERS
	theApp.GetContextMenuManager()->ShowPopupMenu(IDR_POPUP_EDIT, point.x, point.y, this, TRUE);
#endif
}


// CMy3ABookManagementView diagnostics

#ifdef _DEBUG
void CMy3ABookManagementView::AssertValid() const
{
	CView::AssertValid();
}

void CMy3ABookManagementView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy3ABookManagementDoc* CMy3ABookManagementView::GetDocument() const // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy3ABookManagementDoc)));
	return (CMy3ABookManagementDoc*)m_pDocument;
}
#endif //_DEBUG


// CMy3ABookManagementView message handlers
