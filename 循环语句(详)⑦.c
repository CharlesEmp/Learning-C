#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <Windows.h>
#include <stdlib.h>

//int main()
//{
//	//if (1)//if 循环
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
//	//EOF end of file "-1" 文件结束标志
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
//	printf("请输入密码:>\n");
//	scanf("%s", password);//输入密码，并存放在password数组中
//	//缓冲区还剩余一个“\n”
//	//读取一下“\n”
//	while ((ch = getchar()) != '\n')
//	{
//		;
//	}
//	printf("请确认(Y/N):>");
//	ret = getchar();//Y/N
//	if (ret == 'y')
//	{
//		printf("确认成功\n");
//	}
//	else
//	{
//		printf("放弃确认\n");
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
//	int i = 0;//初始化
//	while (i < 10)//判断
//	{
//		//......
//		i++;//调整
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
//		if (i = 5)//i赋值5，并非比较i是否等于5
//			printf("haha\n");
//		printf("hehe\n");
//	}
//	//死循环
//	return 0;
//}

//int main()
//{
//	for (;;)//死循环
//	{
//		printf("hehe");
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int j = 0;
//	/*for (i = 0; i < 10; i++)*/
//	for (; i < 10; i++)//表层循环无影响
//	{
//		/*for (j; j < 10; j++)*/
//		for (; j < 10; j++)//内层循环j第二次开始恒为10不继续进行循环
//		{
//			printf("hehe\n");
//		}
//	}
//	return 0;
//}

//int main()
//{
//	for (x = 0, y = 0; x < 2 && y < 5; ++x, y++)
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int k = 0;
//	for (i = 0, k = 0; k = 0; i++, k++)//赋值k=0，0为假，所以循环零次
//                                     //若k=非零，则为死循环
//	{
//		printf("hehe\n");
//		k++;
//	}
//	return 0;
//}

//int main()
//{
//	int i = i;
//	do
//	{
//		printf("%d ", i);
//		i++;
//	}
//	while (i <= 10);
//
//	return 0;
//}

//int main()
//{
//	int i = i;
//	do
//	{
//		if (i == 5)
//			break;//终止循环，不打印5
//		printf("%d ", i);
//		i++;
//	} while (i <= 10);
//
//	return 0;
//}

//int main()
//{
//	int i = i;
//	do
//	{
//		if (i == 5)
//			continue;//在i=5的位置死循环
//		printf("%d ", i);
//		i++;
//	} while (i <= 10);
//
//	return 0;
//}

////求n的阶乘
//int main()
//{
//	int a = 0;
//	int n = 0;
//	int b = 1;
//	printf("求n的阶乘\n设n的值为：");
//	scanf("%d", &n);
//	for (a = 1; a <= n; a++)
//	{
//		b = b * a;
//	}
//	printf("n的阶乘为 N=%d\n", b);
//	return 0;
//}

////求1-10的阶乘和
//int main()
//{
//	int a = 0;
//	int n = 0;
//	int b = 1;
//	int c = 0;
//	for (a = 1; a <= 10; a++)
//	{
//		b = b * a;
//		c = c + b;
//	}
//	printf("%d", c);
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		if (k == arr[i])
//		{
//			printf("找到了，下标是：%d\n", i);
//		    break;
//	    }
//	}
//	if (i == sz)
//		printf("找不到\n");
//    return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//
//	int sz = sizeof(arr) / sizeof(arr[0]);//计算元素个数
//	int left = 0;//左下标
//	int right = sz - 1;//右下标
//	
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			printf("找到了，下标是:%d\n",mid);
//			break;
//		}
//	}
//	if (left > right)
//		printf("找不到\n");
//	return 0;
//}

//int main()
//{
//	
//	//welcome t0 bit!!!!!!
//	//####################
//	//w##################!
//	//we################!!
//	//....
//	//welcome to bit!!!!!!
//
//	char arr1[] = "welcome to bit!!!!!!";
//	char arr2[] = "####################";
//	int left = 0;
//	/*int right = sizeof(arr1) / sizeof(arr[0]) - 1;*/ //error(数组内“\0”也占一位数)
//	//int right = sizeof(arr1) / sizeof(arr[0]) - 2;
//	int right = strlen(arr1) - 1;
//
//	while (left<right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		//暂停一秒
//		Sleep(1000);
//		system("cls");//执行系统命令中的一个函数    “cls”——清空屏幕
//		left++;
//		right--;
//	}
//
//	return 0;
//}

int main()
{
	int i = 0;
	char password[20] = {0};
	for (i = 0; i < 3; i++)
	{
		printf("请输入密码：>");
		scanf("%s", password);
		/*if (password == "123456")*/
		//“==”等号不能用来比较两个字符串是否相等，应该使用一个库函数 —— “stremp”
		if (strcmp(password , "123456") == 0)//左边大，输出大于0的；右边大，则是输出小于0
		{
			printf("登陆成功\n");
			break;
		}
		else
			printf("密码错误\n");
	}
	if (i == 3)
		printf("三次密码均错误，请退出登录\n");
	return 0;
}