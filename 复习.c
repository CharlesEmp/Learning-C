#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	//�ַ����Ľ�����־����\0��
//	//"abcdef";
//	//'\0' ���� ת���ַ� ���� ASCII��ֵΪ 0 
//	// 0   ���� ���� 0   ���� ASCII��ֵΪ 0 
//	//'0'  ���� �ַ� 0   ���� ASCII��ֵΪ 48
//
//	//��EOF�� ���� end of file ���� �ļ�������־ ֵ�� -1
//
//
//	return 0;
//}

//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	if (num1 > num2)
//		printf("�ϴ�ֵ�ǣ�%d\n", num1);
//	else
//		printf("�ϴ�ֵ�ǣ�%d\n", num2);
//
//	return 0;
//}

int Max(int x, int y)
{
	if (x > y)
		return x;
	else
		return y;
}
int main()
{
	int num1 = 10;
	int num2 = 20;
	int max = 0;
	max = Max(num1, num2);
	printf("max = %d\n", max);

	return 0;
}