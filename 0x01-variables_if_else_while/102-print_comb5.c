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
	int j, i, k, l;
	int array[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	for (k = 0; k <= 9; k++)
	{
	for (l = 0; l <= 9; l++)
	{
	for (i = 0; i <= 9; i++)
	{
	for (j = 0; j <= 9; j++)
	{
		if (!(array[i] == 0 && array[j] == 0) && (array[l] != 9))
		{
		putchar(' ');
		putchar((array[k] % 10) + '0');
		putchar((array[l] % 10) + '0');
		putchar(' ');
		putchar((array[i] % 10) + '0');
		putchar((array[j] % 10) + '0');
		if (array[i] != 8)
		{
		putchar(',');
		}
		}
	}
	}
	}
	}
	putchar('\n');
	return (0);
}
