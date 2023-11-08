#include "clsEncryption.h"
#include <iostream>
#include <stdio.h>


void CopyCryptFile()
{

}

void Crypt()
{

}


int main()
{
	clsEncryption* p_lobjEncryption;

	// Create object
	p_lobjEncryption = new clsEncryption();

	//open file
	p_lobjEncryption->OpenFile("C:\\temp\\test.txt", "C:\\temp\\testvysl.txt");		//Change to scanf!!!

	//close file
	p_lobjEncryption->CloseFile();


	// Delete object
	delete(p_lobjEncryption);
}

