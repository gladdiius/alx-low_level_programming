#include "main.h"
/**
 *create_array -creats an arrray
 *@size: unsigned int
 *@c: character
 *Return: char
 */

char *create_array(unsigned int size, char c)
{

	int i = 0;
	char *ar;

	if (size == 0)
	{
		return NULL;
	}
	ar = malloc(size * sizeof(c));
	while (i < size)
	{
		*(ar + i) = c;
		i++;
	}
	return ar;
}
