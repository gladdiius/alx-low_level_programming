#include <unistd.h>
/**
 *
 *main - calls _putchar to print str
 *
 *Return: value 0
 *
 */
int _putchar(char c); 
int main(void)
{
	char str[] = "_putchar\n";
	int i = 0;

	while (str[i] != '\0' && str[i] != '\n')
	{
		_putchar(str[i]);
	}
	return 0;
}

/**
 *
 ** _putchar - writes the character c to stdout
 *
 ** @c: The character to print
 *
 **
 *
 ** Return: On success 1.
 *
 ** On error, -1 is returned, and errno is set appropriately.
 *
 **/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
