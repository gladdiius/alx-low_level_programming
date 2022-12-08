#include <stdio.h>
/**
 *main - it prints an array of characters.
 *Return: return 0
 */
int main(void)
{
	char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";

	int i = 0;

	while (str[i] != '\n' && str[i] != '\0')

	{
		putchar(str[i]);
		i++;
	}
	putchar('\n');
	return (1);
}
