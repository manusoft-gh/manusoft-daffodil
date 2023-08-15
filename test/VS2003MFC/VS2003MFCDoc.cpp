// VS2003MFCDoc.cpp : implementation of the CVS2003MFCDoc class
//

#include "stdafx.h"
#include "VS2003MFC.h"

#include "VS2003MFCDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CVS2003MFCDoc

IMPLEMENT_DYNCREATE(CVS2003MFCDoc, CDocument)

BEGIN_MESSAGE_MAP(CVS2003MFCDoc, CDocument)
END_MESSAGE_MAP()


// CVS2003MFCDoc construction/destruction

CVS2003MFCDoc::CVS2003MFCDoc()
{
	// TODO: add one-time construction code here

}

CVS2003MFCDoc::~CVS2003MFCDoc()
{
}

BOOL CVS2003MFCDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}




// CVS2003MFCDoc serialization

void CVS2003MFCDoc::Serialize(CArchive& ar)
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


// CVS2003MFCDoc diagnostics

#ifdef _DEBUG
void CVS2003MFCDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CVS2003MFCDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG


// CVS2003MFCDoc commands
