#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: string to search through
 * @needle: substring to search for
 *
 * Return: pointer to beginning of located substring
 */

char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;
	char *p;

	j = 0;
	p = 0;
	if (needle[0] == '\0')
	{
		return (haystack);
	}
	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[j])
		{
			if (needle[j + 1] == '\0')
			{
				p = &haystack[i - j];
				return (p);
			}
			j++;
		}
	}
	return (p);
}
