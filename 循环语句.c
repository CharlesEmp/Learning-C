#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//循环语句
int main()
{
	int line = 0;
	printf("加入比特\n");

	while (line < 200)
	{
		printf("输入一行代码:%d\n", line);
		line++;
	}
	if (line >= 200)
		printf("好offer");
	return 0;
}