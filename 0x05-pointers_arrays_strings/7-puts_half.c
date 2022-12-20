#include "main.h"
/**
 *puts_half.c - print every other char of a sting
 *@str: argument 1
 *Return: void
 */
void puts_half(char *str)
{
	int len, len2;

	len = strlen(str)/2;
	len2 = strlen(str) - 1;
	while (len2 >= len)
	{
		printf("%c", str[len2]);
		len2--;
	}
	putchar('\n');
}
