// Machine generated IDispatch wrapper class(es) created with Add Class from Typelib Wizard

#include <afxdisp.h>
// CRefreshEvents wrapper class

class CRefreshEvents : public COleDispatchDriver
{
public:
	CRefreshEvents(){} // Calls COleDispatchDriver default constructor
	CRefreshEvents(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CRefreshEvents(const CRefreshEvents& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

	// Attributes
public:

	// Operations
public:


	// RefreshEvents methods
public:
	void BeforeRefresh(BOOL * Cancel)
	{
		static BYTE parms[] = VTS_PBOOL;
		InvokeHelper(0x63c, DISPATCH_METHOD, VT_EMPTY, NULL, parms, Cancel);
	}
	void AfterRefresh(BOOL Success)
	{
		static BYTE parms[] = VTS_BOOL;
		InvokeHelper(0x63d, DISPATCH_METHOD, VT_EMPTY, NULL, parms, Success);
	}

	// RefreshEvents properties
public:

};
