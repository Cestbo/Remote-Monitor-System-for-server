
// Remote Monitoring System.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CRemoteMonitoringSystemApp: 
// �йش����ʵ�֣������ Remote Monitoring System.cpp
//

class CRemoteMonitoringSystemApp : public CWinApp
{
public:
	CRemoteMonitoringSystemApp();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CRemoteMonitoringSystemApp theApp;