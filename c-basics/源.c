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
//	*p2 = tmp;                      //直接访问内存地址进行交换
//}




int main(void)
{
	
	//指针初阶
	
	//int a = 10;
	//int* p = &a;    //&为取地址符号，p为整形指针变量，指针p指向了整型变量a
	///*printf("%p\n", &a);
	//printf("%p\n", p);*/


	//char c = 'a';
	//char* pc = &c;
	//printf("%c\n", *pc);//*pc表示访问pc地址里的内容。成为解引用
	//
	////*pc = 'k';
	////printf("%c\n", *pc);
	////printf("%c\n", c);         //改变c中存储

	//printf("%d\n", sizeof(pc));
	//printf("%d\n", sizeof(p));//大小一样，只与操作系统有关，与指针类型（int char short）无关


	//int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	//int* p = &arr[0];
	//printf("*p=%p\n", *p);
	//printf("*p+1=%p\n",* p + 1);       //+1代表1*指针类型的字节数（如int为4个字节
	//printf("arr[1]=%p\n", arr[1]);



	/*int n = 0x11223344;
	char* p = &n;
	printf("%x\n", *p); */ //得到44
	                       //大小端           11223344为大端（低地址放高位数据）
	                                     //   44332211为小端（低地址放低位数据）
                                         //   左低右高

  
										 
										 
										 
										 
										 
	//野指针
	//int* p ;                             //此时p为野指针
	//*p = 100;
	//printf("%d\n", *p);

	//int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	//int* p = &arr[10];
	//printf("%d\n",*p);//越界访问


	//int* ret = func();
	//printf("%d\n", *ret);//函数生命周期
	                     //进入函数时，a变量创造。函数结束时，变量销毁，即内存被回收



	/*int a = 10;
	int b = 20;
	swap(&a, &b);
	printf("a=%d,b=%d\n",a,b);*/


	////指针数组------数组
	//int a = 10;
	//int b = 20;
	//int c = 30;
	//int* arr[] = {&a,&b,&c};
	//printf("%d\n", *(arr + 1));
	//printf("%d\n",**(arr + 1));



	////数组指针---------指针

	//int arr1[] = {1,2,3,4};
	//int* p1 = arr1;
	//int(*p2)[4] = &arr1;
	//printf("%d\n",p1);
	//printf("%d\n", p1 + 1);           //相差四个字节
	//printf("==============\n");
	//printf("%d\n", p2);
	//printf("%d\n", p2 + 1);           //相差整个数组字节




	//int a[] = { 1,2,3,4 };
	//printf("%d\n", sizeof(a));//当前数组整体大小
	//printf("%d\n", sizeof(a+1));//地址8字节
	//printf("%d\n", sizeof(a[1]));//整型4
	//printf("%d\n", sizeof(&a));
	//printf("%d\n", sizeof(&a+1));
	//printf("%d\n", sizeof(&a[0]));
	//printf("%d\n", sizeof(&a[0]+1));

	char* a[] = { "work","at","alibaba"};//指针数组，存放char*类型的数组，但存的是地址
	char** pa = (char**)a;//数组名，表示数组首元素地址，首元素本身为地址，使用二级指针
	pa++;
	printf("%s\n", *pa);
















	return 0;
}