// Machine generated IDispatch wrapper class(es) created with Add Class from Typelib Wizard

#include <afxdisp.h>
// CConditionValue wrapper class

class CConditionValue : public COleDispatchDriver
{
public:
	CConditionValue(){} // Calls COleDispatchDriver default constructor
	CConditionValue(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CConditionValue(const CConditionValue& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

	// Attributes
public:

	// Operations
public:


	// ConditionValue methods
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
	void Modify(long newtype, VARIANT& newvalue)
	{
		static BYTE parms[] = VTS_I4 VTS_VARIANT;
		InvokeHelper(0x62d, DISPATCH_METHOD, VT_EMPTY, NULL, parms, newtype, &newvalue);
	}
	long get_Type()
	{
		long result;
		InvokeHelper(0x6c, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	VARIANT get_Value()
	{
		VARIANT result;
		InvokeHelper(0x6, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
		return result;
	}

	// ConditionValue properties
public:

};
