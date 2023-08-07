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
#define BUFFER 1000
	char buf[BUFFER];
	ssize_t n;
	int fd;

	fd = open(filename, O_RDONLY);
	n = read(fd, &buf, letters);
	write(STDOUT_FILENO, buf, n);
	close(fd);
	return (n);
}
