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
	int res, fd1, fd2, len = 0;
	char buffer[1024];

	if (ac != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd1 = open(av[1], O_RDONLY);
	if (fd1 == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	fd2 = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while ((len = read(fd1, buffer, sizeof(buffer))) > 0)
	{
		if ((write(fd2, buffer, len)) != len)
		{
			dprintf(2, "Error: Can't write to %s\n", av[2]);
			close(fd1);
			close(fd2);
			exit(99);
		}
	}
	if (close(fd1) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd1);
		exit(100);
	}
	else if (close(fd2) == -1)
	{
		printf(2, "Error: Can't close fd %d\n", fd2);
		exit(100);
	}

	return (0);
}
