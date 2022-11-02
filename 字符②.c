#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

////int float
////char
////字符串类型
//int main()
//{
//	"abcdef";
//	"hello Jyt";
//	" ";//空字符串
//	return 0;
//}

//int main()
//{
//        // 数据在计算机上存储的时候，存储的是2进制
//		// a -- 97
//		// A -- 65
//		// ASCII 编码
//		// ASCII 码值
//	//char arr1[] = "abc";//数组
//	////"abc"--'a' 'b' 'c' '\0'--'\0'字符串的结束标志
//	//char arr2[] = { 'a','b','c',0};
//	////'\0' -- 0
//	////'a' -- 97
//	////'a' 'b' 'c'
//	//printf("%s\n", arr1);
//	//printf("%s\n", arr2);
//
//	return 0;
//}

//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a','b','c' };
//	printf("%d\n", strlen(arr1));//strlen - string length - 计算字符串长度
//	printf("%d\n", strlen(arr2));
//	return 0;
//}


//转义字符
//int main()
//{
//	printf("c:\test\32\test,c");
//	// \t - 水平制表符
//	printf("c:\\test\\32\\test,c");
//	// \\ - 表示一个斜杠（防止斜杠被解释成要给转义序列符）
//	printf("%c\n", 'a');
//	printf("%c\n", '\'');
//	printf("%s\n", "abc");
//	return 0;
//}

int main()
{
	printf("%d\n", strlen("c:\test\32\test.c"));//13
	// (/ddd) \32 -- 32是两个8进制数字
	// 32 作为8进制代表的那个十进制数字，作为ASCII码值，对应的字符
	// 8进制 32 —— 10进制 26 —— ASCII 向右箭头
	printf("%c\n", '\32');
	printf("%c\n", '\132');
	printf("%c\n", '\x61');
	// (/xdd) /x61 -- 61是两个16进制数字
	// 61 作为16进制代表的那个十进制数字，作为ASCII码值，对应的字符
	// 16进制 61 —— 10进制 97 —— ASCII “a”
	return 0;
}