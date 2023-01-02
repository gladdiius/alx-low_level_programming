#include "main.h"
/**
 * _strspn - check if a string is in set of specified segment
 * @s: string
 * @accept: string
 * Return: int
 */
unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}
