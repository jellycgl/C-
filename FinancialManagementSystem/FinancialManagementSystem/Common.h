#pragma once

#include <map>
#include <string>
using namespace std;

enum FileType
{
	FT_OTHER = -1,
	FT_EXCEL,
	FT_WORD
};

struct FileInfo
{
	string		strFileExt;
	string		strfileName;
	string		strfileFullPath;
	FileType	type;
};

