#include <string.h>
#include <stdio.h>
/**
 *print_rev - prints reversed string
 *@s: argument 1
 *Return: void
 */

void print_rev(char *s)
{
	int x;

	x = strlen(s);
	while(x >= 0)
	{
		if(s[x] != '\0')
			printf("%s",s[x]);
		putchar('\n');
		x -= 1;
	}
}
