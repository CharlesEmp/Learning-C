#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//ѭ�����
int main()
{
	int line = 0;
	printf("�������\n");

	while (line < 200)
	{
		printf("����һ�д���:%d\n", line);
		line++;
	}
	if (line >= 200)
		printf("��offer");
	return 0;
}