#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	int a = 10;// ���ڴ�����4���ֽڵĿռ�
//	// &a; // ȡ��ַ
//	printf("%p\n", &a);//��%p�� ��ӡ��ַ
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int* p = &a;// p�������a�ĵ�ַ��
//	// ��һ�ֱ�����������ŵ�ַ�� ���� ָ�����
//	printf("%p\n", &a);
//	printf("%p\n", p);
//	*p = 20;// a = 20
//	// ��*�� ���� �����ò����� �� *p = a ��
//	printf("%d\n", a);
//	return 0;
//}

//int main()
//{
//	char ch = 'w';
//	char* pc = &ch;
//	*pc = 'a';
//	printf("%c\n", ch);
//	return 0;
//}

// ָ�������С
// 32λ���� ���� 32bit = 4byte
// 64λ���� ���� 64bit = 8byte

int main()
{
	char ch = 'w';
	char* pc = &ch;
	printf("%d\n",sizeof(pc));
	return 0;
}