#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	//const - 常属性
//	 
//	const int n = 10;//n是变量，但是具有常属性，所以说n是常变量（并非常量）
//	//int arr[n] = { 0 };
//	n = 20;
//
//	//const int num = 4;//num是const修饰的常变量
//	//printf("%d\n",num);
//	//num = 8;
//	//printf("%d\n",num);
//	//字面常量
//	//3;
//	//100;
//	//3, 14;
//
//	return 0;
//}

////#define 定义的标识符常量
//#define MAX 10
//int main()
//{
//	int arr[MAX] = {0};
//	printf("%d\n", MAX);
//	return 0;
//}

//枚举常量
//枚举—— 一一列举
// 
//性别：男，女，保密
//三原色：红，绿，蓝
//星期：1，2，3，4，5，6，7

//枚举关键--enum

//enum Sex
//{
//	MALE,
//	FEMALE,
//	SECRET
//};
////MALE FEMALE SECRET - 枚举常量
//int main()
//{
//	//enum Sex s = FEMALE;
//	printf("%d\n",MALE);//0
//	printf("%d\n",FEMALE);//1
//	printf("%d\n",SECRET);//2
//
//	return 0;
//}

enum Colour
{
	RED,
	GREEN,
	BLUE
};
int main()
{
	enum Colour colour = BLUE;
	colour = GREEN;
	//BLUE = 6;//error
	return 0;
}