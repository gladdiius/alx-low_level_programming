/**
 **string_toupper - convert string to uppercase
 *@x: first argument
 *Return: char
 */

char *string_toupper(char *x)
{
	int i = 0;

	while (x[i])
	{
		if (x[i] >= 97 && x[i] <= 122)
		{
			x[i] = x[i] - 32;
		}
		i++;
	}
	return (x);
}
