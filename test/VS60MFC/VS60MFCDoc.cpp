// VS60MFCDoc.cpp : implementation of the CVS60MFCDoc class
//

#include "stdafx.h"
#include "VS60MFC.h"

#include "VS60MFCDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CVS60MFCDoc

IMPLEMENT_DYNCREATE(CVS60MFCDoc, CDocument)

BEGIN_MESSAGE_MAP(CVS60MFCDoc, CDocument)
	//{{AFX_MSG_MAP(CVS60MFCDoc)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CVS60MFCDoc construction/destruction

CVS60MFCDoc::CVS60MFCDoc()
{
	// TODO: add one-time construction code here

}

CVS60MFCDoc::~CVS60MFCDoc()
{
}

BOOL CVS60MFCDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CVS60MFCDoc serialization

void CVS60MFCDoc::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
		// TODO: add storing code here
	}
	else
	{
		// TODO: add loading code here
	}
}

/////////////////////////////////////////////////////////////////////////////
// CVS60MFCDoc diagnostics

#ifdef _DEBUG
void CVS60MFCDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CVS60MFCDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CVS60MFCDoc commands
