// VS60MFC.h : main header file for the VS60MFC application
//

#if !defined(AFX_VS60MFC_H__B066F420_E329_45E0_BFFE_B2136377B728__INCLUDED_)
#define AFX_VS60MFC_H__B066F420_E329_45E0_BFFE_B2136377B728__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CVS60MFCApp:
// See VS60MFC.cpp for the implementation of this class
//

class CVS60MFCApp : public CWinApp
{
public:
	CVS60MFCApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CVS60MFCApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation
	//{{AFX_MSG(CVS60MFCApp)
	afx_msg void OnAppAbout();
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_VS60MFC_H__B066F420_E329_45E0_BFFE_B2136377B728__INCLUDED_)
