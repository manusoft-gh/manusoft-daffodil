// VS6ProjectDoc.cpp : implementation of the CVS6ProjectDoc class
//

#include "stdafx.h"
#include "VS6Project.h"

#include "VS6ProjectDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CVS6ProjectDoc

IMPLEMENT_DYNCREATE(CVS6ProjectDoc, CDocument)

BEGIN_MESSAGE_MAP(CVS6ProjectDoc, CDocument)
	//{{AFX_MSG_MAP(CVS6ProjectDoc)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CVS6ProjectDoc construction/destruction

CVS6ProjectDoc::CVS6ProjectDoc()
{
	// TODO: add one-time construction code here

}

CVS6ProjectDoc::~CVS6ProjectDoc()
{
}

BOOL CVS6ProjectDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CVS6ProjectDoc serialization

void CVS6ProjectDoc::Serialize(CArchive& ar)
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
// CVS6ProjectDoc diagnostics

#ifdef _DEBUG
void CVS6ProjectDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CVS6ProjectDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CVS6ProjectDoc commands
