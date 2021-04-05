// Machine generated IDispatch wrapper class(es) created with Add Class from Typelib Wizard

#include <afxdisp.h>
// CMultiThreadedCalculation wrapper class

class CMultiThreadedCalculation : public COleDispatchDriver
{
public:
	CMultiThreadedCalculation(){} // Calls COleDispatchDriver default constructor
	CMultiThreadedCalculation(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CMultiThreadedCalculation(const CMultiThreadedCalculation& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

	// Attributes
public:

	// Operations
public:


	// MultiThreadedCalculation methods
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
	BOOL get_Enabled()
	{
		BOOL result;
		InvokeHelper(0x258, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_Enabled(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL;
		InvokeHelper(0x258, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_ThreadMode()
	{
		long result;
		InvokeHelper(0xace, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_ThreadMode(long newValue)
	{
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0xace, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_ThreadCount()
	{
		long result;
		InvokeHelper(0xacf, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_ThreadCount(long newValue)
	{
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0xacf, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}

	// MultiThreadedCalculation properties
public:

};
