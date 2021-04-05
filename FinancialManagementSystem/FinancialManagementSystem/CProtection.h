// Machine generated IDispatch wrapper class(es) created with Add Class from Typelib Wizard

#include <afxdisp.h>
// CProtection wrapper class

class CProtection : public COleDispatchDriver
{
public:
	CProtection(){} // Calls COleDispatchDriver default constructor
	CProtection(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CProtection(const CProtection& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

	// Attributes
public:

	// Operations
public:


	// Protection methods
public:
	BOOL get_AllowFormattingCells()
	{
		BOOL result;
		InvokeHelper(0x7f0, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	BOOL get_AllowFormattingColumns()
	{
		BOOL result;
		InvokeHelper(0x7f1, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	BOOL get_AllowFormattingRows()
	{
		BOOL result;
		InvokeHelper(0x7f2, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	BOOL get_AllowInsertingColumns()
	{
		BOOL result;
		InvokeHelper(0x7f3, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	BOOL get_AllowInsertingRows()
	{
		BOOL result;
		InvokeHelper(0x7f4, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	BOOL get_AllowInsertingHyperlinks()
	{
		BOOL result;
		InvokeHelper(0x7f5, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	BOOL get_AllowDeletingColumns()
	{
		BOOL result;
		InvokeHelper(0x7f6, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	BOOL get_AllowDeletingRows()
	{
		BOOL result;
		InvokeHelper(0x7f7, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	BOOL get_AllowSorting()
	{
		BOOL result;
		InvokeHelper(0x7f8, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	BOOL get_AllowFiltering()
	{
		BOOL result;
		InvokeHelper(0x7f9, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	BOOL get_AllowUsingPivotTables()
	{
		BOOL result;
		InvokeHelper(0x7fa, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	LPDISPATCH get_AllowEditRanges()
	{
		LPDISPATCH result;
		InvokeHelper(0x8bc, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}

	// Protection properties
public:

};
