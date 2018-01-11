#include "stdafx.h"
#include "User.h"


CUser::CUser()
{
}


CUser::~CUser()
{
}


void CUser::set_username(char* username)
{
	username = username;
}


void CUser::set_userpws(char* userpws)
{
	userpws = userpws;
}


char* CUser::get_username()
{
	return username;
}


char* CUser::get_userpws()
{
	return userpws;
}
