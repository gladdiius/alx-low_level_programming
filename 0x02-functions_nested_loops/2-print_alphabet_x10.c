#include "main.h"


/**
 *print_alphabet_x10 - prints 10 times the alpahbet in lowercase
 *
 *
 *Return: value void
 *
 */

void print_alphabet_x10(void)
{
	int j;
	for (j = 0; j <= 9; j++)
	{
		char n;
		for(n = 'a'; n <= 'z'; n++)
		{
			_putchar(n);
		}
		_putchar('\n');
	}
}
