#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//��n�Ľ׳�
//int Fac1(int n)//ѭ���ķ�ʽ
//{
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	return ret;
//}
//int Fac2(int n)//�ݹ�ķ�ʽ
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

//쳲���������
//1 1 2 3 5 8 13 21 34 55
//������n��쳲�������ʽ

//int count = 0;
//int Fib(n)
//{
//	if (n == 3)//���Ե�����쳲��������ļ������
//		count++;
//	if (n <= 2)
//		return 1;
//	else
//		return Fib(n - 1) + Fib(n - 2);
//}
//int Fib(int n)
//{
//	int a = 1;
//	int b = 2;
//	int c = 1;
//
//	while (n>2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = Fib(n);
//	printf("%d\n", ret);
//	/*printf("%d\n", count);*/
//	return 0;
//}

//ջ���
//void test(int n)
//{
//	if(n<10000)
//	{
//		test(n + 1);
//	}
//}
//int main()
//{
//	test(1);
//	return 0;
//}