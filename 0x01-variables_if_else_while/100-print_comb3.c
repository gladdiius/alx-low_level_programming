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
	
	for (j = 0; j < 9; j++)
	{
	for (i = 1; i <= 9; i++)
	{
		putchar((j % 10) + '0');
		putchar((i % 10) + '0');
		if (i != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	}
	putchar('\n');
	return (0);
}
