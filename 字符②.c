#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

////int float
////char
////�ַ�������
//int main()
//{
//	"abcdef";
//	"hello Jyt";
//	" ";//���ַ���
//	return 0;
//}

//int main()
//{
//        // �����ڼ�����ϴ洢��ʱ�򣬴洢����2����
//		// a -- 97
//		// A -- 65
//		// ASCII ����
//		// ASCII ��ֵ
//	//char arr1[] = "abc";//����
//	////"abc"--'a' 'b' 'c' '\0'--'\0'�ַ����Ľ�����־
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
//	printf("%d\n", strlen(arr1));//strlen - string length - �����ַ�������
//	printf("%d\n", strlen(arr2));
//	return 0;
//}


//ת���ַ�
//int main()
//{
//	printf("c:\test\32\test,c");
//	// \t - ˮƽ�Ʊ��
//	printf("c:\\test\\32\\test,c");
//	// \\ - ��ʾһ��б�ܣ���ֹб�ܱ����ͳ�Ҫ��ת�����з���
//	printf("%c\n", 'a');
//	printf("%c\n", '\'');
//	printf("%s\n", "abc");
//	return 0;
//}

int main()
{
	printf("%d\n", strlen("c:\test\32\test.c"));//13
	// (/ddd) \32 -- 32������8��������
	// 32 ��Ϊ8���ƴ�����Ǹ�ʮ�������֣���ΪASCII��ֵ����Ӧ���ַ�
	// 8���� 32 ���� 10���� 26 ���� ASCII ���Ҽ�ͷ
	printf("%c\n", '\32');
	printf("%c\n", '\132');
	printf("%c\n", '\x61');
	// (/xdd) /x61 -- 61������16��������
	// 61 ��Ϊ16���ƴ�����Ǹ�ʮ�������֣���ΪASCII��ֵ����Ӧ���ַ�
	// 16���� 61 ���� 10���� 97 ���� ASCII ��a��
	return 0;
}