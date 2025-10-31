#include<stdio.h>



int sum_ptr_array(int* a[3], int lens[])
{
	int sum = 0;
	for (int i = 0; i <= 3; i++)
		for (int j = 0; j <= lens[i]; j++)
			sum += a[i][j];
	return sum;
}



int col_sum(int m, int n, int (*p)[4])
{
	int sum = 0;
	for (int i = 0; i < m; i++)
	{
		sum += p[i][1];
	}
	return sum;

}



int add(int a, int b)
{
	return a + b;
}
int sub(int a, int b)
{
	return a - b;
}
int calc(int (*op)(int add,int sub), int a, int b )
{
	return op(a, b);
}









int main()
{

	return 0;

}