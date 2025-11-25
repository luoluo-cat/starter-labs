//#include<stdio.h>
//void DrawTriangle(int n, char c)
//{
//	int i, j;
//	for (i = 1; i <= n; i++) {
//		for (j = 1; j <= n - i; j++) {
//			printf(" ");
//		}
//		for (j = 1; j <= 2 * i - 1; j++) {
//			printf("%c", c);
//		}
//		printf("\n");
//	}
//}

//int is_prime(int n)
//{
//	int isprime = 1;
//	int i=1;
//	int num = 0;
//	for (i = 2; i < n; i++) {
//		if (n % i == 0) {
//			num++;
//			isprime = 0;
//			break;
//		}
//	}
//	return isprime;
//}
//int main() {
//    int count = 0;
//    int num = 4;
//    int max_num = 2000;
//
//    while (num <= max_num) {
//        int p;
//        if (num == 4) {
//            p = 2;
//        }
//        else {
//            p = 3;
//        }
//
//        while (p <= num / 2) {
//            if (is_prime(p) && is_prime(num - p)) {
//                printf("%4d=%4d+%4d", num, p, num - p);
//                count++;
//                if (count % 4 == 0) {
//                    printf("\n");
//                }
//                else {
//                    printf(" ");
//                }
//                break;
//            }
//            p += (p == 2) ? 1 : 2;
//        }
//        num += 2;
//    }
//
//    if (count % 4 != 0) {
//        printf("\n");
//    }
//
//    return 0;
//}
//
//#include<stdio.h>
//int a = 1;
//int f(int a)
//{
//    auto int b = 2;
//    static int c = 3;
//    a = a + 1;
//    b = b + 1;
//    c = c + 1;
//    return (a + b + c);
//}
//int main()
//{
//    int i;
//    for (i = 0; i < 3; i++)
//    {
//        a = a + 2;
//        printf("%d \n", f(a));
//    }
//    return 0;
//}
//#include<stdio.h>​
//int main()
//{
//	int month_day[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
//	int year=0;
//	int day;
//	int month;
//	int sum=0;
//	printf("请输入年月日：");
//	scanf_s("%d-%d-%d", &year, &month, &day);
//	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
//		month_day[1] = 29;
//	else
//		month_day[1] = 28;
//
//	int i;
//	for (i = 0; i < month-1; i++)
//		sum += month_day[i];
//	sum += day;
//	printf("%d\n", sum);
//
//	return 0;
//}

//#include<stdio.h>
//int fun(int a, int b, int r[])
//{
//	int i = 0;
//	int n = 0;
//	for (n = a; n <= b; n++) {
//		if ((n % 7 == 0 || n % 11 == 0) && !(n % 7 == 0 && n % 11 == 0)) {
//			r[i] = n;
//			i++;
//		}
//		    
//	}
//	return i;
//}
//int main()
//{
//	int a;
//	int b;
//	int t[1000];
//	scanf_s("%d%d", &a, &b);
//	int num = fun(a, b, t);
//	for (int i = 0; i < num; i++) {
//		printf("%d", t[i]);
//		if (i < num - 1)
//			printf(" ");
//	}
//	printf("\n");
//
//	return 0;
//}

#include<stdio.h>
int main()
{
	int n;
	int arr[10];
	int sum = 0, max, min;
	int num1 = 0;
	int num2 = 0;
	for (int i = 0; i <10; i++)
	{
		scanf_s("%d", &arr[i]);
	}
	max = min = arr[0];
	for (int i = 0; i < 10; i++)
	{
		sum += arr[i];
		if (arr[i] >max) {
			max = arr[i];
			
		}
		if (arr[i] < min) {
			min = arr[i];
			
		}
	}
	for (int i = 0; i < 10; i++)
	{
		if (arr[i] == max)
		{
			num1 += 1;
		}	
	}
	for (int i = 0; i < 10; i++)
	{
		if (arr[i] == min)
		{
			num2 += 1;
		}
	}
	
	double avg = (double)(sum - (num1*max) - (num2*min)) / (10 - num1-num2);
	printf("%lf\n", avg);
	


	return 0;
}
