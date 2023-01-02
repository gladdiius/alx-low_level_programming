#include <main.h>
/**
 * *_memset - fills memory with constant byte
 * @s: pointer to the block of memory to fill
 * @b: the value to be set
 * @n: number of bytes to be set to the value
 * Return: the new char in memory
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return s;
}
