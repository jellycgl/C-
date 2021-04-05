#pragma once
#include <string>
#include <list>
#include <set>
using namespace std;

struct OpenExcelParam
{
	string	strFileFullPath;
	string	strSheetName;
	string	strStartCell;
	string	strEndCell;
};

class CExcelHelper
{
public:
	CExcelHelper();
	~CExcelHelper();

	// Open Excel into ListCtrl
	void OpenExcel(const OpenExcelParam & param, CListCtrl & listCtrl);

	// Get Excel Name
	void GetExcelNameColumn(const string & strFileFullPath, const list<string> & listPages, set<string> & setNames);

	// Export List to Excel
	void ExportListToExcel(CListCtrl *pList, const CString & sExcelFile, const CString & sSheetName);
	void GetCellName(int nRow, int nCol, CString &strName);
};

