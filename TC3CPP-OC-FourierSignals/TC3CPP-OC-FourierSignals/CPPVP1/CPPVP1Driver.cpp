///////////////////////////////////////////////////////////////////////////////
// CPPVP1Driver.cpp
#include "TcPch.h"
#pragma hdrstop

#include "CPPVP1Driver.h"
#include "CPPVP1ClassFactory.h"

DECLARE_GENERIC_DEVICE(CPPVP1DRV)

IOSTATUS CCPPVP1Driver::OnLoad( )
{
	TRACE(_T("CObjClassFactory::OnLoad()\n") );
	m_pObjClassFactory = new CCPPVP1ClassFactory();

	return IOSTATUS_SUCCESS;
}

VOID CCPPVP1Driver::OnUnLoad( )
{
	delete m_pObjClassFactory;
}

unsigned long _cdecl CCPPVP1Driver::CPPVP1DRV_GetVersion( )
{
	return( (CPPVP1DRV_Major << 8) | CPPVP1DRV_Minor );
}

