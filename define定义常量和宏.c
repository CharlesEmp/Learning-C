#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//#define 定义标识符常量
#define MAX 100;
//#define 可以定义宏 —— 带参数

//函数的实现
int Max(int x, int y)
{
	if (x > y)
		return x;
	else
		return y;
}
//宏的实现
#define MAX(X,Y) (X>Y?X:Y)
int main()
{
	/*int a = MAX;*/
	int a = 10;
	int b = 20;
	int max = Max(a, b);
	printf("max = %d\n", max);
	// 宏的方式
	max = MAX(a,b);
	// max = (a>b?a:b);
	printf("max = %d\n", max);
	return 0;
}