/*
* LibPassword Project
* Copyright (c) Storm Lab
*
* This library can get password and
* DO NOT print any thing or print some '*'
*
* This project is open source by Apache License 2.0
* You can read it on <https://apache.org/licenses/>
*/

#include <iostream>

#include "LibPassword.hpp"

#pragma comment(lib,"LibPassword.lib")

int main(int argc, char* argv[])
{
	std::cout << "LibPassword Demo" << std::endl;
	std::cout << "Password >> ";
	getPassword(NO_OUTPUT, '\0');
	getPassword(OUTPUT_DATA, '\0');
	getPassword(OUTPUT_DATA, '@');
	return 0;
}