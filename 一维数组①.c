#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

//int main()
//{
//	//����һ������ ���� ������� ���� 10��
//	int arr[10];
//	char arr2[5];
//	int n = 5;
//	/*char ch[n];*///error
//	return 0;
//}

//��ʼ��
//int main()
//{
//	int arr1[10] = { 1,2,3 };//����ȫ��ʼ����ʣ�µ�Ԫ��Ĭ�ϳ�ʼ��Ϊ0
//	char arr2[5] = { 'a','b' };
//	char arr3[5] = { 'a',98 };
//	char arr4[5] = "ab";//���һλΪ��\0��
//	char arr5[] = "abcdef";//���ݳ�ʼ��ֵ�趨�����С ���� ��һλ��\0��
//	printf("%d\n", sizeof(arr5));//7
//	//sizeof ���� arr4��ռ�ռ�Ĵ�С
//	//7��Ԫ�� ���� char 7*1=7
//	printf("%d\n", strlen(arr5));//6
//	//strlen ���ַ������� ����\0ֹͣ
//	//[ a b c d e f \0 ] ���� 6
//	return 0;
//}
//strlen �� sizeof û��ʲô����
//strlen �� ���ַ������ȵ� ���� ֻ������ַ����󳤶� ���� �⺯����ͷ�ļ���
//sizeof �� ������������顢���͵Ĵ�С ���� ��λ���ֽ� ���� ������

//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a','b','c' };
//	printf("%d\n", sizeof(arr1));//4
//	printf("%d\n", sizeof(arr2));//3
//	printf("%d\n", strlen(arr1));//3
//	printf("%d\n", strlen(arr2));//���ֵ
//	return 0;
//}