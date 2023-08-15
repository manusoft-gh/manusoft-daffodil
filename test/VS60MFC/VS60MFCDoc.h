// VS60MFCDoc.h : interface of the CVS60MFCDoc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_VS60MFCDOC_H__DD097608_1384_4EA5_A45B_3AEC2DC68ED4__INCLUDED_)
#define AFX_VS60MFCDOC_H__DD097608_1384_4EA5_A45B_3AEC2DC68ED4__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CVS60MFCDoc : public CDocument
{
protected: // create from serialization only
	CVS60MFCDoc();
	DECLARE_DYNCREATE(CVS60MFCDoc)

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CVS60MFCDoc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CVS60MFCDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CVS60MFCDoc)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_VS60MFCDOC_H__DD097608_1384_4EA5_A45B_3AEC2DC68ED4__INCLUDED_)
