#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//�ֲ��������������Ǳ���ֵ���ڵľֲ���Χ
//ȫ�ֱ���������������������

//int num2 = 20;//ȫ�ֱ���-�����ڴ���飨{}��֮��ı���
//
//int main()
//{
//	int num1 = 10;//�ֲ�����-�����ڴ���飨{}���ڲ��ı���
//
//	return 0;
//}

//int a = 100;
//
//int main()
//{
//	//int a = 10;
//	//�ֲ�������ȫ�ֱ��������ֽ��鲻Ҫ��ͬ������������bug
//	//���ֲ�������ȫ�ֱ�����������ͬ�ǣ��ֲ���������
//	printf("%d\n", a);
//
//	return 0;
//}

//int a = 10;
// 
//int main()
//{
//	{
//		int a = 10;
//    }
//	printf ("%d\n",a);
//	return 0;
//}

//int main()
//{
//	//�ֲ�������������
//	int num = 0;
//
//	{
//		printf("num = %d\n", num);
//	}
//	return 0;
//}

//{
//	//����2�����ĺ�
//	int num1 = 0;
//	int num2 = 0;
//	//��������-ʹ�����뺯��
//	scanf("%d%d", &num1, &num2);//ȡ��ַ����&
//	int sum = 0;
//	sum = num1 + num2;
//	printf("sum = %d\n", sum);
//	return 0;
//}

//int global = 2022;
//
//void test()
//{
//	printf("test()--%d\n", global);
//}
//
//int main()
//{
//	test();
//	printf("%d\n", global);
//	return 0;
//}

//int main()
//{
//	//δ������ʶ��
//	//����extern�ⲿ���ŵ�
//	extern int g_val;
//	printf("g_val = %d", g_val);
//	return 0;
//}

//int main()
//{
//	{
//		int a = 10;
//		printf("a = %d\n", a);//OK(�ֲ������������ڴӡ�����������ʼ���������������)
//	}
//	printf("a = %d\n", a);//ERROR
//	return 0;
//}

//ȫ�ֱ��������������������������������