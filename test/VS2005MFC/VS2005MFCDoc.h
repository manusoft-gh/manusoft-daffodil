// VS2005MFCDoc.h : interface of the CVS2005MFCDoc class
//


#pragma once


class CVS2005MFCDoc : public CDocument
{
protected: // create from serialization only
	CVS2005MFCDoc();
	DECLARE_DYNCREATE(CVS2005MFCDoc)

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
	virtual ~CVS2005MFCDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	DECLARE_MESSAGE_MAP()
};


