
// RMCSClientDlg.h : ͷ�ļ�
//

#pragma once
#include "afxwin.h"


// CRMCSClientDlg �Ի���
class CRMCSClientDlg : public CDialogEx
{
// ����
public:
	CRMCSClientDlg(CWnd* pParent = NULL);	// ��׼���캯��

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_RMCSCLIENT_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV ֧��


// ʵ��
protected:
	HICON m_hIcon;
	CFont m_Font;
	bool connect;
	// ���ɵ���Ϣӳ�亯��
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	// ���ƾ�̬�ı���
	CStatic m_static;
	afx_msg void OnBnClickedBncontrol();
	// ���ư�Ŧ
	CButton m_bncontrol;
};
