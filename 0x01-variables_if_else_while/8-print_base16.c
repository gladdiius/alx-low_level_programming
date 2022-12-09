#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints lower case alpabates
 *
 * Return: value 0
 *
 **/

int main(void)
{
	char uppercase[]={'A','B','C','D','E','F'};
	int  number[]={0,1,2,3,4,5,6,7,8,9};
	int i;
	char lowercase;

	for (i = 0; i <= 10; i++)
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
