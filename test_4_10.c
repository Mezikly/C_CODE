#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

//�ַ�������˫���������һ���ַ�
// ������־��ת���ַ�\0���������ַ������ݣ�����������Ԫ�ظ���֮һ
//������һ����ͬ���͵�Ԫ��
int main()
{
	char arr[] = "hello";
	
	char arr1[] = { "abc" };
	char arr2[] = { 'a','b','c' };//�ĳ�{'a','b','c','\0'}�����ӡʱ�Ͳ����������
	printf("%s\n", arr1);
	printf("%s\n", arr2);//�������ܸ��ܵ�\0�ǽ�����־������������������
	//��һ���ַ������ȣ���Ҫ����ͷ�ļ�<string.h>
	strlen("abc");//string lenth,�����ַ������ȵĺ���������ֵ�᷵��strlen�������Ȳ�����\0��
	int len = strlen("abc");
	printf("%d\n", len);
	printf("%d\n", strlen(arr1));
	printf("%d\n", strlen(arr2));//û��������������ֵ��˵���������������ֵλʱ�ҵ��˸�\0

	return 0;
}