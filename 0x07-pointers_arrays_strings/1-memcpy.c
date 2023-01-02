#include <main.h>
/**
 * *_memcpy - fills memory with constant byte
 * @s: pointer to the block of memory to fill
 * @b: the value to be set
 * @n: number of bytes to be set to the value
 * Return: the new char in memory
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	return (memcpy(dest, src, strlen(src)+1 ));
}
