#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include "main.h"

#define BUFFER_SIZE 1024

/**
 * main - copies file contents to specified file
 * @argc: number of args
 * @argv: arg array (copies from argv[1] to argv[2])
 *
 * Return: 0 on success, 97 wrong arg num, 98 problem opening file origin
 * 99 problem writing file contents, 100, problem closing file
 */

int main(int argc, char *argv[])
{
	int fd_to, fd_from, nRead, nWrite;
	char buf[BUFFER_SIZE];
	char *file_from, *file_to;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	file_from = argv[1];
	file_to = argv[2];

	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO,
		"Error: Can't read from file %s\n", file_from);
		exit(98);
	}

	fd_to = open(file_to, O_WRONLY | O_CREAT | O_APPEND | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		exit(99);
	}

	while ((nRead = read(fd_from, buf, BUFFER_SIZE)) > 0)
	{
		nWrite = write(fd_to, buf, nRead);
		if (nWrite == -1)
		{
			dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file_to);
			exit(99);
		}
	}

	if (close(fd_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
		exit(100);
	}
	if (close(fd_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
		exit(100);
	}

	return (0);
}
