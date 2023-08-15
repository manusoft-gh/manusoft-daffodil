// VS2002MFCView.h : interface of the CVS2002MFCView class
//


#pragma once


class CVS2002MFCView : public CView
{
protected: // create from serialization only
	CVS2002MFCView();
	DECLARE_DYNCREATE(CVS2002MFCView)

// Attributes
public:
	CVS2002MFCDoc* GetDocument() const;

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
	virtual ~CVS2002MFCView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in VS2002MFCView.cpp
inline CVS2002MFCDoc* CVS2002MFCView::GetDocument() const
   { return reinterpret_cast<CVS2002MFCDoc*>(m_pDocument); }
#endif

