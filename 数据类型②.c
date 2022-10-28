#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//char - 字符类型
//%d - 打印整型
//%c - 打印字符
//%f - 打印浮点数字 - 打印小鼠
//%p - 以地址的形式打印
//%x - 打印16进制数字
//%o

//int main()
//{
//	//char ch = 'A';//内存
//	//printf("%c\n", ch);//%c - 打印字符格式的数据
//	//20;
//	//short int - 短整型
//
//	//int - 整型
//	//int age = 20;
//	//printf("%d", age);//%d - 打印整型十进制数据
//	
//	//long int 长整型
//	//long num = 500;
//	//printf("%d\n", num);
//
//	//float f = 5.0;
//	//printf("%f\n", f);
//
//	//double d = 3.14;
//	//printf("%lf\n", d);
//	return 0;
//}

//int main()
//{
//	printf("%d\n", sizeof(char));//  1个字节
//	printf("%d\n", sizeof(short));// 2个字节
//	printf("%d\n", sizeof(int));//   4个字节
//	printf("%d\n", sizeof(long));//  4/8个字节
//	printf("%d\n", sizeof(long long));//8个字节
//	printf("%d\n", sizeof(float));// 4个字节
//	printf("%d\n", sizeof(double));//8个字节
//	short int age = 20;
//	return 0;
//}

int main()
{
	//年龄
	//20
	short age = 20;//向内存申请2个字节（16个bit位）用来存放20
	float weight = 95.6f;//向内存申请4个字节（32个bit位）用来存放小数

	return 0;
}