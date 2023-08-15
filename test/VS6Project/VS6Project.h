// VS6Project.h : main header file for the VS6PROJECT application
//

#if !defined(AFX_VS6PROJECT_H__334C4D7F_76CF_41AB_8E06_DACAF0B732BE__INCLUDED_)
#define AFX_VS6PROJECT_H__334C4D7F_76CF_41AB_8E06_DACAF0B732BE__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CVS6ProjectApp:
// See VS6Project.cpp for the implementation of this class
//

class CVS6ProjectApp : public CWinApp
{
public:
	CVS6ProjectApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CVS6ProjectApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation
	//{{AFX_MSG(CVS6ProjectApp)
	afx_msg void OnAppAbout();
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_VS6PROJECT_H__334C4D7F_76CF_41AB_8E06_DACAF0B732BE__INCLUDED_)
