#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	//if (1)//if ѭ��
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
//	//EOF end of file "-1" �ļ�������־
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
//	printf("����������:>\n");
//	scanf("%s", password);//�������룬�������password������
//	//��������ʣ��һ����\n��
//	//��ȡһ�¡�\n��
//	while ((ch = getchar()) != '\n')
//	{
//		;
//	}
//	printf("��ȷ��(Y/N):>");
//	ret = getchar();//Y/N
//	if (ret == 'y')
//	{
//		printf("ȷ�ϳɹ�\n");
//	}
//	else
//	{
//		printf("����ȷ��\n");
//	}
//	return 0;
//}

//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch < '0' || ch > '9')
//			continue;
//		putchar(ch);
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;//��ʼ��
//	while (i < 10)//�ж�
//	{
//		//......
//		i++;//����
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 1 ; i <= 10 ; i++)
//		printf("%d ", i);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if(i==5)
//			break;
//		printf("%d ", i);
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		if (i = 5)//i��ֵ5�����ǱȽ�i�Ƿ����5
//			printf("haha\n");
//		printf("hehe\n");
//	}
//	//��ѭ��
//	return 0;
//}

int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}
