// Machine generated IDispatch wrapper class(es) created with Add Class from Typelib Wizard

#include <afxdisp.h>
// CModel wrapper class

class CModel : public COleDispatchDriver
{
public:
	CModel(){} // Calls COleDispatchDriver default constructor
	CModel(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CModel(const CModel& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

	// Attributes
public:

	// Operations
public:


	// Model methods
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
	LPDISPATCH get_ModelTables()
	{
		LPDISPATCH result;
		InvokeHelper(0xc22, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	LPDISPATCH get_ModelRelationships()
	{
		LPDISPATCH result;
		InvokeHelper(0xc36, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	void Refresh()
	{
		InvokeHelper(0x589, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	LPDISPATCH AddConnection(LPDISPATCH ConnectionToDataSource)
	{
		LPDISPATCH result;
		static BYTE parms[] = VTS_DISPATCH;
		InvokeHelper(0xc37, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms, ConnectionToDataSource);
		return result;
	}
	LPDISPATCH CreateModelWorkbookConnection(VARIANT& ModelTable)
	{
		LPDISPATCH result;
		static BYTE parms[] = VTS_VARIANT;
		InvokeHelper(0xc39, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms, &ModelTable);
		return result;
	}
	LPDISPATCH get_DataModelConnection()
	{
		LPDISPATCH result;
		InvokeHelper(0xc3b, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	CString get_Name()
	{
		CString result;
		InvokeHelper(0x6e, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	void Initialize()
	{
		InvokeHelper(0xc3c, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}

	// Model properties
public:

};
