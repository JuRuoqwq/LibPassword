# LibPassword

### 简介

> 这是一个轻量级的密码输入库，当用户输入时，可以接收输入
>
> 可选择以下几种输入方式：
>
> 1.无输出
>
> 2.输出*
>
> 3.自定义

### 编译

> 此项目使用Visual Studio2022制作&编译，如果您需要编译，请按以下步骤
>
> 1.用Visual Studio2022打开"/src/LibPassword/LibPassword.sln"文件
>
> 2.在VS2022的窗口中点击项目->属性->C/C++->预编译头->不使用
>
> 3.按下F5调试，Ctrl+F5编译

### 使用

> 函数：getPassword(int,char)
>
> 参数1(int) 输出的形式，有NO_OUTPUT和OUTPUT_DATA两种
>
> 参数2(char) 输出的参数，当参数1为NO_OUTPUT时，此项必须为'\0'
>
> ​    当参数1位OUTPUT_DATA时，如果此项为'\0'，将会输出'*'，否则输出此项
>
> 更多请在"Demo/LibPasswordDemo/LibPasswordDemo.cpp"中查看

### 项目成品文件

您可以在[huang1111网盘](https://pan.huang1111.cn/s/mM5ZT1)下载它

### 许可证

本项目基于Apache License 2.0开源
