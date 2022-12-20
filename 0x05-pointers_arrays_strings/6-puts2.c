#include "main.h"
/**
 *puts2 - print every other char of a sting
 *@str: argument 1
 *Return: void
 */
void puts2(char *str)
{
	int x = 0;
	int len;
	
	len = strlen(str);
	while (x < len)
	{
		printf("%c",str[x]);
		x += 2;
	}
	putchar('\n');
}
