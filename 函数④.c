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
//	int sum = Add(a, b);//�������
//	printf("%d\n", sum);
//	return 0;
//
//}

//int main()
//{
//	//strlen ���� string length ���� ���ַ��������й�
//	//strcpy ���� string copy ���� �ַ�������
//	char arr1[] = "bit";
//	char arr2[20] = "##########";
//	strcpy(arr2, arr1);
//	printf("%s\n", arr2);
//	return 0;
//}

////memset
////memory(�ڴ�) set(����)
//int main()
//{
//	char arr[] = "Hello World";
//	memset(arr, '#', 5);
//	printf("%s\n", arr);
//	return 0;
//}

//���庯��
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
//	//������ʹ��
//	int max = get_max(a, b);
//	printf("max = %d\n", max);
//	return 0;
//}

////int main()
////{
////	int a = 10;
////	int* pa = &a;//paָ�����
////	*pa = 20;//�����ò���
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
// //��ʵ�δ����βε�ʱ��
// //�β���ʵ��ʵ�ε�һ����ʱ����
// //���βε��޸��ǲ���ı�ʵ��
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
//  //����Swap1��������ֵ���ã�
//	/*Swap1(a, b);*///error
//  //����Swap2��������ַ���ã�
//	Swap2(&a, &b);
//
//	printf("a = %d , b = %d\n", a, b);
//	return 0;
//}

////����������1��������������0
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
//	// 2 ���� n-1
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
//	//��ӡ100-200֮�������
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//�ж�i�Ƿ�Ϊ����
//		if (is_prime(i) == 1)
//			printf("%d ", i);
//
//	}
//	return 0;
//}

//������
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
//		//�ж�year�Ƿ�Ϊ����
//		if (is_leap_year(year) == 1)
//		{
//			printf("%d ", year);
//		}
//	}
//	return 0;
//}