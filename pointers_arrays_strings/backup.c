#include "main.h"
#include <stdlib.h>

/**
 * _strcat - concatenates two strings
 * @dest: first string to be concatenated
 * @src: second string to be concatenated
 *
 * Return: string made up of two input strings
 */

char *_strcat(char *dest, char *src)
{
	int fullLen;
	int len_dest = 0;
	int len_src = 0;
	char *newStr;

	while (dest[len_dest] != '\0')
	{
		len_dest++;
	}
	len_dest--;

	while (src[len_src] != '\0')
	{
		len_src++;
	}

	fullLen = len_dest + len_src;

	newStr = malloc(fullLen);
	
	len_dest = 0;
	len_src = 0;
	while (dest[len_dest] != '\0')
	{
		newStr[len_dest] = dest[len_dest];
		len_dest++;
	}
	len_dest--;

	while (src[len_src] != '\0')
	{
		newStr[len_dest + len_src] = src[len_src];
		len_src++;
	}
	newStr[fullLen] = '\0';

	return (newStr);
}
