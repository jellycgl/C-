// Machine generated IDispatch wrapper class(es) created with Add Class from Typelib Wizard

#include <afxdisp.h>
// CHeaderFooter wrapper class

class CHeaderFooter : public COleDispatchDriver
{
public:
	CHeaderFooter(){} // Calls COleDispatchDriver default constructor
	CHeaderFooter(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CHeaderFooter(const CHeaderFooter& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

	// Attributes
public:

	// Operations
public:


	// HeaderFooter methods
public:
	CString get_Text()
	{
		CString result;
		InvokeHelper(0x8a, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	void put_Text(LPCTSTR newValue)
	{
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0x8a, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	LPDISPATCH get_Picture()
	{
		LPDISPATCH result;
		InvokeHelper(0x1df, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}

	// HeaderFooter properties
public:

};
