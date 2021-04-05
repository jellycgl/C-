// Machine generated IDispatch wrapper class(es) created with Add Class from Typelib Wizard

#include <afxdisp.h>
// CResearch wrapper class

class CResearch : public COleDispatchDriver
{
public:
	CResearch(){} // Calls COleDispatchDriver default constructor
	CResearch(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CResearch(const CResearch& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

	// Attributes
public:

	// Operations
public:


	// Research methods
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
	VARIANT Query(LPCTSTR ServiceID, VARIANT& QueryString, VARIANT& QueryLanguage, VARIANT& UseSelection, VARIANT& LaunchQuery)
	{
		VARIANT result;
		static BYTE parms[] = VTS_BSTR VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT;
		InvokeHelper(0xabf, DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms, ServiceID, &QueryString, &QueryLanguage, &UseSelection, &LaunchQuery);
		return result;
	}
	BOOL IsResearchService(LPCTSTR ServiceID)
	{
		BOOL result;
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0xac5, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms, ServiceID);
		return result;
	}
	VARIANT SetLanguagePair(long LanguageFrom, long LanguageTo)
	{
		VARIANT result;
		static BYTE parms[] = VTS_I4 VTS_I4;
		InvokeHelper(0xac6, DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms, LanguageFrom, LanguageTo);
		return result;
	}

	// Research properties
public:

};
