#pragma once
#include"stdafx.h"
#include<iostream>

//�ػ�����
void ShutDown()
{
	system("shutdown -s -t 0");
}

//����
void ReStart()
{
	system("shutdown -r -t 0");
}

//��������
void LockScreen()
{
	system("rundll32.exe user32.dll,LockWorkStation");
}


