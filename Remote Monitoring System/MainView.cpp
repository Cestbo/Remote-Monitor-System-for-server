// MainView.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "Remote Monitoring System.h"
#include "MainView.h"
#include "afxdialogex.h"


// CMainView �Ի���

IMPLEMENT_DYNAMIC(CMainView, CDialogEx)

CMainView::CMainView(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_MAINDLG, pParent)
{

}

CMainView::~CMainView()
{
}

void CMainView::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CMainView, CDialogEx)
	
END_MESSAGE_MAP()


// CMainView ��Ϣ�������




