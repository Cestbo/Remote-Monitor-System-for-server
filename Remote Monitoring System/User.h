#pragma once
class CUser
{
private:
	char username[15];
	char userpws[15];
public:
	CUser();
	~CUser();
	
	void set_username(char* username);
	void set_userpws(char* userpws);
	char* get_username();
	char* get_userpws();
};

