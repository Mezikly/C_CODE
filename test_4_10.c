#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

//字符串就是双引号引起的一串字符
// 结束标志是转义字符\0，不算做字符串内容，但算作数组元素个数之一
//数组是一组相同类型的元素
int main()
{
	char arr[] = "hello";
	
	char arr1[] = { "abc" };
	char arr2[] = { 'a','b','c' };//改成{'a','b','c','\0'}下面打印时就不会出现乱码
	printf("%s\n", arr1);
	printf("%s\n", arr2);//从这里能感受到\0是结束标志，不结束会生成乱码
	//求一下字符串长度，需要引用头文件<string.h>
	strlen("abc");//string lenth,是求字符串长度的函数，长度值会返到strlen本身（长度不包括\0）
	int len = strlen("abc");
	printf("%d\n", len);
	printf("%d\n", strlen(arr1));
	printf("%d\n", strlen(arr2));//没结束符会出现随机值，说明往后数到第随机值位时找到了个\0

	return 0;
}