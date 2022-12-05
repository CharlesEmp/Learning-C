#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

//int main()
//{
//	//创建一个数组 —— 存放整形 —— 10个
//	int arr[10];
//	char arr2[5];
//	int n = 5;
//	/*char ch[n];*///error
//	return 0;
//}

//初始化
//int main()
//{
//	int arr1[10] = { 1,2,3 };//不完全初始化，剩下的元素默认初始化为0
//	char arr2[5] = { 'a','b' };
//	char arr3[5] = { 'a',98 };
//	char arr4[5] = "ab";//最后一位为“\0”
//	char arr5[] = "abcdef";//根据初始化值设定数组大小 —— 加一位“\0”
//	printf("%d\n", sizeof(arr5));//7
//	//sizeof 计算 arr4所占空间的大小
//	//7个元素 —— char 7*1=7
//	printf("%d\n", strlen(arr5));//6
//	//strlen 求字符串长度 遇到\0停止
//	//[ a b c d e f \0 ] —— 6
//	return 0;
//}
//strlen 和 sizeof 没有什么关联
//strlen 是 求字符串长度的 —— 只能针对字符串求长度 —— 库函数（头文件）
//sizeof 是 计算变量、数组、类型的大小 —— 单位是字节 —— 操作符

//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a','b','c' };
//	printf("%d\n", sizeof(arr1));//4
//	printf("%d\n", sizeof(arr2));//3
//	printf("%d\n", strlen(arr1));//3
//	printf("%d\n", strlen(arr2));//随机值
//	return 0;
//}