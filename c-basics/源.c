#include<stdio.h>


//int* func()
//{
//	int a = 10;
//	return &a;
//}


//void swap(int *p1, int *p2)
//{
//	int tmp = *p1;
//	*p1 = *p2;
//	*p2 = tmp;                      //ֱ�ӷ����ڴ��ַ���н���
//}




int main(void)
{
	
	//ָ�����
	
	//int a = 10;
	//int* p = &a;    //&Ϊȡ��ַ���ţ�pΪ����ָ�������ָ��pָ�������ͱ���a
	///*printf("%p\n", &a);
	//printf("%p\n", p);*/


	//char c = 'a';
	//char* pc = &c;
	//printf("%c\n", *pc);//*pc��ʾ����pc��ַ������ݡ���Ϊ������
	//
	////*pc = 'k';
	////printf("%c\n", *pc);
	////printf("%c\n", c);         //�ı�c�д洢

	//printf("%d\n", sizeof(pc));
	//printf("%d\n", sizeof(p));//��Сһ����ֻ�����ϵͳ�йأ���ָ�����ͣ�int char short���޹�


	//int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	//int* p = &arr[0];
	//printf("*p=%p\n", *p);
	//printf("*p+1=%p\n",* p + 1);       //+1����1*ָ�����͵��ֽ�������intΪ4���ֽ�
	//printf("arr[1]=%p\n", arr[1]);



	/*int n = 0x11223344;
	char* p = &n;
	printf("%x\n", *p); */ //�õ�44
	                       //��С��           11223344Ϊ��ˣ��͵�ַ�Ÿ�λ���ݣ�
	                                     //   44332211ΪС�ˣ��͵�ַ�ŵ�λ���ݣ�
                                         //   ����Ҹ�

  
										 
										 
										 
										 
										 
	//Ұָ��
	//int* p ;                             //��ʱpΪҰָ��
	//*p = 100;
	//printf("%d\n", *p);

	//int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	//int* p = &arr[10];
	//printf("%d\n",*p);//Խ�����


	//int* ret = func();
	//printf("%d\n", *ret);//������������
	                     //���뺯��ʱ��a�������졣��������ʱ���������٣����ڴ汻����



	/*int a = 10;
	int b = 20;
	swap(&a, &b);
	printf("a=%d,b=%d\n",a,b);*/


	////ָ������------����
	//int a = 10;
	//int b = 20;
	//int c = 30;
	//int* arr[] = {&a,&b,&c};
	//printf("%d\n", *(arr + 1));
	//printf("%d\n",**(arr + 1));



	////����ָ��---------ָ��

	//int arr1[] = {1,2,3,4};
	//int* p1 = arr1;
	//int(*p2)[4] = &arr1;
	//printf("%d\n",p1);
	//printf("%d\n", p1 + 1);           //����ĸ��ֽ�
	//printf("==============\n");
	//printf("%d\n", p2);
	//printf("%d\n", p2 + 1);           //������������ֽ�




	//int a[] = { 1,2,3,4 };
	//printf("%d\n", sizeof(a));//��ǰ���������С
	//printf("%d\n", sizeof(a+1));//��ַ8�ֽ�
	//printf("%d\n", sizeof(a[1]));//����4
	//printf("%d\n", sizeof(&a));
	//printf("%d\n", sizeof(&a+1));
	//printf("%d\n", sizeof(&a[0]));
	//printf("%d\n", sizeof(&a[0]+1));

	char* a[] = { "work","at","alibaba"};//ָ�����飬���char*���͵����飬������ǵ�ַ
	char** pa = (char**)a;//����������ʾ������Ԫ�ص�ַ����Ԫ�ر���Ϊ��ַ��ʹ�ö���ָ��
	pa++;
	printf("%s\n", *pa);
















	return 0;
}