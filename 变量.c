#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//局部变量的作用域是变量值所在的局部范围
//全局变量的作用域是整个工程

//int num2 = 20;//全局变量-定义在代码块（{}）之外的变量
//
//int main()
//{
//	int num1 = 10;//局部变量-定义在代码块（{}）内部的变量
//
//	return 0;
//}

//int a = 100;
//
//int main()
//{
//	//int a = 10;
//	//局部变量和全局变量的名字建议不要相同，容易误会产生bug
//	//当局部变量和全局变量的名字相同是，局部变量优先
//	printf("%d\n", a);
//
//	return 0;
//}

//int a = 10;
// 
//int main()
//{
//	{
//		int a = 10;
//    }
//	printf ("%d\n",a);
//	return 0;
//}

//int main()
//{
//	//局部变量的作用域
//	int num = 0;
//
//	{
//		printf("num = %d\n", num);
//	}
//	return 0;
//}

//{
//	//计算2个数的和
//	int num1 = 0;
//	int num2 = 0;
//	//输入数据-使用输入函数
//	scanf("%d%d", &num1, &num2);//取地址符号&
//	int sum = 0;
//	sum = num1 + num2;
//	printf("sum = %d\n", sum);
//	return 0;
//}

//int global = 2022;
//
//void test()
//{
//	printf("test()--%d\n", global);
//}
//
//int main()
//{
//	test();
//	printf("%d\n", global);
//	return 0;
//}

//int main()
//{
//	//未声明标识符
//	//声明extern外部符号的
//	extern int g_val;
//	printf("g_val = %d", g_val);
//	return 0;
//}

//int main()
//{
//	{
//		int a = 10;
//		printf("a = %d\n", a);//OK(局部变量生命周期从【进入作用域开始，出作用域结束】)
//	}
//	printf("a = %d\n", a);//ERROR
//	return 0;
//}

//全局变量的生命周期是整个程序的生命周期