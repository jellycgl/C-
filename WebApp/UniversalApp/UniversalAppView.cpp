#include "stdafx.h"

#ifndef SHARED_HANDLERS
#include "UniversalApp.h"
#endif

#include "UniversalAppDoc.h"
#include "UniversalAppView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

// CUniversalAppView

IMPLEMENT_DYNCREATE(CUniversalAppView, CHtmlView)

BEGIN_MESSAGE_MAP(CUniversalAppView, CHtmlView)
	ON_COMMAND(ID_FILE_PRINT, &CHtmlView::OnFilePrint)
    ON_COMMAND(ID_FILE_NEW, &CUniversalAppView::OnFileNew)
END_MESSAGE_MAP()

// CUniversalAppView 构造/析构

CUniversalAppView::CUniversalAppView()
{
}

CUniversalAppView::~CUniversalAppView()
{
}

BOOL CUniversalAppView::PreCreateWindow(CREATESTRUCT& cs)
{
	return CHtmlView::PreCreateWindow(cs);
}

void CUniversalAppView::OnInitialUpdate()
{
	CHtmlView::OnInitialUpdate();

	//Navigate2(_T("http://60.223.243.61:28080/Longin.aspx"),NULL,NULL);

    Navigate2(_T("http://60.223.243.61:28080/Default.aspx"), NULL, NULL);

    FillHTML();
}

#ifdef _DEBUG
void CUniversalAppView::AssertValid() const
{
	CHtmlView::AssertValid();
}

void CUniversalAppView::Dump(CDumpContext& dc) const
{
	CHtmlView::Dump(dc);
}

#include <MsHTML.h>
void CUniversalAppView::FillHTML()
{
    CHtmlView *pCV = this;
    CString strSource;
    LPDISPATCH lpIdis;
    IHTMLDocument2* pHtmlDoc2 = NULL;
    IHTMLDocument3 *pHtmlDoc3 = NULL;
    IHTMLElement *phtmlEle = NULL;
    BSTR bstrHTML = NULL;
    IHTMLElementCollection *pHtmlColl = NULL;

    void * pDoc = pCV->GetHtmlDocument();
    pHtmlDoc2 = (IHTMLDocument2*)pCV->GetHtmlDocument();
    if (NULL != pHtmlDoc2) 
    {
        HRESULT hrt = pHtmlDoc2->QueryInterface(IID_IHTMLDocument3, (LPVOID *)&pHtmlDoc3);
        if (SUCCEEDED(hrt) && pHtmlDoc3 != NULL) 
        {
            hrt = pHtmlDoc3->getElementById(L"usernameBox", &phtmlEle);
            if (SUCCEEDED(hrt) && NULL != phtmlEle)
            {
                phtmlEle->put_innerText(L"KMDH0141");
                phtmlEle->Release();
            }

            hrt = pHtmlDoc3->getElementById(L"pswBox", &phtmlEle);
            if (SUCCEEDED(hrt) && NULL != phtmlEle)
            {
                phtmlEle->put_innerText(L"358666");
                phtmlEle->Release();
            }

            hrt = pHtmlDoc3->getElementById(L"ctl00_ContentPlaceHolderTwo_TextBoxIDNo", &phtmlEle);
            if (SUCCEEDED(hrt) && NULL != phtmlEle)
            {
                phtmlEle->put_innerText(L"XXXXXXXXXXXXXX");
                phtmlEle->Release();
            }
        }
    }
}

CUniversalAppDoc* CUniversalAppView::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CUniversalAppDoc)));
	return (CUniversalAppDoc*)m_pDocument;
}
#endif //_DEBUG



void CUniversalAppView::OnFileNew()
{
    FillHTML();
}
