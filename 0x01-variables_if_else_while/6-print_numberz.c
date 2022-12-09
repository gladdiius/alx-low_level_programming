#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints number from 0 to 9
 *
 * Return: value 0
 *
 **/

int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
	putchar((num % 10) + '0');
	}
	putchar('\n');
	return (0);
}
