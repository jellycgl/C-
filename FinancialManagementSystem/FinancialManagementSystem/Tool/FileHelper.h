#pragma once

#include "..\Common.h"

class CFileHelper
{
public:
	CFileHelper();
	~CFileHelper();

	static string GetFileName(const string & strFileFullPath);
	static string GetFileExt(const string & strFileFullPath);
	static FileType GetFileType(const string & strFileFullPath);
};

