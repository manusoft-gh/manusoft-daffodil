// VS2003MFCView.h : interface of the CVS2003MFCView class
//


#pragma once


class CVS2003MFCView : public CView
{
protected: // create from serialization only
	CVS2003MFCView();
	DECLARE_DYNCREATE(CVS2003MFCView)

// Attributes
public:
	CVS2003MFCDoc* GetDocument() const;

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
	virtual ~CVS2003MFCView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in VS2003MFCView.cpp
inline CVS2003MFCDoc* CVS2003MFCView::GetDocument() const
   { return reinterpret_cast<CVS2003MFCDoc*>(m_pDocument); }
#endif

