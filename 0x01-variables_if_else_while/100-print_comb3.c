#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
/**
 * main - prints all number form 0 to 9 separated by comma
 *
 * Return: value 0
 *
 **/

int main(void)
{
	int j;
	int i;
	int array[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

	for (i = 0; i < 10; i++)
	{
	for (j = 0; j <= 8; j++)
	{
		if (array[j] != array[i] && array[j] - array[i] > 0)
		{
		putchar((array[i] % 10) + '0');
		putchar((array[j] % 10) + '0');
		if (i != 9)
		{
			putchar(',');
			putchar(' ');
		}
		}
	}
	}
	putchar('\n');
	return (0);
}
