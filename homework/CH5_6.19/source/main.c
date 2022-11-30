#include<stdio.h>
#include<stdlib.h>


int dice1, dice2, number;
int diceNumber[12] = { 0 };
int dice[6][6];

main()
{
	int i, j;
	for (i = 0; i < 36000; i++)
	{
		dice1 = rand()%6+1;
		dice2 = rand()%6+1;
		number = dice1 + dice2;
		for (j = 2; j <= 12; j++)
		{
			if (j == number)
			{
				diceNumber[j]++;
			}
		}
	}

	for (j = 2; j <= 12; j++)
	{
		printf("diceNumber[%d] = %d\n", j, diceNumber[j]);
	}
	printf("\n");
	system("pause");
	return 0;
}






//printf("%d\n", dice1);
//dice[dice1][dice2] = dice1+dice2;