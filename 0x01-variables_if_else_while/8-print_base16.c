#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
/**
 * main - prints all number of base 16 in lower-case
 *
 * Return: value 0
 *
 **/

int main(void)
{
	char uppercase[] = {'A', 'B', 'C', 'D', 'E', 'F'};
	int  number[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int i;
	char lowercase;

	for (i = 0; i <= 9; i++)
	{
		putchar((number[i] % 10) + '0');
	}
	for (i = 0; i <= 5; i++)
	{
	lowercase = tolower(uppercase[i]);
	putchar(lowercase);
	}
	putchar('\n');
	return (0);
}
