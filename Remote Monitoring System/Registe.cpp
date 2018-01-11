// Registe.cpp : 实现文件
//

#include "stdafx.h"
#include "Remote Monitoring System.h"
#include "Registe.h"
#include "afxdialogex.h"


// CRegiste 对话框

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


// CRegiste 消息处理程序


void CRegiste::OnBnClickedBnsure()
{
	// TODO: 在此添加控件通知处理程序代码
	//一些判断


	MessageBox(_T("注册成功"),_T("提示"), MB_OK);
}
