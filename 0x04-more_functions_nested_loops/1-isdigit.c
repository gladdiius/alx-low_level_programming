#include "main.h"

/**
 * _isupper - check if an input is a digit
 * @c: is an intiger
 * Return: return 1 if digit else 0
 */

int _isdigit(int c)
{
	int x;

	x = isdigit(c);
	if (x != 0)
	{
		return (1);
	}

	else
	{
		return (0);
	}
}
