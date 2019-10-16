///////////////////////////////////////////////////////////////////////////////
// CPPVP1Driver.h

#ifndef __CPPVP1DRIVER_H__
#define __CPPVP1DRIVER_H__

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "TcBase.h"

#define CPPVP1DRV_NAME        "CPPVP1"
#define CPPVP1DRV_Major       1
#define CPPVP1DRV_Minor       0

#define DEVICE_CLASS CCPPVP1Driver

#include "ObjDriver.h"

class CCPPVP1Driver : public CObjDriver
{
public:
	virtual IOSTATUS	OnLoad();
	virtual VOID		OnUnLoad();

	//////////////////////////////////////////////////////
	// VxD-Services exported by this driver
	static unsigned long	_cdecl CPPVP1DRV_GetVersion();
	//////////////////////////////////////////////////////
	
};

Begin_VxD_Service_Table(CPPVP1DRV)
	VxD_Service( CPPVP1DRV_GetVersion )
End_VxD_Service_Table


#endif // ifndef __CPPVP1DRIVER_H__