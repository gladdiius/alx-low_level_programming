#include "main.h"
/**
 **string_toupper - conver a string to uppercase
 *
 *@x:char
 *
 *Return: void
 */
char *string_toupper(char *x)
{
	int i, size = sizeof(x) / sizeof(x[0]);
	char *j, f;

	while (i < size && x[i] != '\0')
	{
		for (f = 'A' ; f <= 'Z' ; f++)
		{
			if ((x[i] - f) == 32)
			{
				j = &x[i];
				*j = f;
			}
		}
		i++;
	}
	return (x);
}
