#include "stdafx.h"
#include "FileManager.h"
#include "..\Tool\FileHelper.h"

CFileManager* CFileManager::pInstance = 0;

CFileManager::CFileManager()
{
}

CFileManager::~CFileManager()
{
	ClearAllFiles();
}

CFileManager* CFileManager::Instance()
{
	if (pInstance == NULL)
	{
		pInstance = new CFileManager();
	}
	return pInstance;
}

void CFileManager::Initial()
{
	// 上次关闭的文件记录
}

void CFileManager::Release()
{
	// 保存本次关闭时的文件记录
}

void CFileManager::ClearAllFiles()
{
	map<string, FileInfo*>::iterator iterBegin = m_mapFiles.begin();
	map<string, FileInfo*>::iterator iterEnd = m_mapFiles.end();
	for (; iterBegin != iterEnd; ++iterBegin)
	{
		FileInfo* pFile = iterBegin->second;
		if ( NULL == pFile )
		{
			continue;
		}
		delete pFile;
		pFile = NULL;
	}
	m_mapFiles.clear();
}

void CFileManager::GetAllFiles(map<string, FileInfo*> & mapFiles)
{
	mapFiles = m_mapFiles;
}

bool CFileManager::AddOneFile(const string & strFileFullPath)
{
	map<string, FileInfo*>::iterator iterFind = m_mapFiles.find(strFileFullPath);
	if (iterFind != m_mapFiles.end())
	{
		return false;
	}

	FileInfo * pFile = new FileInfo();
	pFile->strfileFullPath = strFileFullPath;
	pFile->type = CFileHelper::GetFileType(strFileFullPath);
	pFile->strFileExt = CFileHelper::GetFileExt(strFileFullPath);
	pFile->strfileName = CFileHelper::GetFileName(strFileFullPath);
	m_mapFiles[strFileFullPath] = pFile;
	return true;
}

bool CFileManager::DelOneFile(const string & strFileFullPath)
{
	map<string, FileInfo*>::iterator iterFind = m_mapFiles.find(strFileFullPath);
	if (iterFind == m_mapFiles.end())
	{
		return false;
	}

	FileInfo * pFile = iterFind->second;
	delete pFile;
	pFile = NULL;
	m_mapFiles.erase(iterFind);
	return true;
}

bool CFileManager::ModifyOneFile(const string & strFileFullPath, const FileInfo & newFile)
{
	map<string, FileInfo*>::iterator iterFind = m_mapFiles.find(strFileFullPath);
	if (iterFind == m_mapFiles.end())
	{
		return false;
	}

	FileInfo * pFile = iterFind->second;
	*pFile = newFile;
	return true;
}

FileInfo * CFileManager::GetOneFile(const string & strFileFullPath)
{
	map<string, FileInfo*>::iterator iterFind = m_mapFiles.find(strFileFullPath);
	if (iterFind == m_mapFiles.end())
	{
		return false;
	}

	return iterFind->second;
}
