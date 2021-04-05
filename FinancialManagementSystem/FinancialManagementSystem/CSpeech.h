// Machine generated IDispatch wrapper class(es) created with Add Class from Typelib Wizard

#include <afxdisp.h>
// CSpeech wrapper class

class CSpeech : public COleDispatchDriver
{
public:
	CSpeech(){} // Calls COleDispatchDriver default constructor
	CSpeech(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CSpeech(const CSpeech& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

	// Attributes
public:

	// Operations
public:


	// Speech methods
public:
	void Speak(LPCTSTR Text, VARIANT& SpeakAsync, VARIANT& SpeakXML, VARIANT& Purge)
	{
		static BYTE parms[] = VTS_BSTR VTS_VARIANT VTS_VARIANT VTS_VARIANT;
		InvokeHelper(0x7e1, DISPATCH_METHOD, VT_EMPTY, NULL, parms, Text, &SpeakAsync, &SpeakXML, &Purge);
	}
	long get_Direction()
	{
		long result;
		InvokeHelper(0xa8, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_Direction(long newValue)
	{
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0xa8, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	BOOL get_SpeakCellOnEnter()
	{
		BOOL result;
		InvokeHelper(0x8bb, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_SpeakCellOnEnter(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL;
		InvokeHelper(0x8bb, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}

	// Speech properties
public:

};
