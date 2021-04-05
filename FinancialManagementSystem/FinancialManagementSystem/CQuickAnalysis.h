// Machine generated IDispatch wrapper class(es) created with Add Class from Typelib Wizard

#include <afxdisp.h>
// CQuickAnalysis wrapper class

class CQuickAnalysis : public COleDispatchDriver
{
public:
	CQuickAnalysis(){} // Calls COleDispatchDriver default constructor
	CQuickAnalysis(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CQuickAnalysis(const CQuickAnalysis& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

	// Attributes
public:

	// Operations
public:


	// QuickAnalysis methods
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
	void Show(long XlQuickAnalysisMode)
	{
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0x1f0, DISPATCH_METHOD, VT_EMPTY, NULL, parms, XlQuickAnalysisMode);
	}
	void Hide(long XlQuickAnalysisMode)
	{
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0x32d, DISPATCH_METHOD, VT_EMPTY, NULL, parms, XlQuickAnalysisMode);
	}

	// QuickAnalysis properties
public:

};
