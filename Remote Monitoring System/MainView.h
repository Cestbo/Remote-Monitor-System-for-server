#pragma once


// CMainView 对话框

class CMainView : public CDialogEx
{
	DECLARE_DYNAMIC(CMainView)

public:
	CMainView(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~CMainView();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MAINDLG };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton2();
	afx_msg void OnBnClickedButton4();
};
