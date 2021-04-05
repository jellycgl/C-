// Machine generated IDispatch wrapper class(es) created with Add Class from Typelib Wizard

#include <afxdisp.h>
// CSparkline wrapper class

class CSparkline : public COleDispatchDriver
{
public:
	CSparkline(){} // Calls COleDispatchDriver default constructor
	CSparkline(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CSparkline(const CSparkline& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

	// Attributes
public:

	// Operations
public:


	// Sparkline methods
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
	LPDISPATCH get_Location()
	{
		LPDISPATCH result;
		InvokeHelper(0x575, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	void putref_Location(LPDISPATCH newValue)
	{
		static BYTE parms[] = VTS_DISPATCH;
		InvokeHelper(0x575, DISPATCH_PROPERTYPUTREF, VT_EMPTY, NULL, parms, newValue);
	}
	CString get_SourceData()
	{
		CString result;
		InvokeHelper(0x2ae, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	void put_SourceData(LPCTSTR newValue)
	{
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0x2ae, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	void ModifyLocation(LPDISPATCH Range)
	{
		static BYTE parms[] = VTS_DISPATCH;
		InvokeHelper(0xb85, DISPATCH_METHOD, VT_EMPTY, NULL, parms, Range);
	}
	void ModifySourceData(LPCTSTR Formula)
	{
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0xb86, DISPATCH_METHOD, VT_EMPTY, NULL, parms, Formula);
	}

	// Sparkline properties
public:

};
