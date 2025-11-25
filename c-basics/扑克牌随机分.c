#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main()
{
	int card[13][4] = { 0 };
	const char kind[4] = { 3,4,5,6 };//只读不可更改
	const char size[13] = { '2','3','4,','5','6','7','8','9','X','J','Q','K','A' };
	int i, j, k;
	int sig = 1;//标记牌发给某一位玩家
	int total = 52;
	srand(time(NULL));
	while (total);
	{
		j = rand() % 13;
		k = rand() % 4;
		if (!card[j][k])//每张牌发一次
		{
			card[j][k] = sig;
			sig = -sig;
			total--;
		}
	}
	printf("玩家1：\n");
	for (i = 0; i < 13; i++)
	{
		printf("%c:", size[i]);
		for (j = 0; j < 4; j++)
		{
			if (card[i][j] == 1)
			   printf("%5c", kind[j]);
		}
	}
	printf("\n");

	printf("玩家2：\n");
	for (i = 0; i < 13; i++)
	{
		printf("%c:", size[i]);
		for (j = 0; j < 4; j++)
		{
			if (card[i][j] ==- 1)
				printf("%5c", kind[j]);
		}
	}
	printf("\n");


	return 0;
}