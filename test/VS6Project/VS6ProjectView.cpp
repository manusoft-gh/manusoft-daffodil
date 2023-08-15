// VS6ProjectView.cpp : implementation of the CVS6ProjectView class
//

#include "stdafx.h"
#include "VS6Project.h"

#include "VS6ProjectDoc.h"
#include "VS6ProjectView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CVS6ProjectView

IMPLEMENT_DYNCREATE(CVS6ProjectView, CView)

BEGIN_MESSAGE_MAP(CVS6ProjectView, CView)
	//{{AFX_MSG_MAP(CVS6ProjectView)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, CView::OnFilePrintPreview)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CVS6ProjectView construction/destruction

CVS6ProjectView::CVS6ProjectView()
{
	// TODO: add construction code here

}

CVS6ProjectView::~CVS6ProjectView()
{
}

BOOL CVS6ProjectView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CVS6ProjectView drawing

void CVS6ProjectView::OnDraw(CDC* pDC)
{
	CVS6ProjectDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	// TODO: add draw code for native data here
}

/////////////////////////////////////////////////////////////////////////////
// CVS6ProjectView printing

BOOL CVS6ProjectView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CVS6ProjectView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CVS6ProjectView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}

/////////////////////////////////////////////////////////////////////////////
// CVS6ProjectView diagnostics

#ifdef _DEBUG
void CVS6ProjectView::AssertValid() const
{
	CView::AssertValid();
}

void CVS6ProjectView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CVS6ProjectDoc* CVS6ProjectView::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CVS6ProjectDoc)));
	return (CVS6ProjectDoc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CVS6ProjectView message handlers
