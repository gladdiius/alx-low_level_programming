#include "main.h"



/**
 ** main - check the code
 *
 **
 *
 ** Return: Always 0.
 *
 **/

int main(void)

{
	print_alphabet();
	_putchar('\n');
	return (0);
}

void print_alphabet(void)
{
	char a;
	for(a='a'; a>='z'; a++)
	{
		_putchar(a);
	}
}
