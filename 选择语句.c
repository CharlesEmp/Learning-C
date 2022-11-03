#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//选择语句
int main()
{
	int input = 0;
	printf("加入比特\n");
	printf("你要好好学习吗？\n");
	scanf("%d", &input);//input = 0/1
	if (input == 1)
		printf("好offer");
	else
		printf("卖红薯");
	return 0;
}