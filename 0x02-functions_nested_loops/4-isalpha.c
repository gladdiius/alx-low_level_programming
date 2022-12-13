#include "main.h"

/**
 *_isalpha - check if a number is upper caser or lower
 *@c: number passed from main
 *Return: value 0 if not lowercase and 1 if uppercase
 */
int _isalpha(int c);
{
	int x;

	x = isalpha(c);
	if (x == 0)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
