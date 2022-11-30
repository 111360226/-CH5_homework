#include <stdio.h>
#include <stdlib.h>

int a[5] = {2,7,6,9,3};
int x;
int switchFlag = 0;

main()
{
	int i;
	printf("a[5] = {2,7,6,9,3}\n");
	while (switchFlag != 1)
	{
		switchFlag = 1;
		for (i = 0; i < 4; i++)
		{
			if (a[i] < a[i + 1])
			{
				x = a[i];
				a[i] = a[i + 1];
				a[i + 1] = x;
				switchFlag = 0;
			}

		}
	}
	printf("The maximun number is %d\n\n", a[0]);
	/*
	for (i = 0; i <= 4; i++)
	{
		printf("a[%d] = %d\n", i, a[i]);
	}
	*/
	system("pause");
	return 0;
}