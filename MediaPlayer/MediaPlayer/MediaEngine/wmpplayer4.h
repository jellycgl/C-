#if !defined(AFX_WMPPLAYER4_H__B97701A8_CB5A_440A_B83D_0B2010ECA1BF__INCLUDED_)
#define AFX_WMPPLAYER4_H__B97701A8_CB5A_440A_B83D_0B2010ECA1BF__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.


// Dispatch interfaces referenced by this interface
class CWMPControls;
class CWMPSettings;
class CWMPMedia;
class CWMPMediaCollection;
class CWMPPlaylistCollection;
class CWMPNetwork;
class CWMPPlaylist;
class CWMPCdromCollection;
class CWMPClosedCaption;
class CWMPError;
class CWMPDVD;
class CWMPPlayerApplication;

/////////////////////////////////////////////////////////////////////////////
// CWMPPlayer4 wrapper class

class CWMPPlayer4 : public CWnd
{
protected:
	DECLARE_DYNCREATE(CWMPPlayer4)
public:
	CLSID const& GetClsid()
	{
		static CLSID const clsid
			= { 0x6bf52a52, 0x394a, 0x11d3, { 0xb1, 0x53, 0x0, 0xc0, 0x4f, 0x79, 0xfa, 0xa6 } };
		return clsid;
	}
	virtual BOOL Create(LPCTSTR lpszClassName,
		LPCTSTR lpszWindowName, DWORD dwStyle,
		const RECT& rect,
		CWnd* pParentWnd, UINT nID,
		CCreateContext* pContext = NULL)
	{ return CreateControl(GetClsid(), lpszWindowName, dwStyle, rect, pParentWnd, nID); }

    BOOL Create(LPCTSTR lpszWindowName, DWORD dwStyle,
		const RECT& rect, CWnd* pParentWnd, UINT nID,
		CFile* pPersist = NULL, BOOL bStorage = FALSE,
		BSTR bstrLicKey = NULL)
	{ return CreateControl(GetClsid(), lpszWindowName, dwStyle, rect, pParentWnd, nID,
		pPersist, bStorage, bstrLicKey); }

// Attributes
public:

// Operations
public:
	void close();
	CString GetUrl();
	void SetUrl(LPCTSTR lpszNewValue);
	long GetOpenState();
	long GetPlayState();
	CWMPControls GetControls();
	CWMPSettings GetSettings();
	CWMPMedia GetCurrentMedia();
	void SetCurrentMedia(LPDISPATCH newValue);
	CWMPMediaCollection GetMediaCollection();
	CWMPPlaylistCollection GetPlaylistCollection();
	CString GetVersionInfo();
	void launchURL(LPCTSTR bstrURL);
	CWMPNetwork GetNetwork();
	CWMPPlaylist GetCurrentPlaylist();
	void SetCurrentPlaylist(LPDISPATCH newValue);
	CWMPCdromCollection GetCdromCollection();
	CWMPClosedCaption GetClosedCaption();
	BOOL GetIsOnline();
	CWMPError GetError();
	CString GetStatus();
	CWMPDVD GetDvd();
	CWMPPlaylist newPlaylist(LPCTSTR bstrName, LPCTSTR bstrURL);
	CWMPMedia newMedia(LPCTSTR bstrURL);
	BOOL GetEnabled();
	void SetEnabled(BOOL bNewValue);
	BOOL GetFullScreen();
	void SetFullScreen(BOOL bNewValue);
	BOOL GetEnableContextMenu();
	void SetEnableContextMenu(BOOL bNewValue);
	void SetUiMode(LPCTSTR lpszNewValue);
	CString GetUiMode();
	BOOL GetStretchToFit();
	void SetStretchToFit(BOOL bNewValue);
	BOOL GetWindowlessVideo();
	void SetWindowlessVideo(BOOL bNewValue);
	BOOL GetIsRemote();
	CWMPPlayerApplication GetPlayerApplication();
	void openPlayer(LPCTSTR bstrURL);
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_WMPPLAYER4_H__B97701A8_CB5A_440A_B83D_0B2010ECA1BF__INCLUDED_)
