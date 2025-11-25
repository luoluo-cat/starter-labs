//矩阵转置

#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#define ROW 3//原始矩阵行数
#define COL 4//原始矩阵列

int main()
{
	//矩阵转置
	int array_a[ROW][COL];
	int array_b[COL][ROW];
	int i, j;
	srand(time(NULL));   //系统时钟作为随机数种子
	for (i = 0; i < ROW; i++)
	{
		for (j = 0; j < COL; j++)
		array_a[i][j] = rand() % 100 + 1; //生成[1,100]的随机数
	}
	printf("之前的矩阵\n");
	for (i = 0; i < ROW; i++)
	{
		for (j = 0; j < COL; j++)
		{
			printf("%4d", array_a[i][j]);
		}
		printf("\n");
	}
	for (i = 0; i < COL; i++)
	{
		for (j = 0; j < ROW; j++)
		{
			array_b[i][j] = array_a[j][i];
		}
	}
	printf("转置之后\n");
	for (i = 0; i < COL; i++)
	{
		for (j = 0; j < ROW; j++)
		{
			printf("%4d", array_b[i][j]);
		}
		printf("\n");
	}




	return 0;
}