// VS2002MFCDoc.cpp : implementation of the CVS2002MFCDoc class
//

#include "stdafx.h"
#include "VS2002MFC.h"

#include "VS2002MFCDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CVS2002MFCDoc

IMPLEMENT_DYNCREATE(CVS2002MFCDoc, CDocument)

BEGIN_MESSAGE_MAP(CVS2002MFCDoc, CDocument)
END_MESSAGE_MAP()


// CVS2002MFCDoc construction/destruction

CVS2002MFCDoc::CVS2002MFCDoc()
{
	// TODO: add one-time construction code here

}

CVS2002MFCDoc::~CVS2002MFCDoc()
{
}

BOOL CVS2002MFCDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}




// CVS2002MFCDoc serialization

void CVS2002MFCDoc::Serialize(CArchive& ar)
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


// CVS2002MFCDoc diagnostics

#ifdef _DEBUG
void CVS2002MFCDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CVS2002MFCDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG


// CVS2002MFCDoc commands
