#include<stdio.h>
//union Un1
//{
//	char c[5];//5�ֽ�
//	int i;//4�ֽ�
//};
//
//union Un2
//{
//	short c[7];//2x7  14���ֽ�
//	int i;//4���ֽ�
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

	//printf("%d\n", sizeof(union Un1));//���8
	//printf("%d\n", sizeof(union Un2));//16

	
	
	/*�������������жϴ�С��*/
	//С�ˣ��͵�ַ����ֽڣ� ��ˣ��͵�ַ����ֽ�
	
	//����1С
	
	int ret = check();
	if (ret == 1)
		printf("С��");
	else
	    printf("���");


	printf("%d\n", sizeof(union Un1));







	return 0;
}