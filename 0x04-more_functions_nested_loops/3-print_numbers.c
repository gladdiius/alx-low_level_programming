/**
 * print_numbers - print 1 to 9
 * Return: void
 */

void print_numbers(void)
{
	int i = 0;

	while (i <= 9)
	{
		_putchar(i % 10 + '0');
		i += 1;
	}

	_putchar('\n');
}
