// VS2005MFCView.cpp : implementation of the CVS2005MFCView class
//

#include "stdafx.h"
#include "VS2005MFC.h"

#include "VS2005MFCDoc.h"
#include "VS2005MFCView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CVS2005MFCView

IMPLEMENT_DYNCREATE(CVS2005MFCView, CView)

BEGIN_MESSAGE_MAP(CVS2005MFCView, CView)
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
END_MESSAGE_MAP()

// CVS2005MFCView construction/destruction

CVS2005MFCView::CVS2005MFCView()
{
	// TODO: add construction code here

}

CVS2005MFCView::~CVS2005MFCView()
{
}

BOOL CVS2005MFCView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

// CVS2005MFCView drawing

void CVS2005MFCView::OnDraw(CDC* /*pDC*/)
{
	CVS2005MFCDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: add draw code for native data here
}


// CVS2005MFCView printing

BOOL CVS2005MFCView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CVS2005MFCView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CVS2005MFCView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}


// CVS2005MFCView diagnostics

#ifdef _DEBUG
void CVS2005MFCView::AssertValid() const
{
	CView::AssertValid();
}

void CVS2005MFCView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CVS2005MFCDoc* CVS2005MFCView::GetDocument() const // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CVS2005MFCDoc)));
	return (CVS2005MFCDoc*)m_pDocument;
}
#endif //_DEBUG


// CVS2005MFCView message handlers
