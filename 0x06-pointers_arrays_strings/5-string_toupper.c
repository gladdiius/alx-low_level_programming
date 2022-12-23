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
	char *j;
	while( i < size && x[i] != '\0')
	{
		j = &x[i];
		*j = toupper(x[i]);
		i++;
	}
	return x;
}
