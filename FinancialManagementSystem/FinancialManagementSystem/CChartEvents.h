// Machine generated IDispatch wrapper class(es) created with Add Class from Typelib Wizard

#include <afxdisp.h>
// CChartEvents wrapper class

class CChartEvents : public COleDispatchDriver
{
public:
	CChartEvents(){} // Calls COleDispatchDriver default constructor
	CChartEvents(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CChartEvents(const CChartEvents& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

	// Attributes
public:

	// Operations
public:


	// ChartEvents methods
public:
	void Activate()
	{
		InvokeHelper(0x130, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	void Deactivate()
	{
		InvokeHelper(0x5fa, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	void Resize()
	{
		InvokeHelper(0x100, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	void MouseDown(long Button, long Shift, long x, long y)
	{
		static BYTE parms[] = VTS_I4 VTS_I4 VTS_I4 VTS_I4;
		InvokeHelper(0x5fb, DISPATCH_METHOD, VT_EMPTY, NULL, parms, Button, Shift, x, y);
	}
	void MouseUp(long Button, long Shift, long x, long y)
	{
		static BYTE parms[] = VTS_I4 VTS_I4 VTS_I4 VTS_I4;
		InvokeHelper(0x5fc, DISPATCH_METHOD, VT_EMPTY, NULL, parms, Button, Shift, x, y);
	}
	void MouseMove(long Button, long Shift, long x, long y)
	{
		static BYTE parms[] = VTS_I4 VTS_I4 VTS_I4 VTS_I4;
		InvokeHelper(0x5fd, DISPATCH_METHOD, VT_EMPTY, NULL, parms, Button, Shift, x, y);
	}
	void BeforeRightClick(BOOL * Cancel)
	{
		static BYTE parms[] = VTS_PBOOL;
		InvokeHelper(0x5fe, DISPATCH_METHOD, VT_EMPTY, NULL, parms, Cancel);
	}
	void DragPlot()
	{
		InvokeHelper(0x5ff, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	void DragOver()
	{
		InvokeHelper(0x600, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	void BeforeDoubleClick(long ElementID, long Arg1, long Arg2, BOOL * Cancel)
	{
		static BYTE parms[] = VTS_I4 VTS_I4 VTS_I4 VTS_PBOOL;
		InvokeHelper(0x601, DISPATCH_METHOD, VT_EMPTY, NULL, parms, ElementID, Arg1, Arg2, Cancel);
	}
	void Select(long ElementID, long Arg1, long Arg2)
	{
		static BYTE parms[] = VTS_I4 VTS_I4 VTS_I4;
		InvokeHelper(0xeb, DISPATCH_METHOD, VT_EMPTY, NULL, parms, ElementID, Arg1, Arg2);
	}
	void SeriesChange(long SeriesIndex, long PointIndex)
	{
		static BYTE parms[] = VTS_I4 VTS_I4;
		InvokeHelper(0x602, DISPATCH_METHOD, VT_EMPTY, NULL, parms, SeriesIndex, PointIndex);
	}
	void Calculate()
	{
		InvokeHelper(0x117, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}

	// ChartEvents properties
public:

};
