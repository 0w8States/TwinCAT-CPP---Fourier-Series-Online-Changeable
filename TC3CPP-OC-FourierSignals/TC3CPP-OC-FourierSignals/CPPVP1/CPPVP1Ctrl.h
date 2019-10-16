///////////////////////////////////////////////////////////////////////////////
// CPPVP1Ctrl.h

#ifndef __CPPVP1CTRL_H__
#define __CPPVP1CTRL_H__

#include <atlbase.h>
#include <atlcom.h>


#include "resource.h"       // main symbols
#include "CPPVP1W32.h"
#include "TcBase.h"
#include "CPPVP1ClassFactory.h"
#include "TcOCFCtrlImpl.h"

class CCPPVP1Ctrl 
	: public CComObjectRootEx<CComMultiThreadModel>
	, public CComCoClass<CCPPVP1Ctrl, &CLSID_CPPVP1Ctrl>
	, public ICPPVP1Ctrl
	, public ITcOCFCtrlImpl<CCPPVP1Ctrl, CCPPVP1ClassFactory>
{
public:
	CCPPVP1Ctrl();
	virtual ~CCPPVP1Ctrl();

DECLARE_REGISTRY_RESOURCEID(IDR_CPPVP1CTRL)
DECLARE_NOT_AGGREGATABLE(CCPPVP1Ctrl)

DECLARE_PROTECT_FINAL_CONSTRUCT()

BEGIN_COM_MAP(CCPPVP1Ctrl)
	COM_INTERFACE_ENTRY(ICPPVP1Ctrl)
	COM_INTERFACE_ENTRY(ITcCtrl)
	COM_INTERFACE_ENTRY(ITcCtrl2)
END_COM_MAP()

};

#endif // #ifndef __CPPVP1CTRL_H__
