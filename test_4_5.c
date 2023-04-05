#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	/*printf("%d\n",sizeof(char));
	printf("%d\n", sizeof(long));*/
	/*int hymdfm = 2;
	hymdfm = hymdfm-2;
	printf("%d\n", hymdfm);*/
	int a = 1;
	int b = 1;
	int sum = 0;
	scanf("%d %d", &a, &b);
	sum = a + b;
	printf("sum =%d", sum);
	return 0;
}