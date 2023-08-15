// VS2002MFC.h : main header file for the VS2002MFC application
//
#pragma once

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols


// CVS2002MFCApp:
// See VS2002MFC.cpp for the implementation of this class
//

class CVS2002MFCApp : public CWinApp
{
public:
	CVS2002MFCApp();


// Overrides
public:
	virtual BOOL InitInstance();

// Implementation
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CVS2002MFCApp theApp;