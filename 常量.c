#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	//const - ������
//	 
//	const int n = 10;//n�Ǳ��������Ǿ��г����ԣ�����˵n�ǳ����������ǳ�����
//	//int arr[n] = { 0 };
//	n = 20;
//
//	//const int num = 4;//num��const���εĳ�����
//	//printf("%d\n",num);
//	//num = 8;
//	//printf("%d\n",num);
//	//���泣��
//	//3;
//	//100;
//	//3, 14;
//
//	return 0;
//}

////#define ����ı�ʶ������
//#define MAX 10
//int main()
//{
//	int arr[MAX] = {0};
//	printf("%d\n", MAX);
//	return 0;
//}

//ö�ٳ���
//ö�١��� һһ�о�
// 
//�Ա��У�Ů������
//��ԭɫ���죬�̣���
//���ڣ�1��2��3��4��5��6��7

//ö�ٹؼ�--enum

//enum Sex
//{
//	MALE,
//	FEMALE,
//	SECRET
//};
////MALE FEMALE SECRET - ö�ٳ���
//int main()
//{
//	//enum Sex s = FEMALE;
//	printf("%d\n",MALE);//0
//	printf("%d\n",FEMALE);//1
//	printf("%d\n",SECRET);//2
//
//	return 0;
//}

enum Colour
{
	RED,
	GREEN,
	BLUE
};
int main()
{
	enum Colour colour = BLUE;
	colour = GREEN;
	//BLUE = 6;//error
	return 0;
}