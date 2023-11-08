#include "clsEncryption.h"

//Constructor 
clsEncryption::clsEncryption()
{
	p_mFileIN = NULL;
	p_mFileOUT = NULL;
}

/// <summary>
/// Opens file and checks if it really oppened by True/False statement
/// </summary>
/// <param name="p_chName"> Path and name of a specified file </param>
/// <returns></returns>
bool clsEncryption::OpenFile(const char* p_chNameIN, const char* p_chNameOUT)
{
	int lintLen;

	//File name copy

	lintLen = strnlen_s(p_chNameIN, 1024);
	p_mchFileNameIN = new char[lintLen+1];	//ending char
	strcpy_s(p_mchFileNameIN, lintLen+1, p_chNameIN);

	//File openning
	fopen_s(&p_mFileIN, p_mchFileNameIN, "r");

	//File name copy

	lintLen = strnlen_s(p_chNameOUT, 1024);
	p_mchFileNameOUT = new char[lintLen + 1];	//ending char
	strcpy_s(p_mchFileNameOUT, lintLen + 1, p_chNameOUT);

	//File openning
	fopen_s(&p_mFileOUT, p_mchFileNameOUT, "w");

	
	//New test is required			TODO: new test
	/*if (p_mFileIN != NULL)
	{
		return true;
	}*/



	return false;
}

/// <summary>
/// Closes  file and checks if it really closed by True/False statement
/// </summary>
/// <returns></returns>
bool clsEncryption::CloseFile()
{
	if (p_mFileIN != NULL)
	{
		fclose(p_mFileIN);
		p_mFileIN = NULL;
		return true;
	}

	if (p_mFileOUT != NULL)
	{
		fclose(p_mFileOUT);
		p_mFileOUT = NULL;
	}

	if (p_mFileIN == NULL && p_mFileOUT == NULL)
	{

		return true;
	}


	return false;
}

//Daniku staci pouze crypt, ja si to chci jen udelat slozitejsi protoze proc ne
bool clsEncryption::CopyFile()
{
	//if p_mFile is not opened (is NULL) then cant do anything
	if (p_mFileIN == NULL || p_mFileOUT == NULL)
	{

		return false;
	}


	return true;
}