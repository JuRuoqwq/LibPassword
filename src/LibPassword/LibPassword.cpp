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

#include <conio.h>
#include <Windows.h>

#include "framework.h"
#include "LibPassword.hpp"

DLLEXPORT char* getPassword(int type, char outputChar)
{
	char output = '*'; //要输出的字符串，如果outputChar为''，则为'*'
	char ch = 0; //要获取的字符
	char result[128]; //最终输入的字符串
	int i = 0; //计数
	while (1) {
		//死循环判断
		if (_kbhit()) {
			//如果按下键盘
			ch = _getch();
			if (type == OUTPUT_DATA) {
				//有输出
				if (outputChar != '\0') {
					output = outputChar;
				}
				_putch(output);
			}
			if (ch == 13 || ch == 9) {
				//Enter or Tab
				_putch('\n');
				result[i] = '\0';
				break;
			}
			//else if (ch == 8) {
                                                                //这段代码有bug...
				//退格
			//	i--; i--; //让光标移动到前两格
			//	system("cls");
			//	for (int j = 0; j < i; j++) {
			//		_putch(output);
			//	}
			//}
			result[i] = ch;
			i++;
		}
	}
	return result;
}
