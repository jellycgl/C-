// CatListBox.h : header file
//

#pragma once

#include <list>
#include <map>
using namespace std;

// Define STLs.
struct CatListBoxItemInfo {
   CString     sItem;
   int         iState;
   DWORD       dwValue;
};
typedef list<CatListBoxItemInfo>          CatListBoxStlList;
typedef CatListBoxStlList::iterator       CatListBoxStlListIter;

struct CatListBoxCatInfo {
   bool                 bIsOpen;
   int                  iListIndex;
   CatListBoxStlList    lstItems;
};
typedef map<CString,CatListBoxCatInfo*>   CatListBoxStlMap;
typedef CatListBoxStlMap::iterator        CatListBoxStlMapIter;

// Category listbox class.
class CCatListBox : public CListBox
{
public:
   // Constructor/Destructor.
   CCatListBox();
   virtual ~CCatListBox();
	CBitmap m_bmp;

   HRESULT  AddCategory( LPCTSTR pCategory );
   int      AddCategoryItem( LPCTSTR pCategory, LPCTSTR pItem, int iState = 2 );
   HRESULT  Delete( int iListIndex );
   HRESULT  DeleteCategory( LPCTSTR pCategory );
   HRESULT  DeleteCategoryItem( LPCTSTR pCategory, int iItemIndex );
   int      FindCategory( LPCTSTR pCategory );
   int      FindCategoryItem( LPCTSTR pCategory, int iStartAfter, LPCTSTR pItem );
   bool     IsCategory( int iListIndex );
   bool     IsCategory( LPCTSTR pString );
   bool     IsCategoryOpen( LPCTSTR pCategory );
   int      GetCategoryCount();
   LPCTSTR  GetCategoryName( int iIndex, bool bIsListIndex = true );
   int      GetCategoryItemCount( LPCTSTR pCategory );
   DWORD    GetCategoryItemData( LPCTSTR pCategory, int iItemIndex );
   int      GetCategoryItemIndex( int iListIndex );
   LPCTSTR  GetCategoryItemName( LPCTSTR pCategory, int iItemIndex );
   int      GetCategoryItemState( LPCTSTR pCategory, int iItemIndex );
   HRESULT  SetCurSel( LPCTSTR pCategory, int iItemIndex );
   int      SetCurSel( int iListIndex );
   HRESULT  SetCategoryItemData( LPCTSTR pCategory, int iItemIndex, DWORD dwValue );
   HRESULT  SetCategoryItemState( LPCTSTR pCategory, int iItemIndex, int iState );
   HRESULT  SetCategoryState( LPCTSTR pCategory, bool bOpen );
   bool     ShowCategoryItemStates( bool bShow = true );
   void     ResetContent();

   // Overrides
   // ClassWizard generated virtual function overrides
   //{{AFX_VIRTUAL(CCatListBox)
   public:
   virtual void DrawItem(LPDRAWITEMSTRUCT lpDrawItemStruct);
   //}}AFX_VIRTUAL
protected:
	BOOL iSelectChange;    //MylistBox 添加

protected:
   // Generated message map functions
   //{{AFX_MSG(CCatListBox)
	afx_msg void OnSelchange(); //MylistBox 添加
	afx_msg HBRUSH CtlColor(CDC* pDC, UINT nCtlColor);    //MylistBox 添加
	afx_msg void OnVScroll(UINT nSBCode, UINT nPos, CScrollBar* pScrollBar); //MylistBox 添加
	afx_msg void OnHScroll(UINT nSBCode, UINT nPos, CScrollBar* pScrollBar);//MylistBox 添加
	afx_msg BOOL OnEraseBkgnd(CDC* pDC);//MylistBox 添加
    afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
    afx_msg void OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags);
    afx_msg void OnLButtonDblClk(UINT nFlags, CPoint point);
   //}}AFX_MSG
	CBrush m_brHollow;//MylistBox 添加
	CBitmap *m_pbmCurrent;//MylistBox 添加
   DECLARE_MESSAGE_MAP()

   CatListBoxCatInfo*   GetCategoryInfo( LPCTSTR pCategory );
   DWORD                GetItemData( int iListIndex );
   int                  SetItemData( int iListIndex, DWORD dwValue );
   int                  AddString( LPCTSTR pString );
   int                  InsertString( int iListIndex, LPCTSTR pString );
   int                  DeleteString( UINT iListIndex );
   void                 ResetCategoryInfo();
   void                 UpdateCategoryIndexes( int iStartAfter, int iOffset );

   // Protected member variables.
   CatListBoxStlMap     m_mapCat;
   bool                 m_bShowStates;
   bool                 m_bDoDraw;

   // Protected constants.
   enum { X_MARGIN = 3, Y_MARGIN = 1 };
};
