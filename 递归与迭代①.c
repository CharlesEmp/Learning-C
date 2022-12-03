#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//求n的阶乘
//int Fac1(int n)//循环的方式
//{
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	return ret;
//}
//int Fac2(int n)//递归的方式
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n * Fac2(n - 1);
//}
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	/*ret = Fac1(n);*/
//	ret = Fac2(n);
//	printf("%d", ret);
//	return 0;
//}

//斐波那契数列
//1 1 2 3 5 8 13 21 34 55
//描述第n个斐波那契公式

int count = 0;
int Fib(n)
{
	if (n == 3)
		count++;
	if (n <= 2)
		return 1;
	else
		return Fib(n - 1) + Fib(n - 2);
}
int main()
{
	int n = 0;
	int ret = 0;
	scanf("%d", &n);
	ret = Fib(n);
	printf("%d\n", ret);
	printf("%d\n", count);
	return 0;
}