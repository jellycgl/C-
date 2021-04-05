// Machine generated IDispatch wrapper class(es) created with Add Class from Typelib Wizard

#include <afxdisp.h>
// CModelMeasureName wrapper class

class CModelMeasureName : public COleDispatchDriver
{
public:
	CModelMeasureName(){} // Calls COleDispatchDriver default constructor
	CModelMeasureName(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CModelMeasureName(const CModelMeasureName& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

	// Attributes
public:

	// Operations
public:


	// ModelMeasureName methods
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
	CString get_MeasureName()
	{
		CString result;
		InvokeHelper(0xc55, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}

	// ModelMeasureName properties
public:

};
