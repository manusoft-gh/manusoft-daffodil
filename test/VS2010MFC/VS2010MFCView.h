
// VS2010MFCView.h : interface of the CVS2010MFCView class
//

#pragma once


class CVS2010MFCView : public CView
{
protected: // create from serialization only
	CVS2010MFCView();
	DECLARE_DYNCREATE(CVS2010MFCView)

// Attributes
public:
	CVS2010MFCDoc* GetDocument() const;

// Operations
public:

// Overrides
public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// Implementation
public:
	virtual ~CVS2010MFCView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	afx_msg void OnFilePrintPreview();
	afx_msg void OnRButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnContextMenu(CWnd* pWnd, CPoint point);
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in VS2010MFCView.cpp
inline CVS2010MFCDoc* CVS2010MFCView::GetDocument() const
   { return reinterpret_cast<CVS2010MFCDoc*>(m_pDocument); }
#endif

