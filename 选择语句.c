#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//ѡ�����
int main()
{
	int input = 0;
	printf("�������\n");
	printf("��Ҫ�ú�ѧϰ��\n");
	scanf("%d", &input);//input = 0/1
	if (input == 1)
		printf("��offer");
	else
		printf("������");
	return 0;
}