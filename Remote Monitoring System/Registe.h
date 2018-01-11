#pragma once
#include "afxwin.h"


// CRegiste 对话框

class CRegiste : public CDialogEx
{
	DECLARE_DYNAMIC(CRegiste)

public:
	CRegiste(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~CRegiste();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_REGDLG };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	CString m_username;
	CEdit m_userpws;
	CEdit m_surepws;
	afx_msg void OnBnClickedBnsure();
};
