// Machine generated IDispatch wrapper class(es) created with Add Class from Typelib Wizard

#include <afxdisp.h>
// CRTD wrapper class

class CRTD : public COleDispatchDriver
{
public:
	CRTD(){} // Calls COleDispatchDriver default constructor
	CRTD(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CRTD(const CRTD& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

	// Attributes
public:

	// Operations
public:


	// RTD methods
public:
	long get_ThrottleInterval()
	{
		long result;
		InvokeHelper(0x8c0, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_ThrottleInterval(long newValue)
	{
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0x8c0, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	void RefreshData()
	{
		InvokeHelper(0x8c1, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	void RestartServers()
	{
		InvokeHelper(0x8c2, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}

	// RTD properties
public:

};
