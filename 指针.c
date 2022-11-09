#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	int a = 10;// 向内存申请4个字节的空间
//	// &a; // 取地址
//	printf("%p\n", &a);//“%p” 打印地址
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int* p = &a;// p用来存放a的地址的
//	// 有一种变量是用来存放地址的 —— 指针变量
//	printf("%p\n", &a);
//	printf("%p\n", p);
//	*p = 20;// a = 20
//	// “*” —— 解引用操作符 （ *p = a ）
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

// 指针变量大小
// 32位机器 —— 32bit = 4byte
// 64位机器 —— 64bit = 8byte

int main()
{
	char ch = 'w';
	char* pc = &ch;
	printf("%d\n",sizeof(pc));
	return 0;
}