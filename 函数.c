#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>	

//����
//f(x) = 2*x+1;

//int Add(int x, int y)//�Զ��庯�� - ���
//{
//	int z = x + y;
//	return z;
//}
//
//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	int sum = 0;
//	int a = 100;
//	int b = 200;
//	//sum = num1 + num2;
//	sum = Add(num1, num2);
//	//sum = a + b;
//	sum = Add(a, b);
//	printf("sum = %d\n", sum);
//
//	return 0;
//}

//����
int main()
{
	//int a = 1;
	//int b = 2;
	//int c = 3;
	//int d = 4;
	int arr[10] = {1,2,3,4,5,6,7,8,9,10};//����һ�����10���������ֵ�����
	//             0 1 2 3 4 5 6 7 8 9  ���Ӧ���±�(Ĭ�ϴ�0��ʼ)

	printf("%d\n", arr[4]);//�±�ķ�ʽ����Ԫ��(arr[�±�])��
	int i = 0;
	while (i < 10)
	{
		printf("%d\n", arr[i]);
		i++;
	}
	//char ch[20];//
	//float arr2[5];//
	return 0;
}