/**
 * *memset - fills memory with constant byte
 * @*s - pointer to the block of memory to fill
 * @b - the value to be set
 * @n - number of bytes to be set to the value
 *
 */
char *_memset(char *s, char b, unsigned int n)
{
	return (memset(s, b, n));
}
