#include "main.h"
/**
 * _isupper - check if a number is upppercase or lowercase
 * c:is an intiger
 * Return: return 1 if uppercase else 0
 */

int _isupper(int c)
{
	int x;

	x = isupper(c);
	if (x == 2)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
