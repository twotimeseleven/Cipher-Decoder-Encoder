// CipherDecoder.cpp : Defines the entry point for the console application.
//


#include "stdafx.h"
void Encode();
void Decode();
int main()
{
	std::cout << "Caesarian Cipher Program!" << std::endl << std::endl;
	std::cout << "Select your preferred action: " << std::endl;
	std::cout << "1: Encode Text" << std::endl;
	std::cout << "2: Decode Text" << std::endl << std::endl;
	std::cout << "Number: ";
	int entry;
	std::cin >> entry;
	switch (entry)
	{
		case 1:
		{
			Encode();
		}
		case 2:
		{
			Decode();
		}
	}
	std::cout << std::endl;
}

void Encode()
{ 
	std::cout << std::endl << "Enter string: " << std::endl;
	std::string x;
	std::cin.ignore();
	std::getline(std::cin, x);
	std::cout << std::endl << "Enter shift amount: "; 
	int shift;
	std::cin >> shift;
	std::string newBuild;
	for (int i = 0; i < x.length(); i++)
	{
		char ascii = x.at(i) + shift;
		newBuild += ascii;
	}
	std::cout << newBuild << std::endl;
}

void Decode()
{
	
}