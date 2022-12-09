#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints lower and upper case alpabates
 *
 * Return: value 0
 *
 **/

int main(void)
{
	char alpa;

	for (alpa = 'a'; alpa <= 'z'; alpa++)
	{
	putchar(alpa);
	}
	for (alpa = 'A'; alpa <= 'Z'; alpa++)
	{
		putchar(alpa);
	}
	putchar('\n');
	return (0);
}
