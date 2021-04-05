// Machine generated IDispatch wrapper class(es) created with Add Class from Typelib Wizard

#include <afxdisp.h>
// CCalculatedMembers wrapper class

class CCalculatedMembers : public COleDispatchDriver
{
public:
	CCalculatedMembers(){} // Calls COleDispatchDriver default constructor
	CCalculatedMembers(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CCalculatedMembers(const CCalculatedMembers& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

	// Attributes
public:

	// Operations
public:


	// CalculatedMembers methods
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
	LPDISPATCH get_Item(VARIANT& Index)
	{
		LPDISPATCH result;
		static BYTE parms[] = VTS_VARIANT;
		InvokeHelper(0xaa, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, parms, &Index);
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
	LPDISPATCH _Add(LPCTSTR Name, LPCTSTR Formula, VARIANT& SolveOrder, VARIANT& Type)
	{
		LPDISPATCH result;
		static BYTE parms[] = VTS_BSTR VTS_BSTR VTS_VARIANT VTS_VARIANT;
		InvokeHelper(0x825, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms, Name, Formula, &SolveOrder, &Type);
		return result;
	}
	LPDISPATCH Add(LPCTSTR Name, VARIANT& Formula, VARIANT& SolveOrder, VARIANT& Type, VARIANT& Dynamic, VARIANT& DisplayFolder, VARIANT& HierarchizeDistinct)
	{
		LPDISPATCH result;
		static BYTE parms[] = VTS_BSTR VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT;
		InvokeHelper(0xb5, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms, Name, &Formula, &SolveOrder, &Type, &Dynamic, &DisplayFolder, &HierarchizeDistinct);
		return result;
	}
	LPDISPATCH AddCalculatedMember(LPCTSTR Name, VARIANT& Formula, VARIANT& SolveOrder, VARIANT& Type, VARIANT& DisplayFolder, VARIANT& MeasureGroup, VARIANT& ParentHierarchy, VARIANT& ParentMember, VARIANT& NumberFormat)
	{
		LPDISPATCH result;
		static BYTE parms[] = VTS_BSTR VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT;
		InvokeHelper(0xc13, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms, Name, &Formula, &SolveOrder, &Type, &DisplayFolder, &MeasureGroup, &ParentHierarchy, &ParentMember, &NumberFormat);
		return result;
	}

	// CalculatedMembers properties
public:

};
