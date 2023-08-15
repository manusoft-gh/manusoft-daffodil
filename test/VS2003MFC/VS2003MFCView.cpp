// VS2003MFCView.cpp : implementation of the CVS2003MFCView class
//

#include "stdafx.h"
#include "VS2003MFC.h"

#include "VS2003MFCDoc.h"
#include "VS2003MFCView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CVS2003MFCView

IMPLEMENT_DYNCREATE(CVS2003MFCView, CView)

BEGIN_MESSAGE_MAP(CVS2003MFCView, CView)
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, CView::OnFilePrintPreview)
END_MESSAGE_MAP()

// CVS2003MFCView construction/destruction

CVS2003MFCView::CVS2003MFCView()
{
	// TODO: add construction code here

}

CVS2003MFCView::~CVS2003MFCView()
{
}

BOOL CVS2003MFCView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

// CVS2003MFCView drawing

void CVS2003MFCView::OnDraw(CDC* /*pDC*/)
{
	CVS2003MFCDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: add draw code for native data here
}


// CVS2003MFCView printing

BOOL CVS2003MFCView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CVS2003MFCView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CVS2003MFCView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}


// CVS2003MFCView diagnostics

#ifdef _DEBUG
void CVS2003MFCView::AssertValid() const
{
	CView::AssertValid();
}

void CVS2003MFCView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CVS2003MFCDoc* CVS2003MFCView::GetDocument() const // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CVS2003MFCDoc)));
	return (CVS2003MFCDoc*)m_pDocument;
}
#endif //_DEBUG


// CVS2003MFCView message handlers
