# include <stdio.h>
# include <stdlib.h>

void stringReverse(char *str)
{
	if (*str)
	{
		stringReverse(str + 1);
		printf("%c", *str);
	}
}

int main()
{
	char a[] = "abcdefg";
	printf("  abcdefg <=> ");
	stringReverse(a);
	printf("\n");
	return 0;
}