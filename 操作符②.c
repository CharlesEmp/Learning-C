#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	int a = 5 % 2;//取模
//	printf("%d\n", a);
//	return 0;
//}

//int main()
//{
//	//移（2进制）位操作符
//	//<<左移
//	//>>右移
//	int a = 1;
//	//整型1占4个字节 = 32bit位数
//	//00000000000000000000000000000001
//	int b = a<<1;
//	printf("%d\n", b);
//	//00000000000000000000000000000010
//	return 0;
//}
//
//int main()
//{
//	//(2进制)位操作
//	//& 按位 与
//	//| 按位 或
//	//^ 按位 异或
//	int a = 3;
//	int b = 5;
//	int c = a & b;// 与 —— 对应的2进制位 有0则为0 都1才为1
//	// a 011
//	// b 101
//	// c 001
//	printf("%d\n", c);
//	int d = a | b;// 或 —— 对应的2进制位 有1则为1 都0才为0
//	// a 011
//	// b 101
//	// d 111
//	printf("%d\n", d);
//	int e = a ^ b;// 异或 —— 对应的2进制位 相同为0 相异为1
//	// a 011
//	// b 101
//	// e 110
//	printf("%d\n", e);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	//赋值操作符 =      （==判断相等）
//	a = 20;
//	a = a + 10;
//	a += 10;
//	a = a - 20;
//	a -= 20;
//	a = a & 20;
//	a &= 20;
//	//复合赋值符
//	// += -= *= /= %= >>= <<= &= |= ^=
//	return 0;
//}


//单目操作符
//双目操作符
//三目操作符
int main()
{
	//int a = 10;
	//int b = 20;
	//a + b;//“+” 操作符 —— 双目操作符 —— 两个操作数

	//“!”逻辑反操作
	//C语言中表示真假
	// 0——表示假  
	//一切的非0 ——都表示真
	//int a = 10;
	//printf("%d\n", a);
	//printf("%d\n", !a);

	//“ + | - ” 正值 | 负值
	//int a = -2;
	//int b = -a;
	//int c = +3;//“+”正号通常都会省略

	//“sizeof” 操作数的类型长度（以字节为单位）
	//sizeof 计算的是变量or类型所占空间的大小，单位是字节
	//int a = 10;
	//printf("%d\n", sizeof(a));//4
	//printf("%d\n", sizeof(int));//4
	//printf("%d\n", sizeof a );//4
	//printf("%d\n", sizeof int);//sizeof的括号 变量名可以省略，变量不可省略

	int arr[10] = { 0 };//10个整型元素的数组
	int sz = 0;
	//10*sizeof(int) = 40
	printf("%d\n", sizeof(arr));
	//计算数组的元素个数
	//个数 = 数组总大小 / 每个元素的大小
	sz = sizeof(arr) / sizeof(arr[0]);
	printf("%d\n", sz);

	return 0;
}