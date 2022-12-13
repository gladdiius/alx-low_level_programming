#include "main.h"

/**
 *_islower - check if a number is upper caser or lower
 *@c: number passed from main
 *Return: value 0 if not lowercase and 1 if uppercase
 */
int _islower(int c)
{
	int x;

	x = islower(c);
	if (x == 0)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
