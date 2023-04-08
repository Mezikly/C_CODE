#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
extern int du_ck;//这声明引用的是4_8_add.c里面定义的int du_ck= 1;
//int main()
//{
//	
//	printf("du_ck=%d\n", du_ck);
//	{
//	
//		printf("du_ck=%d\n", du_ck);
//	}
//	printf("wxigcaechangujanlhunlv\n");
//	return 0;
//}
//生命周期即创建至销毁的执行时间段，多数时候为当前所处函数段。
//局部变量进入局部范围到出局部结束
//全局函数的就是程序的生命周期（main）


//常量
//1.字面常量
//(1)10直接算一个字面常量（整形），22.4也算一个（浮点型）。
//(2)字符常量（字符串常量）'a';'chauinodh'......
//2.const修饰的常变量----const表示不可变的
//单纯输入num = 1此时num为变量（因为可改变）改为const int num = 1此时称num为常变量（具有常属性，不可变的属性）
// 本质还是变量，只是被const修饰，例：
//int arr[10] = { 0,13,34,41 }; 这样可行
//const int n = 10;
//int arr2[n] = { 0,13,34,41 };这样不可行
//3.define修饰的标识符常量（给一串字符定义为一个常量）例子：
//#define DUCK 10000
//int n = DUCK;
//int main()
//{
//	printf("n=%d\n", n);
//	return 0;
//}
//4.枚举常量--可以一一列举的常量
//关键字enum，格式：
enum Sex
{
	//这种枚举类型常量的未来可能取值
	MALE=1,//这里是在赋初值
	FEMALE,
	武装直升机
};

int main()
{
	enum Sex sb= 武装直升机;//赋予sb以武装直升机的Sex
	printf("%d\n", MALE);
	printf("%d\n", FEMALE);
	printf("%d\n", 武装直升机);
	return 0;
};