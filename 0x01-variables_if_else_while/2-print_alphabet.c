#include <stdlib.h>
#include <stdio.h>

/**
 *
 *main - prints lower case alpabates
 *
 *Return: value 0
 *
 **/

int main(void)
{
	char alpa;

	for (alpa = 'a'; alpa <= 'z'; alpa++)
	{
		putchar(alpa);
		
	}
	putchar('\n');
	return (0);
}
