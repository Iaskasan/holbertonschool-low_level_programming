#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: name of the file to read
 * @letters: number of letters it should read and print
 * Return: actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, n;

	if (filename == NULL)
		return (0);

	fd = open("filename", O_RDONLY);
	n = read(fd, letters);
	write(1, fd, n);
	return (n);
}
