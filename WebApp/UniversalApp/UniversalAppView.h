#pragma once

class CUniversalAppView : public CHtmlView
{
protected:
	CUniversalAppView();
    virtual ~CUniversalAppView();
	DECLARE_DYNCREATE(CUniversalAppView)

public:
	CUniversalAppDoc* GetDocument() const;
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);

protected:
	virtual void OnInitialUpdate();
	
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
    afx_msg void OnFileNew();

private:
    void FillHTML();
};

#ifndef _DEBUG  // UniversalAppView.cpp �еĵ��԰汾
inline CUniversalAppDoc* CUniversalAppView::GetDocument() const
   { return reinterpret_cast<CUniversalAppDoc*>(m_pDocument); }
#endif

