// Machine generated IDispatch wrapper class(es) created with Add Class from Typelib Wizard

#include <afxdisp.h>
// CPivotFilters wrapper class

class CPivotFilters : public COleDispatchDriver
{
public:
	CPivotFilters(){} // Calls COleDispatchDriver default constructor
	CPivotFilters(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CPivotFilters(const CPivotFilters& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

	// Attributes
public:

	// Operations
public:


	// PivotFilters methods
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
	LPDISPATCH get_Item(VARIANT& Index)
	{
		LPDISPATCH result;
		static BYTE parms[] = VTS_VARIANT;
		InvokeHelper(0xaa, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, parms, &Index);
		return result;
	}
	long get_Count()
	{
		long result;
		InvokeHelper(0x76, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	LPDISPATCH Add(long Type, VARIANT& DataField, VARIANT& Value1, VARIANT& Value2, VARIANT& Order, VARIANT& Name, VARIANT& Description, VARIANT& MemberPropertyField)
	{
		LPDISPATCH result;
		static BYTE parms[] = VTS_I4 VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT;
		InvokeHelper(0xb5, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms, Type, &DataField, &Value1, &Value2, &Order, &Name, &Description, &MemberPropertyField);
		return result;
	}
	LPDISPATCH Add2(long Type, VARIANT& DataField, VARIANT& Value1, VARIANT& Value2, VARIANT& Order, VARIANT& Name, VARIANT& Description, VARIANT& MemberPropertyField, VARIANT& WholeDayFilter)
	{
		LPDISPATCH result;
		static BYTE parms[] = VTS_I4 VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT;
		InvokeHelper(0xbee, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms, Type, &DataField, &Value1, &Value2, &Order, &Name, &Description, &MemberPropertyField, &WholeDayFilter);
		return result;
	}

	// PivotFilters properties
public:

};
