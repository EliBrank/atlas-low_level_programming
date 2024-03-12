#include <unistd.h>
#include <fcntl.h>
#include "main.h"

#define BUFFER_SIZE 1024

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	char *file_from = argv[1];
	char *file_to = argv[2];
	int fd, nRead, nWrite;
	char buf[BUFFER_SIZE];

	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
	{
		dprint(STDERR_FILENO,
		"Error: Can't read from file %s\n", file_from);
		exit(98);
	}

	fd_to = open(file_to, O_WRONLY | O_APPEND | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		dprint(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		exit(99);
	}

	while ((nRead = read(fd, buf, BUFFER_SIZE)) > 0)
	{
		nWrite = write(
}
