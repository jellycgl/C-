#pragma once
class CDeviceStore
{
	static CDeviceStore * Instance();

private:
	CDeviceStore();
	CDeviceStore(const CDeviceStore &);
	CDeviceStore & operator = (const CDeviceStore &);

private:
	static CDeviceStore * pDeviceStore;
};

