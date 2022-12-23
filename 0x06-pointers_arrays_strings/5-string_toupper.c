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
	int i = 0;
	while(x[i])
	{
		if (x[i] >= 97 && x[i] <= 122)
			x[i] = x - 32;
		i++;
	}
	return (x);
}
