#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <math.h>

//Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);//输入参数
//	printf("%d\n", sum);
//	return 0;
//
//}

//int main()
//{
//	//strlen —— string length —— 与字符串长度有关
//	//strcpy —— string copy —— 字符串拷贝
//	char arr1[] = "bit";
//	char arr2[20] = "##########";
//	strcpy(arr2, arr1);
//	printf("%s\n", arr2);
//	return 0;
//}

////memset
////memory(内存) set(设置)
//int main()
//{
//	char arr[] = "Hello World";
//	memset(arr, '#', 5);
//	printf("%s\n", arr);
//	return 0;
//}

//定义函数
//int get_max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//函数的使用
//	int max = get_max(a, b);
//	printf("max = %d\n", max);
//	return 0;
//}

////int main()
////{
////	int a = 10;
////	int* pa = &a;//pa指针变量
////	*pa = 20;//解引用操作
////	return 0;
////}
//// 
////void Swap1(int x, int y)//error
////{
////	int tmp = 0;
////	tmp = x;
////	x = y;
////	y = tmp;
////}
// //当实参传给形参的时候
// //形参其实是实参的一份临时拷贝
// //对形参的修改是不会改变实参
//Swap2(int* pa,int* pb)
//{
//	int tmp = 0;
//	tmp = *pa;
//	*pa = *pb;
//	*pb = tmp;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	/*int tmp = 0;*/
//	printf("a = %d , b = %d\n", a, b);
//
//	/*tmp = a;
//	a = b;
//	b = tmp;*/
//  //调用Swap1函数（传值调用）
//	/*Swap1(a, b);*///error
//  //调用Swap2函数（传址调用）
//	Swap2(&a, &b);
//
//	printf("a = %d , b = %d\n", a, b);
//	return 0;
//}

////是素数返回1，不是素数返回0
////int is_prime(int n)
////{
////	if ((n % 2) != 0)
////	{
////		if ((n % 3) != 0)
////		{
////			if ((n % 5) != 0)
////			{
////				if ((n % 7) != 0)
////				{
////					if ((n % 11) != 0)
////					{
////						return 1;
////					}
////					else
////					return 0;
////				}
////				else
////					return 0;
////			}
////			else
////				return 0;
////		}
////		else
////			return 0;
////	}
////	else
////		return 0;	
////}
//int is_prime(int n)
//{
//	// 2 —— n-1
//	int j = 0;
//	for (j = 2; j <= sqrt(n); j++)
//	{
//		if (n % j == 0)
//			return 0;
//	}
//	/*if (j == n)*/
//	return 1;
//}
//int main()
//{
//	//打印100-200之间的素数
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//判断i是否为素数
//		if (is_prime(i) == 1)
//			printf("%d ", i);
//
//	}
//	return 0;
//}

//求闰年
//int is_leap_year(int y)
//{
//	if ((y % 4) == 0 && (y % 100) != 0 || (y % 400) == 0)
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		//判断year是否为闰年
//		if (is_leap_year(year) == 1)
//		{
//			printf("%d ", year);
//		}
//	}
//	return 0;
//}