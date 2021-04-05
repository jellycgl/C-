// Machine generated IDispatch wrapper class(es) created with Add Class from Typelib Wizard

#include <afxdisp.h>
// CModelChanges wrapper class

class CModelChanges : public COleDispatchDriver
{
public:
	CModelChanges(){} // Calls COleDispatchDriver default constructor
	CModelChanges(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CModelChanges(const CModelChanges& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

	// Attributes
public:

	// Operations
public:


	// ModelChanges methods
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
	LPDISPATCH get_TablesAdded()
	{
		LPDISPATCH result;
		InvokeHelper(0xc49, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	LPDISPATCH get_TablesDeleted()
	{
		LPDISPATCH result;
		InvokeHelper(0xc4a, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	LPDISPATCH get_TablesModified()
	{
		LPDISPATCH result;
		InvokeHelper(0xc4b, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	LPDISPATCH get_TableNamesChanged()
	{
		LPDISPATCH result;
		InvokeHelper(0xc4c, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	BOOL get_RelationshipChange()
	{
		BOOL result;
		InvokeHelper(0xc4d, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	LPDISPATCH get_ColumnsAdded()
	{
		LPDISPATCH result;
		InvokeHelper(0xc4e, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	LPDISPATCH get_ColumnsDeleted()
	{
		LPDISPATCH result;
		InvokeHelper(0xc4f, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	LPDISPATCH get_ColumnsChanged()
	{
		LPDISPATCH result;
		InvokeHelper(0xc50, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	LPDISPATCH get_MeasuresAdded()
	{
		LPDISPATCH result;
		InvokeHelper(0xc51, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	BOOL get_UnknownChange()
	{
		BOOL result;
		InvokeHelper(0xc52, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	long get_Source()
	{
		long result;
		InvokeHelper(0xde, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}

	// ModelChanges properties
public:

};
