#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int du_ck = 1;

//一个.c文件定义一个全局变量，另一个.c文件要使用这个全局变量要声明一下变量(extern int 变量;）注意分号。
//声明者为使用者，即调用另一个.c文件中定义的变量。注意对象