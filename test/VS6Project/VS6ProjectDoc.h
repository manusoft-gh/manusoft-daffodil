// VS6ProjectDoc.h : interface of the CVS6ProjectDoc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_VS6PROJECTDOC_H__D128ACBB_0B3A_4A48_AF5B_E1463C970053__INCLUDED_)
#define AFX_VS6PROJECTDOC_H__D128ACBB_0B3A_4A48_AF5B_E1463C970053__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CVS6ProjectDoc : public CDocument
{
protected: // create from serialization only
	CVS6ProjectDoc();
	DECLARE_DYNCREATE(CVS6ProjectDoc)

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CVS6ProjectDoc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CVS6ProjectDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CVS6ProjectDoc)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_VS6PROJECTDOC_H__D128ACBB_0B3A_4A48_AF5B_E1463C970053__INCLUDED_)
