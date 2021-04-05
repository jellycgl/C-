// Machine generated IDispatch wrapper class(es) created with Add Class from Typelib Wizard

#include <afxdisp.h>
// CDocEvents wrapper class

class CDocEvents : public COleDispatchDriver
{
public:
	CDocEvents(){} // Calls COleDispatchDriver default constructor
	CDocEvents(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CDocEvents(const CDocEvents& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

	// Attributes
public:

	// Operations
public:


	// DocEvents methods
public:
	void SelectionChange(LPDISPATCH Target)
	{
		static BYTE parms[] = VTS_DISPATCH;
		InvokeHelper(0x607, DISPATCH_METHOD, VT_EMPTY, NULL, parms, Target);
	}
	void BeforeDoubleClick(LPDISPATCH Target, BOOL * Cancel)
	{
		static BYTE parms[] = VTS_DISPATCH VTS_PBOOL;
		InvokeHelper(0x601, DISPATCH_METHOD, VT_EMPTY, NULL, parms, Target, Cancel);
	}
	void BeforeRightClick(LPDISPATCH Target, BOOL * Cancel)
	{
		static BYTE parms[] = VTS_DISPATCH VTS_PBOOL;
		InvokeHelper(0x5fe, DISPATCH_METHOD, VT_EMPTY, NULL, parms, Target, Cancel);
	}
	void Activate()
	{
		InvokeHelper(0x130, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	void Deactivate()
	{
		InvokeHelper(0x5fa, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	void Calculate()
	{
		InvokeHelper(0x117, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	void Change(LPDISPATCH Target)
	{
		static BYTE parms[] = VTS_DISPATCH;
		InvokeHelper(0x609, DISPATCH_METHOD, VT_EMPTY, NULL, parms, Target);
	}
	void FollowHyperlink(LPDISPATCH Target)
	{
		static BYTE parms[] = VTS_DISPATCH;
		InvokeHelper(0x5be, DISPATCH_METHOD, VT_EMPTY, NULL, parms, Target);
	}
	void PivotTableUpdate(LPDISPATCH Target)
	{
		static BYTE parms[] = VTS_DISPATCH;
		InvokeHelper(0x86c, DISPATCH_METHOD, VT_EMPTY, NULL, parms, Target);
	}
	void PivotTableAfterValueChange(LPDISPATCH TargetPivotTable, LPDISPATCH TargetRange)
	{
		static BYTE parms[] = VTS_DISPATCH VTS_DISPATCH;
		InvokeHelper(0xb46, DISPATCH_METHOD, VT_EMPTY, NULL, parms, TargetPivotTable, TargetRange);
	}
	void PivotTableBeforeAllocateChanges(LPDISPATCH TargetPivotTable, long ValueChangeStart, long ValueChangeEnd, BOOL * Cancel)
	{
		static BYTE parms[] = VTS_DISPATCH VTS_I4 VTS_I4 VTS_PBOOL;
		InvokeHelper(0xb49, DISPATCH_METHOD, VT_EMPTY, NULL, parms, TargetPivotTable, ValueChangeStart, ValueChangeEnd, Cancel);
	}
	void PivotTableBeforeCommitChanges(LPDISPATCH TargetPivotTable, long ValueChangeStart, long ValueChangeEnd, BOOL * Cancel)
	{
		static BYTE parms[] = VTS_DISPATCH VTS_I4 VTS_I4 VTS_PBOOL;
		InvokeHelper(0xb4c, DISPATCH_METHOD, VT_EMPTY, NULL, parms, TargetPivotTable, ValueChangeStart, ValueChangeEnd, Cancel);
	}
	void PivotTableBeforeDiscardChanges(LPDISPATCH TargetPivotTable, long ValueChangeStart, long ValueChangeEnd)
	{
		static BYTE parms[] = VTS_DISPATCH VTS_I4 VTS_I4;
		InvokeHelper(0xb4d, DISPATCH_METHOD, VT_EMPTY, NULL, parms, TargetPivotTable, ValueChangeStart, ValueChangeEnd);
	}
	void PivotTableChangeSync(LPDISPATCH Target)
	{
		static BYTE parms[] = VTS_DISPATCH;
		InvokeHelper(0xb4e, DISPATCH_METHOD, VT_EMPTY, NULL, parms, Target);
	}
	void LensGalleryRenderComplete()
	{
		InvokeHelper(0xc00, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	void TableUpdate(LPDISPATCH Target)
	{
		static BYTE parms[] = VTS_DISPATCH;
		InvokeHelper(0xc01, DISPATCH_METHOD, VT_EMPTY, NULL, parms, Target);
	}
	void BeforeDelete()
	{
		InvokeHelper(0xc02, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}

	// DocEvents properties
public:

};
