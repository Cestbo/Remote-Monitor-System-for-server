#pragma once


// CMainView �Ի���

class CMainView : public CDialogEx
{
	DECLARE_DYNAMIC(CMainView)

public:
	CMainView(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~CMainView();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MAINDLG };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton2();
	afx_msg void OnBnClickedButton4();
};
