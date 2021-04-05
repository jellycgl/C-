// Machine generated IDispatch wrapper class(es) created with Add Class from Typelib Wizard

#include <afxdisp.h>
// CConnections wrapper class

class CConnections : public COleDispatchDriver
{
public:
	CConnections(){} // Calls COleDispatchDriver default constructor
	CConnections(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CConnections(const CConnections& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

	// Attributes
public:

	// Operations
public:


	// Connections methods
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
	long get_Count()
	{
		long result;
		InvokeHelper(0x76, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	LPDISPATCH _AddFromFile(LPCTSTR Filename)
	{
		LPDISPATCH result;
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0xa8c, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms, Filename);
		return result;
	}
	LPDISPATCH Add(LPCTSTR Name, LPCTSTR Description, VARIANT& ConnectionString, VARIANT& CommandText, VARIANT& lCmdtype)
	{
		LPDISPATCH result;
		static BYTE parms[] = VTS_BSTR VTS_BSTR VTS_VARIANT VTS_VARIANT VTS_VARIANT;
		InvokeHelper(0xb5, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms, Name, Description, &ConnectionString, &CommandText, &lCmdtype);
		return result;
	}
	LPDISPATCH Item(VARIANT& Index)
	{
		LPDISPATCH result;
		static BYTE parms[] = VTS_VARIANT;
		InvokeHelper(0xaa, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms, &Index);
		return result;
	}
	LPDISPATCH get__Default(VARIANT& Index)
	{
		LPDISPATCH result;
		static BYTE parms[] = VTS_VARIANT;
		InvokeHelper(0x0, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, parms, &Index);
		return result;
	}
	LPUNKNOWN get__NewEnum()
	{
		LPUNKNOWN result;
		InvokeHelper(0xfffffffc, DISPATCH_PROPERTYGET, VT_UNKNOWN, (void*)&result, NULL);
		return result;
	}
	LPDISPATCH Add2(LPCTSTR Name, LPCTSTR Description, VARIANT& ConnectionString, VARIANT& CommandText, VARIANT& lCmdtype, VARIANT& CreateModelConnection, VARIANT& ImportRelationships)
	{
		LPDISPATCH result;
		static BYTE parms[] = VTS_BSTR VTS_BSTR VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT;
		InvokeHelper(0xbee, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms, Name, Description, &ConnectionString, &CommandText, &lCmdtype, &CreateModelConnection, &ImportRelationships);
		return result;
	}
	LPDISPATCH AddFromFile(LPCTSTR Filename, VARIANT& CreateModelConnection, VARIANT& ImportRelationships)
	{
		LPDISPATCH result;
		static BYTE parms[] = VTS_BSTR VTS_VARIANT VTS_VARIANT;
		InvokeHelper(0xc23, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms, Filename, &CreateModelConnection, &ImportRelationships);
		return result;
	}

	// Connections properties
public:

};
