// VS2002MFCView.cpp : implementation of the CVS2002MFCView class
//

#include "stdafx.h"
#include "VS2002MFC.h"

#include "VS2002MFCDoc.h"
#include "VS2002MFCView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CVS2002MFCView

IMPLEMENT_DYNCREATE(CVS2002MFCView, CView)

BEGIN_MESSAGE_MAP(CVS2002MFCView, CView)
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, CView::OnFilePrintPreview)
END_MESSAGE_MAP()

// CVS2002MFCView construction/destruction

CVS2002MFCView::CVS2002MFCView()
{
	// TODO: add construction code here

}

CVS2002MFCView::~CVS2002MFCView()
{
}

BOOL CVS2002MFCView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

// CVS2002MFCView drawing

void CVS2002MFCView::OnDraw(CDC* /*pDC*/)
{
	CVS2002MFCDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);

	// TODO: add draw code for native data here
}


// CVS2002MFCView printing

BOOL CVS2002MFCView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CVS2002MFCView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CVS2002MFCView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}


// CVS2002MFCView diagnostics

#ifdef _DEBUG
void CVS2002MFCView::AssertValid() const
{
	CView::AssertValid();
}

void CVS2002MFCView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CVS2002MFCDoc* CVS2002MFCView::GetDocument() const // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CVS2002MFCDoc)));
	return (CVS2002MFCDoc*)m_pDocument;
}
#endif //_DEBUG


// CVS2002MFCView message handlers
