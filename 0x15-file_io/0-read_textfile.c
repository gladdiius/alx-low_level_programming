#include "main.h"
/**
 * read_textfile - reads a text file and prints it to
 * the POSIX standard output.
 * @filename: pointer to the name of the file to be read and printed
 * @letters: number of letters to be printed
 * Return: the number of letters printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t c, n;
	int fd;
	char *ptr;

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	ptr = malloc(sizeof(char) * letters);

	n = read(fd, ptr, letters);
	c = write(STDOUT_FILENO, ptr, n);

	close(fd);
	free(ptr);
	return (c);
}
