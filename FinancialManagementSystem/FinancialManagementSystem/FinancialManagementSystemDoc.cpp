
// FinancialManagementSystemDoc.cpp : implementation of the CFinancialManagementSystemDoc class
//

#include "stdafx.h"
// SHARED_HANDLERS can be defined in an ATL project implementing preview, thumbnail
// and search filter handlers and allows sharing of document code with that project.
#ifndef SHARED_HANDLERS
#include "FinancialManagementSystem.h"
#endif

#include "FinancialManagementSystemDoc.h"

#include <propkey.h>

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

// CFinancialManagementSystemDoc

IMPLEMENT_DYNCREATE(CFinancialManagementSystemDoc, CDocument)

BEGIN_MESSAGE_MAP(CFinancialManagementSystemDoc, CDocument)
END_MESSAGE_MAP()

BEGIN_DISPATCH_MAP(CFinancialManagementSystemDoc, CDocument)
END_DISPATCH_MAP()

// Note: we add support for IID_IFinancialManagementSystem to support typesafe binding
//  from VBA.  This IID must match the GUID that is attached to the 
//  dispinterface in the .IDL file.

// {BA18314A-6899-448D-ABEC-485ED137CEA5}
static const IID IID_IFinancialManagementSystem =
{ 0xBA18314A, 0x6899, 0x448D, { 0xAB, 0xEC, 0x48, 0x5E, 0xD1, 0x37, 0xCE, 0xA5 } };

BEGIN_INTERFACE_MAP(CFinancialManagementSystemDoc, CDocument)
	INTERFACE_PART(CFinancialManagementSystemDoc, IID_IFinancialManagementSystem, Dispatch)
END_INTERFACE_MAP()


// CFinancialManagementSystemDoc construction/destruction

CFinancialManagementSystemDoc::CFinancialManagementSystemDoc()
{
	// TODO: add one-time construction code here

	EnableAutomation();

	AfxOleLockApp();
}

CFinancialManagementSystemDoc::~CFinancialManagementSystemDoc()
{
	AfxOleUnlockApp();
}

BOOL CFinancialManagementSystemDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}




// CFinancialManagementSystemDoc serialization

void CFinancialManagementSystemDoc::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
		// TODO: add storing code here
	}
	else
	{
		// TODO: add loading code here
	}
}

#ifdef SHARED_HANDLERS

// Support for thumbnails
void CFinancialManagementSystemDoc::OnDrawThumbnail(CDC& dc, LPRECT lprcBounds)
{
	// Modify this code to draw the document's data
	dc.FillSolidRect(lprcBounds, RGB(255, 255, 255));

	CString strText = _T("TODO: implement thumbnail drawing here");
	LOGFONT lf;

	CFont* pDefaultGUIFont = CFont::FromHandle((HFONT) GetStockObject(DEFAULT_GUI_FONT));
	pDefaultGUIFont->GetLogFont(&lf);
	lf.lfHeight = 36;

	CFont fontDraw;
	fontDraw.CreateFontIndirect(&lf);

	CFont* pOldFont = dc.SelectObject(&fontDraw);
	dc.DrawText(strText, lprcBounds, DT_CENTER | DT_WORDBREAK);
	dc.SelectObject(pOldFont);
}

// Support for Search Handlers
void CFinancialManagementSystemDoc::InitializeSearchContent()
{
	CString strSearchContent;
	// Set search contents from document's data. 
	// The content parts should be separated by ";"

	// For example:  strSearchContent = _T("point;rectangle;circle;ole object;");
	SetSearchContent(strSearchContent);
}

void CFinancialManagementSystemDoc::SetSearchContent(const CString& value)
{
	if (value.IsEmpty())
	{
		RemoveChunk(PKEY_Search_Contents.fmtid, PKEY_Search_Contents.pid);
	}
	else
	{
		CMFCFilterChunkValueImpl *pChunk = NULL;
		ATLTRY(pChunk = new CMFCFilterChunkValueImpl);
		if (pChunk != NULL)
		{
			pChunk->SetTextValue(PKEY_Search_Contents, value, CHUNK_TEXT);
			SetChunkValue(pChunk);
		}
	}
}

#endif // SHARED_HANDLERS

// CFinancialManagementSystemDoc diagnostics

#ifdef _DEBUG
void CFinancialManagementSystemDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CFinancialManagementSystemDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG


// CFinancialManagementSystemDoc commands
