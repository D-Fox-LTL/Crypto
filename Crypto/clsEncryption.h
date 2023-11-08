#pragma once
#include <string.h>
#include <stdio.h>
//file name	- char array


class clsEncryption
{
public:
	clsEncryption();
	bool OpenFile(const char* p_chNameIN, const char* p_chNameOUT);
	bool CloseFile();
	bool CopyFile();

private:
	char *p_mchFileNameIN;	//File name
	FILE* p_mFileIN;
	char* p_mchFileNameOUT;	//File name
	FILE* p_mFileOUT;


};

