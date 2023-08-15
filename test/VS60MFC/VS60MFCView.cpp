// VS60MFCView.cpp : implementation of the CVS60MFCView class
//

#include "stdafx.h"
#include "VS60MFC.h"

#include "VS60MFCDoc.h"
#include "VS60MFCView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CVS60MFCView

IMPLEMENT_DYNCREATE(CVS60MFCView, CView)

BEGIN_MESSAGE_MAP(CVS60MFCView, CView)
	//{{AFX_MSG_MAP(CVS60MFCView)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, CView::OnFilePrintPreview)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CVS60MFCView construction/destruction

CVS60MFCView::CVS60MFCView()
{
	// TODO: add construction code here

}

CVS60MFCView::~CVS60MFCView()
{
}

BOOL CVS60MFCView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CVS60MFCView drawing

void CVS60MFCView::OnDraw(CDC* pDC)
{
	CVS60MFCDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	// TODO: add draw code for native data here
}

/////////////////////////////////////////////////////////////////////////////
// CVS60MFCView printing

BOOL CVS60MFCView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CVS60MFCView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CVS60MFCView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}

/////////////////////////////////////////////////////////////////////////////
// CVS60MFCView diagnostics

#ifdef _DEBUG
void CVS60MFCView::AssertValid() const
{
	CView::AssertValid();
}

void CVS60MFCView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CVS60MFCDoc* CVS60MFCView::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CVS60MFCDoc)));
	return (CVS60MFCDoc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CVS60MFCView message handlers
