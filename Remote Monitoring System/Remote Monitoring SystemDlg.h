
// Remote Monitoring SystemDlg.h : ͷ�ļ�
//

#pragma once


// CRemoteMonitoringSystemDlg �Ի���
class CRemoteMonitoringSystemDlg : public CDialogEx
{
// ����
public:
	CRemoteMonitoringSystemDlg(CWnd* pParent = NULL);	// ��׼���캯��

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_REMOTEMONITORINGSYSTEM_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV ֧��


// ʵ��
protected:
	HICON m_hIcon;

	// ���ɵ���Ϣӳ�亯��
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedBnreg();
	CString m_username;
	CString m_userpws;
	afx_msg void OnBnClickedBnlogin();
};
