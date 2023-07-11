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

//定义导出DLL的宏
#ifdef LIBPASSWORD_EXPORTS
#define DLLEXPORT __declspec(dllexport)
#else
#define DLLEXPORT __declspec(dllimport)
#endif

//定义宏
#define NO_OUTPUT 0
#define OUTPUT_DATA 1

//获取输入，通过type判断是否输出
DLLEXPORT char* getPassword(int type, char outputChar);