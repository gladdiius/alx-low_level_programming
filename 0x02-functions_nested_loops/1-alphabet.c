#include "main.h"

/**
 *print_alphabet - print all alphabets
 *
 *Return: void
 */

void print_alphabet(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
