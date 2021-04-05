#include "stdafx.h"
// SHARED_HANDLERS can be defined in an ATL project implementing preview, thumbnail
// and search filter handlers and allows sharing of document code with that project.
#ifndef SHARED_HANDLERS
#include "FinancialManagementSystem.h"
#endif

#include "FinancialManagementSystemDoc.h"
#include "FinancialManagementSystemView.h"
#include <stdlib.h>
#include "Tool\ExcelHelper.h"
#include <set>
#include <iosfwd>

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

// CFinancialManagementSystemView

IMPLEMENT_DYNCREATE(CFinancialManagementSystemView, CView)

BEGIN_MESSAGE_MAP(CFinancialManagementSystemView, CView)
	// Standard printing commands
	ON_COMMAND(ID_FILE_OPEN, OnOpenFile)
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CFinancialManagementSystemView::OnFilePrintPreview)
	ON_WM_CONTEXTMENU()
	ON_WM_RBUTTONUP()
	ON_WM_CREATE()
	ON_WM_SIZE()
END_MESSAGE_MAP()

// CFinancialManagementSystemView construction/destruction

CFinancialManagementSystemView::CFinancialManagementSystemView()
{
}

CFinancialManagementSystemView::~CFinancialManagementSystemView()
{
}

BOOL CFinancialManagementSystemView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

// CFinancialManagementSystemView drawing

void CFinancialManagementSystemView::OnDraw(CDC* /*pDC*/)
{
	CFinancialManagementSystemDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
}
 
void CFinancialManagementSystemView::OnFilePrintPreview()
{
#ifndef SHARED_HANDLERS
	AFXPrintPreview(this);
#endif
}

BOOL CFinancialManagementSystemView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CFinancialManagementSystemView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CFinancialManagementSystemView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}

void CFinancialManagementSystemView::OnRButtonUp(UINT /* nFlags */, CPoint point)
{
	ClientToScreen(&point);
	OnContextMenu(this, point);
}

void CFinancialManagementSystemView::OnContextMenu(CWnd* /* pWnd */, CPoint point)
{
#ifndef SHARED_HANDLERS
	theApp.GetContextMenuManager()->ShowPopupMenu(IDR_POPUP_EDIT, point.x, point.y, this, TRUE);
#endif
}


// CFinancialManagementSystemView diagnostics

#ifdef _DEBUG
void CFinancialManagementSystemView::AssertValid() const
{
	CView::AssertValid();
}

void CFinancialManagementSystemView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CFinancialManagementSystemDoc* CFinancialManagementSystemView::GetDocument() const // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CFinancialManagementSystemDoc)));
	return (CFinancialManagementSystemDoc*)m_pDocument;
}
#endif //_DEBUG

int CFinancialManagementSystemView::OnCreate(LPCREATESTRUCT lpCreateStruct)
{
	if (__super::OnCreate(lpCreateStruct) == -1)
		return -1;

	// TODO:  Add your specialized creation code here
	DWORD dwStyle = WS_CHILD | WS_VISIBLE | LVS_REPORT | LVS_ALIGNLEFT | WS_BORDER;
	BOOL bSuccess = m_listCtrl.Create(dwStyle, CRect(0,0,0,0), this, -1);
	m_listCtrl.SetExtendedStyle(LVS_REPORT | LVS_EX_FULLROWSELECT);
	return 0;
}

void CFinancialManagementSystemView::OnInitialUpdate()
{
	__super::OnInitialUpdate();

	if ( NULL == m_listCtrl.GetSafeHwnd() )
	{
		return;
	}

	GetParent()->SetWindowText(_T("2015-2016总工资表"));

	OpenExcelParam param;
	param.strFileFullPath = "D:\\Develop\\FinancialManagementSystem\\Debug\\2015-2016总工资表.xlsx";
	param.strSheetName = "2015.3";
	param.strStartCell = "A2";
	param.strEndCell = "BA208";
	CExcelHelper ecHelper;
	ecHelper.OpenExcel(param, m_listCtrl);

	InsertOtherNames();
}

void CFinancialManagementSystemView::AutoJustColWidth(CListCtrl & listCtrl)
{
	listCtrl.SetRedraw(FALSE);

	CHeaderCtrl* pHeader = listCtrl.GetHeaderCtrl();
	int nColCount = pHeader->GetItemCount();

	for (int i = 0; i < nColCount; ++i)
	{
		listCtrl.SetColumnWidth(i, LVSCW_AUTOSIZE);
		int nColumnWidth = listCtrl.GetColumnWidth(i);

		listCtrl.SetColumnWidth(i, LVSCW_AUTOSIZE_USEHEADER);
		int nHeaderWidth = listCtrl.GetColumnWidth(i);

		listCtrl.SetColumnWidth(i, max(nHeaderWidth, nColumnWidth));
	}
}


void CFinancialManagementSystemView::OnSize(UINT nType, int cx, int cy)
{
	CView::OnSize(nType, cx, cy);

	if ( NULL != m_listCtrl.GetSafeHwnd() )
	{
		CRect rectClient;
		GetClientRect(&rectClient);
		m_listCtrl.MoveWindow(rectClient);
	}
}

void CFinancialManagementSystemView::InsertOtherNames()
{
	string strFile = "D:\\Develop\\FinancialManagementSystem\\Debug\\2015-2016总工资表.xlsx";
	list<string> listPages;
	listPages.push_back("2014.1");
	listPages.push_back("2014.2");
	listPages.push_back("2014.3");
	listPages.push_back("2014.4");
	listPages.push_back("2014.5");
	listPages.push_back("2014.6");
	listPages.push_back("2014.7");
	listPages.push_back("2014.8");
	listPages.push_back("2014.9");
	listPages.push_back("2014.10");
	listPages.push_back("2014.11");
	listPages.push_back("2014.12");
	listPages.push_back("2015.1");
	listPages.push_back("2015.2");
	listPages.push_back("2015.3");
	listPages.push_back("2015.4");
	listPages.push_back("2015.5");
	listPages.push_back("2015.6");
	listPages.push_back("2015.7");
	listPages.push_back("2015.8");
	listPages.push_back("2015.9");
	listPages.push_back("2015.10");
	listPages.push_back("2015.11");
	listPages.push_back("2015.12");
	listPages.push_back("2016.1");
	listPages.push_back("2016.2");
	listPages.push_back("2016.3");
	listPages.push_back("2016.4");
	listPages.push_back("2016.5");
	listPages.push_back("2016.6");
	listPages.push_back("2016.7");
	listPages.push_back("2016.8");
	listPages.push_back("2016.9");
	listPages.push_back("2016.10");
	listPages.push_back("2016.11");
	listPages.push_back("2016.12");

	CExcelHelper ecHelper;
	ecHelper.GetExcelNameColumn(strFile, listPages, m_setNames);

	if (m_setNames.empty())
	{
		return;
	}

	int nItem = 0;
	string strName = "";
	set<string>::iterator iterBegin = m_setNames.begin();
	set<string>::iterator iterEnd = m_setNames.end();
	for (; iterBegin != iterEnd; ++iterBegin)
	{
		strName = *iterBegin;
		if (strName.empty() || IsNameExist(strName))
		{
			continue;
		}

		int nIndex = m_listCtrl.GetItemCount();
		CString strRowName = _T("");
		strRowName.Format(_T("%d"), nIndex);
		m_listCtrl.InsertItem(nIndex, strRowName);
		m_listCtrl.SetItemText(nIndex, 4, strName.c_str());
	}
}

bool CFinancialManagementSystemView::IsNameExist(const string & strName)
{
	if ( NULL == m_listCtrl.GetSafeHwnd() )
	{
		return false;
	}

	int nCount = m_listCtrl.GetItemCount();
	for (int i = 0; i < nCount; ++i)
	{
		CString strText = m_listCtrl.GetItemText(i, 4);
		if ( 0 == strText.Compare(strName.c_str()))
		{
			return true;
		}
	}

	return false;
}

void CFinancialManagementSystemView::ExportToExcel()
{
	if ( NULL == m_listCtrl.GetSafeHwnd() )
	{
		return;
	}

	CFileDialog FileDialog(FALSE, "xlsx", NULL, OFN_HIDEREADONLY | OFN_OVERWRITEPROMPT, _T("Microsoft Excel 2007(*.xlsx)|*.xlsx|所有文件(*.*)"), this);
	if (FileDialog.DoModal() != IDOK)
	{
		return;
	}
	CString cStrFile = FileDialog.GetPathName();  //选择保存路径名称  

	CExcelHelper ecHelper;
	ecHelper.ExportListToExcel(&m_listCtrl, cStrFile, "2015.3");
}

#include <fstream>
void CFinancialManagementSystemView::OnOpenFile()
{
	string strName = "";
	string strNames = "";
	set<string>::iterator iterBegin = m_setNames.begin();
	set<string>::iterator iterEnd = m_setNames.end();
	for (; iterBegin != iterEnd; ++iterBegin)
	{
		strName = *iterBegin;
		if ( strName.empty() )
		{
			continue;
		}
		strNames += strName;
		strNames += "\r";
	}

	//FILE *p = NULL;
	//fopen_s(&p, "D:\\Temp\\1.txt", "w");
	//if (p == NULL)
	//	return;
	//fprintf(p, "%s", strNames);
	//fclose(p);

	ofstream fout;
	fout.open("D:\\Temp\\1.txt", ios_base::out);
	if (fout.is_open())
	{
		fout << strNames;
	}
	fout.close();
}
