#include "main.h"
/**
 *_puts_recursion - prints a string
 *
 *@s: string to  be printed
 *
 * Return: void
 */
void _puts_recursion(char *s)
{
	char j;
	int i = 0;

	
	j = s[i];
	i++;
	_putchar(j);
	if(j != '\0')
	{
	_puts_recursion(s);
	]
	return j;
	

}
