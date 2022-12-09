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
	int i;
	for (i = 0; i <= 9; i++)
	{
		putchar((i % 10) + '0');
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
