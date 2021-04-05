// Machine generated IDispatch wrapper class(es) created with Add Class from Typelib Wizard

#include <afxdisp.h>
// COLEObjectEvents wrapper class

class COLEObjectEvents : public COleDispatchDriver
{
public:
	COLEObjectEvents(){} // Calls COleDispatchDriver default constructor
	COLEObjectEvents(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	COLEObjectEvents(const COLEObjectEvents& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

	// Attributes
public:

	// Operations
public:


	// OLEObjectEvents methods
public:
	void GotFocus()
	{
		InvokeHelper(0x605, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	void LostFocus()
	{
		InvokeHelper(0x606, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}

	// OLEObjectEvents properties
public:

};
