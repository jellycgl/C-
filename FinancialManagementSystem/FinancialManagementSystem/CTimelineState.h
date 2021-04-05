// Machine generated IDispatch wrapper class(es) created with Add Class from Typelib Wizard

#include <afxdisp.h>
// CTimelineState wrapper class

class CTimelineState : public COleDispatchDriver
{
public:
	CTimelineState(){} // Calls COleDispatchDriver default constructor
	CTimelineState(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CTimelineState(const CTimelineState& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

	// Attributes
public:

	// Operations
public:


	// TimelineState methods
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
	VARIANT get_StartDate()
	{
		VARIANT result;
		InvokeHelper(0xc3d, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
		return result;
	}
	VARIANT get_EndDate()
	{
		VARIANT result;
		InvokeHelper(0xc3e, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
		return result;
	}
	long get_FilterType()
	{
		long result;
		InvokeHelper(0xa7e, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	VARIANT get_FilterValue1()
	{
		VARIANT result;
		InvokeHelper(0xc3f, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
		return result;
	}
	VARIANT get_FilterValue2()
	{
		VARIANT result;
		InvokeHelper(0xc40, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
		return result;
	}
	BOOL get_SingleRangeFilterState()
	{
		BOOL result;
		InvokeHelper(0xc41, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	long SetFilterDateRange(VARIANT& StartDate, VARIANT& EndDate)
	{
		long result;
		static BYTE parms[] = VTS_VARIANT VTS_VARIANT;
		InvokeHelper(0xc42, DISPATCH_METHOD, VT_I4, (void*)&result, parms, &StartDate, &EndDate);
		return result;
	}

	// TimelineState properties
public:

};
