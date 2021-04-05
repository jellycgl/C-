#pragma once
#include "..\Common.h"

class CFileManager
{
private:
	CFileManager();
	~CFileManager();
	CFileManager(const CFileManager &);
	CFileManager& operator = (const CFileManager &);

public:
	// Singleton
	static CFileManager *Instance();
	static CFileManager *pInstance;

	// Data
	void Initial();
	void Release();
	void ClearAllFiles();
	void GetAllFiles(map<string, FileInfo*> & mapFiles);

	// Management
	bool AddOneFile(const string & strFileFullPath);
	bool DelOneFile(const string & strFileFullPath);
	bool ModifyOneFile(const string & strFileFullPath, const FileInfo & newFile);
	FileInfo * GetOneFile(const string & strFileFullPath);

private:
	map<string, FileInfo*>	m_mapFiles;
};

