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
	ssize_t c;
	int fd;
	char *ptr;

	fd = open(filename, O_RDONLY);

	ptr = malloc(sizeof(char) * letters);

	read(fd, ptr, letters);
	c = write(STDOUT_FILENO, ptr, letters);

	close(fd);
	free(ptr);
	return (c);
}
