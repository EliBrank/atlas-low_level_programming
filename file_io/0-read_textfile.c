#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - reads text file and prints to standard output
 * @filename: name of file to read
 * @letters: number of letters to read and print
 *
 * Return: number of letters able to be read, printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, nRead, nWrite;
	char *buf;

	buf = malloc(sizeof(char) * letters + 1);
	if (buf == NULL)
		return (0);

	if (filename == NULL)
	{
		free(buf);
		return (0);
	}

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buf);
		return (0);
	}

	nRead = read(fd, buf, letters);
	if (nRead == -1)
	{
		free(buf);
		return (0);
	}

	nWrite = write(STDOUT_FILENO, buf, nRead);
	if (nWrite == -1)
	{
		free(buf);
		return (0);
	}

	if (close(fd) == -1)
	{
		free(buf);
		return (0);
	}

	free(buf);
	return (nWrite);
}
