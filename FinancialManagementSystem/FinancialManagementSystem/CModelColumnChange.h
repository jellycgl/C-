// Machine generated IDispatch wrapper class(es) created with Add Class from Typelib Wizard

#include <afxdisp.h>
// CModelColumnChange wrapper class

class CModelColumnChange : public COleDispatchDriver
{
public:
	CModelColumnChange(){} // Calls COleDispatchDriver default constructor
	CModelColumnChange(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CModelColumnChange(const CModelColumnChange& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

	// Attributes
public:

	// Operations
public:


	// ModelColumnChange methods
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
	CString get_TableName()
	{
		CString result;
		InvokeHelper(0x2b0, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	CString get_ColumnName()
	{
		CString result;
		InvokeHelper(0xc54, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}

	// ModelColumnChange properties
public:

};
