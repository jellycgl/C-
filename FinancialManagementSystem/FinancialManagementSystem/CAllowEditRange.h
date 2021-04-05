// Machine generated IDispatch wrapper class(es) created with Add Class from Typelib Wizard

#include <afxdisp.h>
// CAllowEditRange wrapper class

class CAllowEditRange : public COleDispatchDriver
{
public:
	CAllowEditRange(){} // Calls COleDispatchDriver default constructor
	CAllowEditRange(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CAllowEditRange(const CAllowEditRange& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

	// Attributes
public:

	// Operations
public:


	// AllowEditRange methods
public:
	CString get_Title()
	{
		CString result;
		InvokeHelper(0xc7, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	void put_Title(LPCTSTR newValue)
	{
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0xc7, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	LPDISPATCH get_Range()
	{
		LPDISPATCH result;
		InvokeHelper(0xc5, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	void putref_Range(LPDISPATCH newValue)
	{
		static BYTE parms[] = VTS_DISPATCH;
		InvokeHelper(0xc5, DISPATCH_PROPERTYPUTREF, VT_EMPTY, NULL, parms, newValue);
	}
	void ChangePassword(LPCTSTR Password)
	{
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0x8bd, DISPATCH_METHOD, VT_EMPTY, NULL, parms, Password);
	}
	void Delete()
	{
		InvokeHelper(0x75, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	void Unprotect(VARIANT& Password)
	{
		static BYTE parms[] = VTS_VARIANT;
		InvokeHelper(0x11d, DISPATCH_METHOD, VT_EMPTY, NULL, parms, &Password);
	}
	LPDISPATCH get_Users()
	{
		LPDISPATCH result;
		InvokeHelper(0x8be, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}

	// AllowEditRange properties
public:

};
