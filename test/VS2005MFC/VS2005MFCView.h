// VS2005MFCView.h : interface of the CVS2005MFCView class
//


#pragma once


class CVS2005MFCView : public CView
{
protected: // create from serialization only
	CVS2005MFCView();
	DECLARE_DYNCREATE(CVS2005MFCView)

// Attributes
public:
	CVS2005MFCDoc* GetDocument() const;

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
	virtual ~CVS2005MFCView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in VS2005MFCView.cpp
inline CVS2005MFCDoc* CVS2005MFCView::GetDocument() const
   { return reinterpret_cast<CVS2005MFCDoc*>(m_pDocument); }
#endif

