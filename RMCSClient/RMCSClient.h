
// RMCSClient.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CRMCSClientApp: 
// �йش����ʵ�֣������ RMCSClient.cpp
//

class CRMCSClientApp : public CWinApp
{
public:
	CRMCSClientApp();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CRMCSClientApp theApp;