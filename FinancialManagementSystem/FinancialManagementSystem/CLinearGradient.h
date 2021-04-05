// Machine generated IDispatch wrapper class(es) created with Add Class from Typelib Wizard

#include <afxdisp.h>
// CLinearGradient wrapper class

class CLinearGradient : public COleDispatchDriver
{
public:
	CLinearGradient(){} // Calls COleDispatchDriver default constructor
	CLinearGradient(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CLinearGradient(const CLinearGradient& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

	// Attributes
public:

	// Operations
public:


	// LinearGradient methods
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
	LPDISPATCH get_ColorStops()
	{
		LPDISPATCH result;
		InvokeHelper(0xac9, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	double get_Degree()
	{
		double result;
		InvokeHelper(0x657, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, NULL);
		return result;
	}
	void put_Degree(double newValue)
	{
		static BYTE parms[] = VTS_R8;
		InvokeHelper(0x657, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}

	// LinearGradient properties
public:

};
