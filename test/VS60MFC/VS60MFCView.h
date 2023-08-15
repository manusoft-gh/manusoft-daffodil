// VS60MFCView.h : interface of the CVS60MFCView class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_VS60MFCVIEW_H__236EF0FA_6C0F_43ED_8BCB_AE3CE8E48B4C__INCLUDED_)
#define AFX_VS60MFCVIEW_H__236EF0FA_6C0F_43ED_8BCB_AE3CE8E48B4C__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CVS60MFCView : public CView
{
protected: // create from serialization only
	CVS60MFCView();
	DECLARE_DYNCREATE(CVS60MFCView)

// Attributes
public:
	CVS60MFCDoc* GetDocument();

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CVS60MFCView)
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
	virtual ~CVS60MFCView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CVS60MFCView)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in VS60MFCView.cpp
inline CVS60MFCDoc* CVS60MFCView::GetDocument()
   { return (CVS60MFCDoc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_VS60MFCVIEW_H__236EF0FA_6C0F_43ED_8BCB_AE3CE8E48B4C__INCLUDED_)
