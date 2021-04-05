#include "stdafx.h"
#include "ExcelHelper.h"
#include "..\CApplication.h"
#include "..\CWorkbooks.h"
#include "..\CWorkbook.h"
#include "..\CWorksheets.h"
#include "..\CRange.h"
#include "..\CWorksheet.h"


CExcelHelper::CExcelHelper()
{
}


CExcelHelper::~CExcelHelper()
{
}

void CExcelHelper::OpenExcel(const OpenExcelParam & param, CListCtrl & listCtrl)
{
	CApplication ExcelApp;
	CWorkbooks books;
	CWorkbook book;
	CWorksheets sheets;
	CWorksheet sheet;
	CRange range;
	LPDISPATCH lpDisp = NULL;

	if (!ExcelApp.CreateDispatch(_T("Excel.Application"), NULL))
	{
		return;
	}
	ExcelApp.put_DisplayAlerts(FALSE);

	books.AttachDispatch(ExcelApp.get_Workbooks());

	CString strBookPath = param.strFileFullPath.c_str();
	try
	{
		lpDisp = books.Open(strBookPath,
			vtMissing, vtMissing, vtMissing, vtMissing, vtMissing,
			vtMissing, vtMissing, vtMissing, vtMissing, vtMissing,
			vtMissing, vtMissing, vtMissing, vtMissing);
		book.AttachDispatch(lpDisp);
	}
	catch (...)
	{
		int errror = GetLastError();
		lpDisp = books.Add(vtMissing);
		book.AttachDispatch(lpDisp);
	}

	sheets.AttachDispatch(book.get_Sheets());

	try
	{
		lpDisp = sheets.get_Item(_variant_t(param.strSheetName.c_str()));
		sheet.AttachDispatch(lpDisp);
	}
	catch (...)
	{
		lpDisp = sheets.Add(vtMissing, vtMissing, _variant_t((long)1), vtMissing);
		sheet.AttachDispatch(lpDisp);
		sheet.put_Name(param.strSheetName.c_str());
	}

	lpDisp = sheet.get_Range(_variant_t(param.strStartCell.c_str()), _variant_t(param.strEndCell.c_str()));
	range.AttachDispatch(lpDisp);

	VARIANT varRead = range.get_Value2();
	COleSafeArray olesaRead(varRead);

	VARIANT varItem;
	CString strItem;
	long index[2] = { 0, 0 };
	long lFirstLBound = 0;
	long lFirstUBound = 0;
	long lSecondLBound = 0;
	long lSecondUBound = 0;
	olesaRead.GetLBound(1, &lFirstLBound);
	olesaRead.GetUBound(1, &lFirstUBound);
	olesaRead.GetLBound(2, &lSecondLBound);
	olesaRead.GetUBound(2, &lSecondUBound);
	memset(index, 0, 2 * sizeof(long));
	listCtrl.InsertColumn(0, _T(""), 0, 100);
	for (long j = lSecondLBound; j <= lSecondUBound; j++)
	{
		CString strColName = _T("");
		strColName.Format(_T("%d"), j);
		listCtrl.InsertColumn(j, strColName, 0, 100);
	}
	for (long i = lFirstLBound; i <= lFirstUBound; i++)
	{
		CString strRowName = _T("");
		strRowName.Format(_T("%d"), i);
		listCtrl.InsertItem(i - 1, strRowName);

		index[0] = i;
		for (long j = lSecondLBound; j <= lSecondUBound; j++)
		{
			index[1] = j;
			olesaRead.GetElement(index, &varItem);

			switch (varItem.vt)
			{
			case VT_R8:
			{
				strItem.Format(_T("%d"), (int)varItem.dblVal);
			}
			break;
			case VT_BSTR:
			{
				strItem = varItem.bstrVal;
			}
			break;
			case VT_I4:
			{
				strItem.Format(_T("%ld"), (int)varItem.lVal);
			}
			break;
			default:
			{
				break;
			}
			}

			listCtrl.SetItemText(i - 1, j, strItem);
		}
	}

	sheet.ReleaseDispatch();
	sheets.ReleaseDispatch();
	book.ReleaseDispatch();
	books.ReleaseDispatch();
	ExcelApp.Quit();
	ExcelApp.ReleaseDispatch();
}

void CExcelHelper::GetExcelNameColumn(const string & strFileFullPath, const list<string> & listPages, set<string> & setNames)
{
	CApplication ExcelApp;
	CWorkbooks books;
	CWorkbook book;
	CWorksheets sheets;
	CWorksheet sheet;
	CRange range;
	LPDISPATCH lpDisp = NULL;

	if (!ExcelApp.CreateDispatch(_T("Excel.Application"), NULL))
	{
		return;
	}
	ExcelApp.put_DisplayAlerts(FALSE);

	books.AttachDispatch(ExcelApp.get_Workbooks());

	CString strBookPath = strFileFullPath.c_str();
	try
	{
		lpDisp = books.Open(strBookPath,
			vtMissing, vtMissing, vtMissing, vtMissing, vtMissing,
			vtMissing, vtMissing, vtMissing, vtMissing, vtMissing,
			vtMissing, vtMissing, vtMissing, vtMissing);
		book.AttachDispatch(lpDisp);
	}
	catch (...)
	{
		int errror = GetLastError();
		lpDisp = books.Add(vtMissing);
		book.AttachDispatch(lpDisp);
	}

	sheets.AttachDispatch(book.get_Sheets());

	list<string>::const_iterator iterBegin = listPages.begin();
	list<string>::const_iterator iterEnd = listPages.end();
	for (; iterBegin != iterEnd; ++iterBegin)
	{
		string strSheetName = *iterBegin;
		try
		{
			lpDisp = sheets.get_Item(_variant_t(strSheetName.c_str()));
			sheet.AttachDispatch(lpDisp);
		}
		catch (...)
		{
			lpDisp = sheets.Add(vtMissing, vtMissing, _variant_t((long)1), vtMissing);
			sheet.AttachDispatch(lpDisp);
			sheet.put_Name(strSheetName.c_str());
		}

		lpDisp = sheet.get_Range(_variant_t("D1"), _variant_t("D209"));
		range.AttachDispatch(lpDisp);

		VARIANT varRead = range.get_Value2();
		COleSafeArray olesaRead(varRead);

		VARIANT varItem;
		CString strItem;
		long index[2] = { 0, 0 };
		long lFirstLBound = 0;
		long lFirstUBound = 0;
		long lSecondLBound = 0;
		long lSecondUBound = 0;
		olesaRead.GetLBound(1, &lFirstLBound);
		olesaRead.GetUBound(1, &lFirstUBound);
		olesaRead.GetLBound(2, &lSecondLBound);
		olesaRead.GetUBound(2, &lSecondUBound);
		memset(index, 0, 2 * sizeof(long));

		for (long i = lFirstLBound; i <= lFirstUBound; i++)
		{
			index[0] = i;
			for (long j = lSecondLBound; j <= lSecondUBound; j++)
			{
				index[1] = j;
				olesaRead.GetElement(index, &varItem);

				switch (varItem.vt)
				{
				case VT_R8:
				{
					strItem.Format(_T("%d"), (int)varItem.dblVal);
				}
				break;
				case VT_BSTR:
				{
					strItem = varItem.bstrVal;
				}
				break;
				case VT_I4:
				{
					strItem.Format(_T("%ld"), (int)varItem.lVal);
				}
				break;
				default:
				{
					break;
				}
				}
				setNames.insert(strItem.GetString());
			}
		}
		sheet.ReleaseDispatch();
	}

	sheets.ReleaseDispatch();
	book.ReleaseDispatch();
	books.ReleaseDispatch();
	ExcelApp.Quit();
	ExcelApp.ReleaseDispatch();
}

void CExcelHelper::GetCellName(int nRow, int nCol, CString &strName)
{
	CString strRow;
	char cCell = (char)('A' + nCol - 1);

	strName.Format(_T("%c"), cCell);
	strRow.Format(_T("%d "), nRow);
	strName += strRow;
}

void CExcelHelper::ExportListToExcel(CListCtrl *pList, const CString & sExcelFile, const CString & sSheetName)
{
	if (::PathFileExists(sExcelFile))
		DeleteFile(sExcelFile);

	//CString cStrFile = _T("E:\\myexcel.xls");  
	COleVariant covTrue((short)TRUE), covFalse((short)FALSE), covOptional((long)DISP_E_PARAMNOTFOUND, VT_ERROR);

	CApplication app; //Excel程序  
	CWorkbooks books; //工作簿集合  
	CWorkbook book;  //工作表  
	CWorksheets sheets;  //工作簿集合  
	CWorksheet sheet; //工作表集合  
	CRange range; //使用区域  

	if (!app.CreateDispatch(_T("Excel.Application"), NULL))
	{
		return;
	}


	books = app.get_Workbooks();
	book = books.Add(covOptional);


	sheets = book.get_Worksheets();
	sheet = sheets.get_Item(COleVariant((short)1));  //得到第一个工作表  

	CHeaderCtrl   *pmyHeaderCtrl = pList->GetHeaderCtrl(); //获取表头  

	int   m_cols = pmyHeaderCtrl->GetItemCount(); //获取列数  
	int   m_rows = pList->GetItemCount();  //获取行数  


	TCHAR     lpBuffer[256];

	HDITEM   hdi; //This structure contains information about an item in a header control. This structure has been updated to support header item images and order values.  
	hdi.mask = HDI_TEXT;
	hdi.pszText = lpBuffer;
	hdi.cchTextMax = 256;

	CString   colname;
	CString strTemp;

	int   iRow, iCol;
	for (iCol = 0; iCol < m_cols; iCol++)//将列表的标题头写入EXCEL   
	{
		GetCellName(1, iCol + 1, colname); //(colname就是对应表格的A1,B1,C1,D1)  

		range = sheet.get_Range(COleVariant(colname), COleVariant(colname));

		pmyHeaderCtrl->GetItem(iCol, &hdi); //获取表头每列的信息  

		range.put_Value2(COleVariant(hdi.pszText));  //设置每列的内容  

		int   nWidth = pList->GetColumnWidth(iCol) / 6;

		//得到第iCol+1列     
		range.AttachDispatch(range.get_Item(_variant_t((long)(iCol + 1)), vtMissing).pdispVal, true);

		//设置列宽    
		range.put_ColumnWidth(_variant_t((long)nWidth));

	}

	range = sheet.get_Range(COleVariant(_T("A1 ")), COleVariant(colname));

	range.put_RowHeight(_variant_t((long)50));//设置行的高度   


	range.put_VerticalAlignment(COleVariant((short)-4108));//xlVAlignCenter   =   -4108   

	COleSafeArray   saRet; //COleSafeArray类是用于处理任意类型和维数的数组的类  
	DWORD   numElements[] = { m_rows, m_cols };       //行列写入数组  
	saRet.Create(VT_BSTR, 2, numElements); //创建所需的数组  

	range = sheet.get_Range(COleVariant(_T("A2 ")), covOptional); //从A2开始  
	range = range.get_Resize(COleVariant((short)m_rows), COleVariant((short)m_cols)); //表的区域  

	long   index[2];

	for (iRow = 1; iRow <= m_rows; iRow++)//将列表内容写入EXCEL   
	{
		for (iCol = 1; iCol <= m_cols; iCol++)
		{
			index[0] = iRow - 1;
			index[1] = iCol - 1;

			CString   szTemp;

			szTemp = pList->GetItemText(iRow - 1, iCol - 1); //取得m_list控件中的内容  

			BSTR   bstr = szTemp.AllocSysString(); //The AllocSysString method allocates a new BSTR string that is Automation compatible  

			saRet.PutElement(index, bstr); //把m_list控件中的内容放入saRet  

			SysFreeString(bstr);
		}
	}



	range.put_Value2(COleVariant(saRet)); //将得到的数据的saRet数组值放入表格  


	book.SaveCopyAs(COleVariant(sExcelFile)); //保存到cStrFile文件  
	book.put_Saved(true);



	books.Close();

	//  

	book.ReleaseDispatch();
	books.ReleaseDispatch();

	app.ReleaseDispatch();
	app.Quit();
}
