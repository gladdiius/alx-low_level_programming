#include "main.h"
/**
 *puts_half.c - print every other char of a sting
 *@str: argument 1
 *Return: void
 */
void puts_half(char *str)
{
	int x = 0;
	int len, len2;

	len = strlen(str)/2;
	len2 = strlen(str);
	while (len2 >= len)
	{
		printf("%c", str[x]);
		len2--;
	}
	putchar('\n');
}
