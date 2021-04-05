#include "stdafx.h"
#include "DeviceStore.h"

static CCriticalSection g_cs;

class DSLock
{
public:
	DSLock()
	{
		g_cs.Lock();
	}
	~DSLock()
	{
		g_cs.Unlock();
	}
};

CDeviceStore * CDeviceStore::pDeviceStore = NULL;

CDeviceStore::CDeviceStore()
{

}

CDeviceStore * CDeviceStore::Instance()
{
	if (NULL == pDeviceStore)
	{
		DSLock dmLock;
		if (NULL == pDeviceStore)
		{
			pDeviceStore = new CDeviceStore();
		}
	}

	return pDeviceStore;
}
