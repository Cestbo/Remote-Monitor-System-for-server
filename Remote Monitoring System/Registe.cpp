// Registe.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "Remote Monitoring System.h"
#include "Registe.h"
#include "afxdialogex.h"


// CRegiste �Ի���

IMPLEMENT_DYNAMIC(CRegiste, CDialogEx)

CRegiste::CRegiste(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_REGDLG, pParent)
	, m_username(_T(""))
{

}

CRegiste::~CRegiste()
{
}

void CRegiste::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDITNAME, m_username);
	DDX_Control(pDX, IDC_EDITPSW, m_userpws);
	DDX_Control(pDX, IDC_EDITSYREPWS, m_surepws);
}


BEGIN_MESSAGE_MAP(CRegiste, CDialogEx)
	ON_BN_CLICKED(IDC_BNSURE, &CRegiste::OnBnClickedBnsure)
END_MESSAGE_MAP()


// CRegiste ��Ϣ�������


void CRegiste::OnBnClickedBnsure()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	//һЩ�ж�


	MessageBox(_T("ע��ɹ�"),_T("��ʾ"), MB_OK);
}
