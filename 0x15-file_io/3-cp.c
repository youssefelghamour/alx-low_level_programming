#include "main.h"

/**
 * main - copies the content of a file to another file
 *
 * @ac: number of arguments
 * @av: arguments
 *
 * Return: Always 0
 */

int main(int ac, char **av)
{
	int file_from, file_to, len = 0;
	char buffer[1024];

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = open(av[1], O_RDONLY);
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	file_to = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while ((len = read(file_from, buffer, sizeof(buffer))) > 0)
	{
		if ((write(file_to, buffer, len)) != len)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
			close(file_from);
			close(file_to);
			exit(99);
		}
	}
	if (close(file_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	else if (close(file_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
		exit(100);
	}

	return (0);
}
