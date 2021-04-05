// Machine generated IDispatch wrapper class(es) created with Add Class from Typelib Wizard

#include <afxdisp.h>
// CAutoFilter wrapper class

class CAutoFilter : public COleDispatchDriver
{
public:
	CAutoFilter(){} // Calls COleDispatchDriver default constructor
	CAutoFilter(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CAutoFilter(const CAutoFilter& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

	// Attributes
public:

	// Operations
public:


	// AutoFilter methods
public:
	LPDISPATCH get_Application()
	{
		LPDISPATCH result;
		InvokeHelper(0x94, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	long get_Creator()
	{
		long result;
		InvokeHelper(0x95, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	LPDISPATCH get_Parent()
	{
		LPDISPATCH result;
		InvokeHelper(0x96, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	LPDISPATCH get_Range()
	{
		LPDISPATCH result;
		InvokeHelper(0xc5, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	LPDISPATCH get_Filters()
	{
		LPDISPATCH result;
		InvokeHelper(0x651, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	BOOL get_FilterMode()
	{
		BOOL result;
		InvokeHelper(0x320, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	LPDISPATCH get_Sort()
	{
		LPDISPATCH result;
		InvokeHelper(0x370, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	void ApplyFilter()
	{
		InvokeHelper(0xa50, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	void ShowAllData()
	{
		InvokeHelper(0x31a, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}

	// AutoFilter properties
public:

};
