// VS2003MFCDoc.h : interface of the CVS2003MFCDoc class
//


#pragma once

class CVS2003MFCDoc : public CDocument
{
protected: // create from serialization only
	CVS2003MFCDoc();
	DECLARE_DYNCREATE(CVS2003MFCDoc)

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
	virtual ~CVS2003MFCDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	DECLARE_MESSAGE_MAP()
};


