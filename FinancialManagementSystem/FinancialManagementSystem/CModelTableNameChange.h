// Machine generated IDispatch wrapper class(es) created with Add Class from Typelib Wizard

#include <afxdisp.h>
// CModelTableNameChange wrapper class

class CModelTableNameChange : public COleDispatchDriver
{
public:
	CModelTableNameChange(){} // Calls COleDispatchDriver default constructor
	CModelTableNameChange(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CModelTableNameChange(const CModelTableNameChange& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

	// Attributes
public:

	// Operations
public:


	// ModelTableNameChange methods
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
	CString get_TableNameOld()
	{
		CString result;
		InvokeHelper(0xc47, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	CString get_TableNameNew()
	{
		CString result;
		InvokeHelper(0xc48, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}

	// ModelTableNameChange properties
public:

};
