#pragma once
#include"stdafx.h"
#include<iostream>

//¹Ø»úÃüÁî
void ShutDown()
{
	system("shutdown -s -t 0");
}

//ÖØÆô
void ReStart()
{
	system("shutdown -r -t 0");
}

//ËøÆÁÃüÁî
void LockScreen()
{
	system("rundll32.exe user32.dll,LockWorkStation");
}


