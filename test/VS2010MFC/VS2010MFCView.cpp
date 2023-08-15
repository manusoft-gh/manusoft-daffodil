
// VS2010MFCView.cpp : implementation of the CVS2010MFCView class
//

#include "stdafx.h"
// SHARED_HANDLERS can be defined in an ATL project implementing preview, thumbnail
// and search filter handlers and allows sharing of document code with that project.
#ifndef SHARED_HANDLERS
#include "VS2010MFC.h"
#endif

#include "VS2010MFCDoc.h"
#include "VS2010MFCView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CVS2010MFCView

IMPLEMENT_DYNCREATE(CVS2010MFCView, CView)

BEGIN_MESSAGE_MAP(CVS2010MFCView, CView)
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CVS2010MFCView::OnFilePrintPreview)
	ON_WM_CONTEXTMENU()
	ON_WM_RBUTTONUP()
END_MESSAGE_MAP()

// CVS2010MFCView construction/destruction

CVS2010MFCView::CVS2010MFCView()
{
	// TODO: add construction code here

}

CVS2010MFCView::~CVS2010MFCView()
{
}

BOOL CVS2010MFCView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

// CVS2010MFCView drawing

void CVS2010MFCView::OnDraw(CDC* /*pDC*/)
{
	CVS2010MFCDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: add draw code for native data here
}


// CVS2010MFCView printing


void CVS2010MFCView::OnFilePrintPreview()
{
#ifndef SHARED_HANDLERS
	AFXPrintPreview(this);
#endif
}

BOOL CVS2010MFCView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CVS2010MFCView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CVS2010MFCView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}

void CVS2010MFCView::OnRButtonUp(UINT /* nFlags */, CPoint point)
{
	ClientToScreen(&point);
	OnContextMenu(this, point);
}

void CVS2010MFCView::OnContextMenu(CWnd* /* pWnd */, CPoint point)
{
#ifndef SHARED_HANDLERS
	theApp.GetContextMenuManager()->ShowPopupMenu(IDR_POPUP_EDIT, point.x, point.y, this, TRUE);
#endif
}


// CVS2010MFCView diagnostics

#ifdef _DEBUG
void CVS2010MFCView::AssertValid() const
{
	CView::AssertValid();
}

void CVS2010MFCView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CVS2010MFCDoc* CVS2010MFCView::GetDocument() const // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CVS2010MFCDoc)));
	return (CVS2010MFCDoc*)m_pDocument;
}
#endif //_DEBUG


// CVS2010MFCView message handlers
