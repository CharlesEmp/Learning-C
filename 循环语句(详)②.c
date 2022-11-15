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

int main()
{
	int ch = 0;
	while ((ch = getchar()) != EOF)
	{
		if (ch < '0' || ch > '9')
			continue;
		putchar(ch);
	}
	return 0;
}