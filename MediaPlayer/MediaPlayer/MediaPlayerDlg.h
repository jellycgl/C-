// MediaPlayerDlg.h : header file
//

#pragma once
#include <list>
#include "MediaEngine\wmpplayer4.h"
using namespace std;

struct PlayListItem
{
	CString strName;
	CString strFilePath;
};

// CMediaPlayerDlg dialog
class CMediaPlayerDlg : public CDialogEx
{
// Construction
public:
	CMediaPlayerDlg(CWnd* pParent = NULL);	// standard constructor
	~CMediaPlayerDlg();

// Dialog Data
	enum { IDD = IDD_MEDIAPLAYER_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	afx_msg void OnLbnDblclkPlaylist();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()

private:
	// Init the play list
	void InitPlayList();

	// Get Item From Record
	bool GetItem(CString strContent, PlayListItem & item);

private:
	CListBox	m_playList;
	CWMPPlayer4	m_player;

/// Data
	list<PlayListItem *>	m_listPlayItem;
};
