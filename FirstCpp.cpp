// FirstCpp.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

void printmessage()
{
	std::cout << "Hello, what is your name?\n" << std::endl;
}

void skull()
{
	std::cout << "               uuuuuuu    \n";
	std::cout << "           uu$$$$$$$$$uu   \n ";
	std::cout << "       uu$$$$$$$$$$$$$$$uu \n   ";
	std::cout << "    u$$$$$$$$$$$$$$$$$$$u \n   ";
	std::cout << "   u$$$$$$$$$$$$$$$$$$$$$u \n ";
	std::cout << "    u$$$$$$$$$$$$$$$$$$$$$$$u  \n ";
	std::cout << "   u$$$$$$$$$$$$$$$$$$$$$$$$$u \n  ";
	std::cout << "  u$$$$$$\"   \"$$$\"   \"$$$$$$u   \n";
	std::cout << "    \"$$$$\"      u$u      \"$$$$\"   \n";
	std::cout << "     $$$u       u$u       u$$$   \n";
	std::cout << "     $$$u      u$$$u      u$$$   \n";
	std::cout << "      \"$$$$uu$$$   $$$uu$$$$\"\n";
	std::cout << "       \"$$$$$$$\"   \"$$$$$$$\"  \n ";
	std::cout << "        u$$$$$$$u$$$$$$$u   \n";
	std::cout << "          u$\"$\"$\"$\"$\"$\"$u   \n";
	std::cout << "          $$u$ $ $ $ $u$$   \n";
	std::cout << "           $$$$$u$u$u$$$   \n";
	std::cout << "            \"$$$$$$$$$\"   \n";
	std::cout << "               \"\"\"\"\"   \n";
}

int main()
{
	printmessage();
	for (std::string line; std::getline(std::cin, line);) {
		if (line == "q")
		{
			return 0;
		}
		else if (line == "Jan Erik")
		{
			skull();
		}
		else if (line == "Andreas")
		{
			std::cout << "Hello " + line + "\n"  + "Enter q to quit"<< std::endl;

		}
		else {
			std::cout << "Your name is not registered!\n";
			printmessage();
		}
	}
}