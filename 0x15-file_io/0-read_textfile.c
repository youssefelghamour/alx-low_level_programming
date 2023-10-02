#include "main.h"

/**
 * read_textfile - reads a text file and prints the letters
 *
 * @filename: filename
 * @letters: numbers of letters printed
 *
 * Return: numbers of letters printed. 0 if it fails
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t nbytes;
	char *buffer;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);

	if (!buffer)
		return (0);

	nbytes = read(fd, buffer, letters);
	nbytes = write(STDOUT_FILENO, buffer, nbytes);

	close(fd);

	free(buffer);

	return (nbytes);
}
