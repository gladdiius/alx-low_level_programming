#include "main.h"

/**
 * *_strncpy - copy n chars from a sting
 * @dest: string
 * @src: string
 * @n: int
 * Return: char
 */
char *_strncpy(char *dest, char *src, int n)
{
	return (strncpy(dest, src, n));
}
