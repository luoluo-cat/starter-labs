#include<stdio.h>
//union Un1
//{
//	char c[5];//5字节
//	int i;//4字节
//};
//
//union Un2
//{
//	short c[7];//2x7  14个字节
//	int i;//4个字节
//};
//int check()
//{
//	int n = 0x11223344;
//	char* pc = &n;
//	if (*pc == 0x44)
//		return 1;
//	return 0;
//}

union Un1
{
	struct Stu
	{
		char name[20];
		int age[10];
	};
	int i;

};


int check()
{
	union Un
	{
		char c;
		int i;
	}un;

	un.i = 1;
	return un.c;
}






int main()
{

	//printf("%d\n", sizeof(union Un1));//结果8
	//printf("%d\n", sizeof(union Un2));//16

	
	
	/*不利用联合体判断大小端*/
	//小端，低地址存低字节； 大端，低地址存高字节
	
	//返回1小
	
	int ret = check();
	if (ret == 1)
		printf("小端");
	else
	    printf("大端");


	printf("%d\n", sizeof(union Un1));







	return 0;
}