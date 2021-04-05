// MediaPlayerDlg.cpp : implementation file
//

#include "stdafx.h"
#include "MediaPlayer.h"
#include "MediaPlayerDlg.h"
#include "afxdialogex.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

// CAboutDlg dialog used for App About

class CAboutDlg : public CDialogEx
{
public:
	CAboutDlg();

// Dialog Data
	enum { IDD = IDD_ABOUTBOX };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

// Implementation
protected:
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialogEx(CAboutDlg::IDD)
{
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialogEx)
END_MESSAGE_MAP()

// CMediaPlayerDlg dialog

CMediaPlayerDlg::CMediaPlayerDlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(CMediaPlayerDlg::IDD, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

CMediaPlayerDlg::~CMediaPlayerDlg()
{
	PlayListItem * pItem = NULL;
	list<PlayListItem *>::iterator iterBegin = m_listPlayItem.begin();
	list<PlayListItem *>::iterator iterEnd = m_listPlayItem.end();
	for (; iterBegin != iterEnd; ++iterBegin)
	{
		pItem = *iterBegin;
		if ( NULL != pItem )
		{
			delete pItem;
			pItem = NULL;
		}
	}
}

void CMediaPlayerDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_PLAYLIST, m_playList);
	DDX_Control(pDX, IDC_OCX, m_player);
}

BEGIN_MESSAGE_MAP(CMediaPlayerDlg, CDialogEx)
	ON_WM_PAINT()
	ON_WM_SYSCOMMAND()
	ON_WM_QUERYDRAGICON()
	ON_LBN_DBLCLK(IDC_PLAYLIST, &CMediaPlayerDlg::OnLbnDblclkPlaylist)
END_MESSAGE_MAP()

// CMediaPlayerDlg message handlers
void CMediaPlayerDlg::InitPlayList()
{
	if ( NULL == m_playList.GetSafeHwnd() )
	{
		return;
	}

	m_playList.SetHorizontalExtent(1000);
	CStdioFile *fsp = new CStdioFile("play.cmx", CFile::modeRead);
	if (NULL == fsp)
	{
		return;
	}

	CString strRecord;
	while (fsp->ReadString(strRecord))
	{
		PlayListItem * pItem = new PlayListItem;
		if (NULL == pItem) break;

		GetItem(strRecord, *pItem);
		int nIndex = m_playList.AddString(pItem->strName);
		m_playList.SetItemData(nIndex, (DWORD_PTR)pItem);
		m_listPlayItem.push_back(pItem);
	}
	fsp->Close();
	delete fsp;
}

BOOL CMediaPlayerDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// Add "About..." menu item to system menu.

	// IDM_ABOUTBOX must be in the system command range.
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != NULL)
	{
		BOOL bNameValid;
		CString strAboutMenu;
		bNameValid = strAboutMenu.LoadString(IDS_ABOUTBOX);
		ASSERT(bNameValid);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// Set the icon for this dialog.  The framework does this automatically
	//  when the application's main window is not a dialog
	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon

	// TODO: Add extra initialization here
	InitPlayList();

	return TRUE;  // return TRUE  unless you set the focus to a control
}

void CMediaPlayerDlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialogEx::OnSysCommand(nID, lParam);
	}
}

// If you add a minimize button to your dialog, you will need the code below
//  to draw the icon.  For MFC applications using the document/view model,
//  this is automatically done for you by the framework.

void CMediaPlayerDlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // device context for painting

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// Center icon in client rectangle
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// Draw the icon
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

// The system calls this function to obtain the cursor to display while the user drags
//  the minimized window.
HCURSOR CMediaPlayerDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}

bool CMediaPlayerDlg::GetItem(CString strContent, PlayListItem & item)
{
	int nPos = strContent.Find(',');
	if (-1 == nPos)
	{
		return false;
	}

	item.strName = strContent.Left(nPos);
	item.strFilePath = strContent.Right(strContent.GetLength() - nPos - 1);
	return true;
}


void CMediaPlayerDlg::OnLbnDblclkPlaylist()
{
	if ( NULL == m_playList.GetSafeHwnd() )
	{
		return;
	}

	int nCurSel = m_playList.GetCurSel();
	PlayListItem * pItem = (PlayListItem *)m_playList.GetItemData(nCurSel);
	if ( NULL == pItem )
	{
		return;
	}

	m_player.SetUrl(pItem->strFilePath);
}
