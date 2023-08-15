// VS2003MFC.h : main header file for the VS2003MFC application
//
#pragma once

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols


// CVS2003MFCApp:
// See VS2003MFC.cpp for the implementation of this class
//

class CVS2003MFCApp : public CWinApp
{
public:
	CVS2003MFCApp();


// Overrides
public:
	virtual BOOL InitInstance();

// Implementation
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CVS2003MFCApp theApp;