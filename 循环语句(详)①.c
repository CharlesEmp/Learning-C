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
int main()
{
	int ch = 0;
	//CTRL+z 
	//EOF end of file "-1" 文件结束标志
	while ((ch = getchar()) != EOF)
	{
		putchar(ch);
	}

	return 0;
}