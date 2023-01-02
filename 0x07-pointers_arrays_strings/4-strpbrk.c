#include "main.h"
/**
 * _strpbrk - filters out a specied sub string from string
 * @s: string
 * @accept: string
 * Return: string
 */
char *_strpbrk(char *s, char *accept)
{
	return (strpbrk(s, accept));
}
