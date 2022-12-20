#include "main.h"
/**
 *puts_half - print every other char of a sting
 *@str: argument 1
 *Return: void
 */
void puts_half(char *str)
{
	int len, len2;
	float l, middle;
	l = 2;
	len2 = strlen(str);
	middle = len2/l;

	if (middle == 0)
	{
		len = (strlen(str) / 2) ;
	}
	else
	{
		len = (strlen(str) / 2) + 1;
	}
	len2 = strlen(str) - 1;
	while (len <= len2)
	{
		printf("%c", str[len]);
		len++;
	}
	putchar('\n');
}
