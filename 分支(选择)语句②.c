#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	// “;”分号隔开一条语句
//	int a = 0;
//	;//仅有一个“;”分号成为空语句
//	return 0;
//}

//int main()
//{
//	int age = 10;
//	
//	//if (age < 18)
//	//	printf("未成年\n");
//	
//	//if (age < 18)
//	//	printf("未成年\n");
//	//else
//	//	printf("成年\n");
//
//	//if (age < 18)
//	//	printf("未成年\n");
//	//else if (age >= 18 && age < 28) // 若(18<=age<28)，先执行前半段“18<=age”再执行后半段
//	//	printf("青年\n");
//	//else if (age >= 28 && age < 50)
//	//	printf("壮年\n");
//	//else if (age >= 50 && age < 90)
//	//	printf("老年\n");
//	///*else 
//	//	printf("老不死\n");*/
//	////可以省略 
//
//    //if (age < 18)
//	//   printf("未成年\n"); 
//	//else
//	//{
//	//	if (age >= 18 && age < 28)
//	//		printf("青年\n");
//	//	else if (age >= 28 && age < 50)
//	//		printf("壮年\n");
//	//	else if (age >= 50 && age < 90)
//	//		printf("老年\n");
//	//	else 
//	//	    printf("老不死\n");
//	//}
//	////逻辑上同前一种形式
//
//	if (age < 18)
//	{
//		printf("未成年\n");
//		printf("不能谈恋爱\n");
//	}
//	else
//		printf("成年\n");
//
//
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//	{
//		if (b == 2)
//			printf("hehe\n");
//	}
//	else// else 与“最近的”“未匹配的”if进行匹配
//			printf("haha\n");
//	return 0;
//}

//int main()
//{
//	int num = 4;
//	if (5 == num)//“=”一个等号是赋值 “==”两个等号是赋值
//	{
//		printf("hehe\n");
//	}
//
//	return 0;
//}

//输出1-100的奇数
//int main()
//{
//	int a = 0;
//	int b = 0;
//	while(a < 50)
//	{
//		b = (2 * a) + 1;
//		printf("%d,", b);
//		a++;
//	}
//	return 0;
//}

int main()
{
	int i = 1;
	while (i <= 100)
	{
		if (i % 2 == 1)
			printf("%d ", i);
		i++;
	}
	return 0;
}