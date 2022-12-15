#include "main.h"

/**
 * _isupper - check if a number is upppercase or lowercase
 * @c: is an intiger
 * Return: return 1 if uppercase else 0
 */

int _isupper(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (0);
	}

	else
	{
		return (1);
	}
}
