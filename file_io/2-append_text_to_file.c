#include <unistd.h>
#include <fcntl.h>
#include "main.h"

/**
 * append_text_to_file - appends text to a file
 * @filename: file to receive appended text
 * @text_content: text to be appended
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, nWrite, contentLen;

	contentLen = _strlen(text_content);

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (contentLen != 0)
		nWrite = write(fd, text_content, contentLen);

	if (nWrite == -1)
		return (-1);

	if (close(fd) == -1)
		return (-1);

	return (1);
}

/**
 * _strlen - returns the length of a string
 * @s: input string
 *
 * Return: string length
 */
int _strlen(char *s)
{
	int len = 0;

	if (s == NULL)
		return (0);

	while (*s != '\0')
	{
		len++;
		s++;
	}

	return (len);
}
