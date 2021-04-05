#include "stdafx.h"
#include "FileHelper.h"
#include <algorithm>


CFileHelper::CFileHelper()
{
}


CFileHelper::~CFileHelper()
{
}

std::string CFileHelper::GetFileName(const string & strFileFullPath)
{
	int nPos = strFileFullPath.find_last_of('\\');
	if (-1==nPos)
	{
		return "";
	}

	string strFileName = strFileFullPath.substr(nPos + 1);
	return strFileName;
}

std::string CFileHelper::GetFileExt(const string & strFileFullPath)
{
	string strFileName = GetFileName(strFileFullPath);
	if (strFileName.empty())
	{
		return "";
	}

	int nPos = strFileName.find_last_of('.');
	if (-1 == nPos)
	{
		return "";
	}

	string strFileExt = strFileName.substr(nPos + 1);
	return strFileExt;
}

FileType CFileHelper::GetFileType(const string & strFileFullPath)
{
	string strFileExt = GetFileExt(strFileFullPath);

	transform(strFileExt.begin(), strFileExt.end(), strFileExt.begin(), tolower);
	
	if ( 0 == strFileExt.compare("doc") ||
		 0 == strFileExt.compare("docx") )
	{
		return FT_WORD;
	}

	if ( 0 == strFileExt.compare("xls") ||
		 0 == strFileExt.compare("xlsx") )
	{
		return FT_EXCEL;
	}

	return FT_OTHER;
}
