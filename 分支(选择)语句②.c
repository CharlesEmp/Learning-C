#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	// ��;���ֺŸ���һ�����
//	int a = 0;
//	;//����һ����;���ֺų�Ϊ�����
//	return 0;
//}

//int main()
//{
//	int age = 10;
//	
//	//if (age < 18)
//	//	printf("δ����\n");
//	
//	//if (age < 18)
//	//	printf("δ����\n");
//	//else
//	//	printf("����\n");
//
//	//if (age < 18)
//	//	printf("δ����\n");
//	//else if (age >= 18 && age < 28) // ��(18<=age<28)����ִ��ǰ��Ρ�18<=age����ִ�к���
//	//	printf("����\n");
//	//else if (age >= 28 && age < 50)
//	//	printf("׳��\n");
//	//else if (age >= 50 && age < 90)
//	//	printf("����\n");
//	///*else 
//	//	printf("�ϲ���\n");*/
//	////����ʡ�� 
//
//    //if (age < 18)
//	//   printf("δ����\n"); 
//	//else
//	//{
//	//	if (age >= 18 && age < 28)
//	//		printf("����\n");
//	//	else if (age >= 28 && age < 50)
//	//		printf("׳��\n");
//	//	else if (age >= 50 && age < 90)
//	//		printf("����\n");
//	//	else 
//	//	    printf("�ϲ���\n");
//	//}
//	////�߼���ͬǰһ����ʽ
//
//	if (age < 18)
//	{
//		printf("δ����\n");
//		printf("����̸����\n");
//	}
//	else
//		printf("����\n");
//
//
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//	{
//		if (b == 2)
//			printf("hehe\n");
//	}
//	else// else �롰����ġ���δƥ��ġ�if����ƥ��
//			printf("haha\n");
//	return 0;
//}

//int main()
//{
//	int num = 4;
//	if (5 == num)//��=��һ���Ⱥ��Ǹ�ֵ ��==�������Ⱥ��Ǹ�ֵ
//	{
//		printf("hehe\n");
//	}
//
//	return 0;
//}

//���1-100������
//int main()
//{
//	int a = 0;
//	int b = 0;
//	while(a < 50)
//	{
//		b = (2 * a) + 1;
//		printf("%d,", b);
//		a++;
//	}
//	return 0;
//}

int main()
{
	int i = 1;
	while (i <= 100)
	{
		if (i % 2 == 1)
			printf("%d ", i);
		i++;
	}
	return 0;
}