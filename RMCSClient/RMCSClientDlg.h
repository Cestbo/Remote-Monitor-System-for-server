
// RMCSClientDlg.h : 头文件
//

#pragma once
#include "afxwin.h"


// CRMCSClientDlg 对话框
class CRMCSClientDlg : public CDialogEx
{
// 构造
public:
	CRMCSClientDlg(CWnd* pParent = NULL);	// 标准构造函数

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_RMCSCLIENT_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持


// 实现
protected:
	HICON m_hIcon;
	CFont m_Font;
	bool connect;
	// 生成的消息映射函数
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	// 控制静态文本框
	CStatic m_static;
	afx_msg void OnBnClickedBncontrol();
	// 控制按纽
	CButton m_bncontrol;
};
