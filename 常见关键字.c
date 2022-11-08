#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	/*auto*/ int a = 10;//局部变量（自动变量）
//
//	return 0;
//}

//int main()
//{
//	register int a = 10;//“建议”把a定义成寄存器变量
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	a = -2;
//	//int 定义的变量是有符号的
//	//signed int;
//	unsigned int num = -1;//无符号数
//	printf("%d\n", num);
//	// struct —— 结构体关键字
//	// union —— 联合体/共用体
//	return 0;
//}

//int main()
//{
//	// typedef —— 类型定义/类型重定义
//	unsigned int num = 20;
//	typedef unsigned int u_int;
//	u_int num2 = 20;
//	return 0;
//}

//void test()
//{
//	int a = 1;
//	a++;
//	printf("%d\n", a);
//}
//int main()
//{
//	int i = 0;
//	while (i < 5)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}

// static 修饰局部变量
// 局部变量生命周期变长
// static 修饰全局变量
// 全局变量作用域变窄 —— 让静态的全局变量只能在所在的原文件内部使用（出原文件无法继续使用）
// static 修饰函数
// 改变了函数的作用域 - 不准确
// static 修饰函数改变了函数的链接属性（外部链接属性——>内部链接属性）
//void test()
//{
//	static int a = 1;// 静态的局部变量
//	a++;
//	printf("%d\n", a);
//}
//int main()
//{
//	int i = 0;
//	while (i < 5)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}
