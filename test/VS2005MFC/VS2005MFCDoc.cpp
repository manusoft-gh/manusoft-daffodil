// VS2005MFCDoc.cpp : implementation of the CVS2005MFCDoc class
//

#include "stdafx.h"
#include "VS2005MFC.h"

#include "VS2005MFCDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CVS2005MFCDoc

IMPLEMENT_DYNCREATE(CVS2005MFCDoc, CDocument)

BEGIN_MESSAGE_MAP(CVS2005MFCDoc, CDocument)
END_MESSAGE_MAP()


// CVS2005MFCDoc construction/destruction

CVS2005MFCDoc::CVS2005MFCDoc()
{
	// TODO: add one-time construction code here

}

CVS2005MFCDoc::~CVS2005MFCDoc()
{
}

BOOL CVS2005MFCDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}




// CVS2005MFCDoc serialization

void CVS2005MFCDoc::Serialize(CArchive& ar)
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


// CVS2005MFCDoc diagnostics

#ifdef _DEBUG
void CVS2005MFCDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CVS2005MFCDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG


// CVS2005MFCDoc commands
