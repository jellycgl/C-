// Machine generated IDispatch wrapper class(es) created with Add Class from Typelib Wizard

#include <afxdisp.h>
// CSparkPoints wrapper class

class CSparkPoints : public COleDispatchDriver
{
public:
	CSparkPoints(){} // Calls COleDispatchDriver default constructor
	CSparkPoints(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CSparkPoints(const CSparkPoints& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

	// Attributes
public:

	// Operations
public:


	// SparkPoints methods
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
	LPDISPATCH get_Negative()
	{
		LPDISPATCH result;
		InvokeHelper(0xb8b, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	LPDISPATCH get_Markers()
	{
		LPDISPATCH result;
		InvokeHelper(0xb8c, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	LPDISPATCH get_Highpoint()
	{
		LPDISPATCH result;
		InvokeHelper(0xb8d, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	LPDISPATCH get_Lowpoint()
	{
		LPDISPATCH result;
		InvokeHelper(0xb8e, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	LPDISPATCH get_Firstpoint()
	{
		LPDISPATCH result;
		InvokeHelper(0xb8f, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	LPDISPATCH get_Lastpoint()
	{
		LPDISPATCH result;
		InvokeHelper(0xb90, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}

	// SparkPoints properties
public:

};
