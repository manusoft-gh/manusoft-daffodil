// VS6ProjectView.h : interface of the CVS6ProjectView class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_VS6PROJECTVIEW_H__26100EAB_806E_4290_B6EB_C90FB6463CC6__INCLUDED_)
#define AFX_VS6PROJECTVIEW_H__26100EAB_806E_4290_B6EB_C90FB6463CC6__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CVS6ProjectView : public CView
{
protected: // create from serialization only
	CVS6ProjectView();
	DECLARE_DYNCREATE(CVS6ProjectView)

// Attributes
public:
	CVS6ProjectDoc* GetDocument();

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CVS6ProjectView)
	public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CVS6ProjectView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CVS6ProjectView)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in VS6ProjectView.cpp
inline CVS6ProjectDoc* CVS6ProjectView::GetDocument()
   { return (CVS6ProjectDoc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_VS6PROJECTVIEW_H__26100EAB_806E_4290_B6EB_C90FB6463CC6__INCLUDED_)
