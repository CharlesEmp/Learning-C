#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	//if (1)//if 循环
//	while (1)
//		printf("hehe\n");
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	while (10 > a)
//	{
//		a++;
//		printf("%d\n", a);
//	}
//	return 0;
//}

//int main()
//{
//	int ch = getchar();
//	putchar(ch);
//	printf("%c\n", ch);
//	return 0;
//}
//int main()
//{
//	int ch = 0;
//	//CTRL+z 
//	//EOF end of file "-1" 文件结束标志
//	while ((ch = getchar()) != EOF)
//	{
//		putchar(ch);
//	}
//
//	return 0;
//}

//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		putchar(ch);
//	}
//	return 0;
//}

//int main()
//{
//	int ret = 0;
//	int ch = 0;
//	char password[20] = { 0 };
//	printf("请输入密码:>\n");
//	scanf("%s", password);//输入密码，并存放在password数组中
//	//缓冲区还剩余一个“\n”
//	//读取一下“\n”
//	while ((ch = getchar()) != '\n')
//	{
//		;
//	}
//	printf("请确认(Y/N):>");
//	ret = getchar();//Y/N
//	if (ret == 'y')
//	{
//		printf("确认成功\n");
//	}
//	else
//	{
//		printf("放弃确认\n");
//	}
//	return 0;
//}

//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch < '0' || ch > '9')
//			continue;
//		putchar(ch);
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;//初始化
//	while (i < 10)//判断
//	{
//		//......
//		i++;//调整
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 1 ; i <= 10 ; i++)
//		printf("%d ", i);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if(i==5)
//			break;
//		printf("%d ", i);
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		if (i = 5)//i赋值5，并非比较i是否等于5
//			printf("haha\n");
//		printf("hehe\n");
//	}
//	//死循环
//	return 0;
//}

//int main()
//{
//	for (;;)//死循环
//	{
//		printf("hehe");
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int j = 0;
//	/*for (i = 0; i < 10; i++)*/
//	for (; i < 10; i++)//表层循环无影响
//	{
//		/*for (j; j < 10; j++)*/
//		for (; j < 10; j++)//内层循环j第二次开始恒为10不继续进行循环
//		{
//			printf("hehe\n");
//		}
//	}
//	return 0;
//}

//int main()
//{
//	for (x = 0, y = 0; x < 2 && y < 5; ++x, y++)
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int k = 0;
//	for (i = 0, k = 0; k = 0; i++, k++)//赋值k=0，0为假，所以循环零次
//                                     //若k=非零，则为死循环
//	{
//		printf("hehe\n");
//		k++;
//	}
//	return 0;
//}

//int main()
//{
//	int i = i;
//	do
//	{
//		printf("%d ", i);
//		i++;
//	}
//	while (i <= 10);
//
//	return 0;
//}

//int main()
//{
//	int i = i;
//	do
//	{
//		if (i == 5)
//			break;//终止循环，不打印5
//		printf("%d ", i);
//		i++;
//	} while (i <= 10);
//
//	return 0;
//}

//int main()
//{
//	int i = i;
//	do
//	{
//		if (i == 5)
//			continue;//在i=5的位置死循环
//		printf("%d ", i);
//		i++;
//	} while (i <= 10);
//
//	return 0;
//}