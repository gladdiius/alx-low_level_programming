#include "main.h"
/**
 *puts_half.c - print every other char of a sting
 *@str: argument 1
 *Return: void
 */
void puts_half(char *str)
{
	int x = 0;
	int len;

	len = strlen(str)/2;
	while (x < len)
	{
		printf("%c", str[x]);
		x ++;
	}
	putchar('\n');
}
