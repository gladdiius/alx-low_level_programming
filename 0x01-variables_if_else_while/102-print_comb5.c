#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
/**
 * main - prints specific numbers form 00 01 to 98 99
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
		if (!(array[i] == 0 && array[j] == 0))
		{

		putchar((array[k] % 10) + '0');
		putchar((array[l] % 10) + '0');
		putchar(' ');
		putchar((array[i] % 10) + '0');
		putchar((array[j] % 10) + '0');

		if(!(array[k]==9 && array[l]==8))
		{
		putchar(',');
		putchar(' ');
		}
		}
		
	}
	}
	}
	}
	putchar('\n');
	return (0);
}
