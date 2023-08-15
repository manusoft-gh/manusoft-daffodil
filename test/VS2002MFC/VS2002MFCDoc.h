// VS2002MFCDoc.h : interface of the CVS2002MFCDoc class
//


#pragma once

class CVS2002MFCDoc : public CDocument
{
protected: // create from serialization only
	CVS2002MFCDoc();
	DECLARE_DYNCREATE(CVS2002MFCDoc)

// Attributes
public:

// Operations
public:

// Overrides
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);

// Implementation
public:
	virtual ~CVS2002MFCDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	DECLARE_MESSAGE_MAP()
};


