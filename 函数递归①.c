#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//��򵥵ĵݹ�
//int main()
//{
//	main();
//	return 0;
//}

//int main()
//{
//	printf("hehe\n");
//	main();
//	return 0;
//}

void print(int n)
{
	if (n > 9)//˵��n����λ���ϵ�����
	{
		print(n / 10);
	}
	printf("%d ", n % 10);
}
int main()
{
	unsigned int num = 0;
	scanf("%d", &num);//1234
	//�ݹ�
	print(num);
	return 0;
}