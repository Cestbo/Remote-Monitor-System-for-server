#pragma once
#include "afxwin.h"


// CRegiste �Ի���

class CRegiste : public CDialogEx
{
	DECLARE_DYNAMIC(CRegiste)

public:
	CRegiste(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~CRegiste();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_REGDLG };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	CString m_username;
	CEdit m_userpws;
	CEdit m_surepws;
	afx_msg void OnBnClickedBnsure();
};
