#include "main.h"
/**
 * *_memcpy - fills memory with constant byte
 * @dest: pointer to the block of memory to fill
 * @src: the value to be set
 * @n: number of bytes to be set to the value
 * Return: copy of string
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	return (memcpy(dest, src, n));
}
