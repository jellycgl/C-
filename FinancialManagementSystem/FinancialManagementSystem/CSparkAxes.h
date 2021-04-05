// Machine generated IDispatch wrapper class(es) created with Add Class from Typelib Wizard

#include <afxdisp.h>
// CSparkAxes wrapper class

class CSparkAxes : public COleDispatchDriver
{
public:
	CSparkAxes(){} // Calls COleDispatchDriver default constructor
	CSparkAxes(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CSparkAxes(const CSparkAxes& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

	// Attributes
public:

	// Operations
public:


	// SparkAxes methods
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
	LPDISPATCH get_Vertical()
	{
		LPDISPATCH result;
		InvokeHelper(0xb91, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	LPDISPATCH get_Horizontal()
	{
		LPDISPATCH result;
		InvokeHelper(0xb92, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}

	// SparkAxes properties
public:

};
