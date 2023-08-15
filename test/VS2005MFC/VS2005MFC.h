// VS2005MFC.h : main header file for the VS2005MFC application
//
#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"       // main symbols


// CVS2005MFCApp:
// See VS2005MFC.cpp for the implementation of this class
//

class CVS2005MFCApp : public CWinApp
{
public:
	CVS2005MFCApp();


// Overrides
public:
	virtual BOOL InitInstance();

// Implementation
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CVS2005MFCApp theApp;