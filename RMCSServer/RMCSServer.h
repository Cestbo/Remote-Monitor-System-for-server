
// RMCSServer.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CRMCSServerApp: 
// �йش����ʵ�֣������ RMCSServer.cpp
//

class CRMCSServerApp : public CWinApp
{
public:
	CRMCSServerApp();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CRMCSServerApp theApp;