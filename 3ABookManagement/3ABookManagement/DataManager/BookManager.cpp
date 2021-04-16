#include "stdafx.h"
#include "BookManager.h"


CBookManager & CBookManager::GetInstance()
{
	static CBookManager bookManager;
	return bookManager;
}

CBookManager::CBookManager()
{
}

CBookManager::~CBookManager()
{
}
