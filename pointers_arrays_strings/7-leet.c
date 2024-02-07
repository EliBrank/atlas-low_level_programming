#include "main.h"

/**
 * leet - converts string into 1337-speak
 * @s: input string for conversion
 *
 * Return: string converted to 1337-speak
 */

char *leet(char *s)
{
	char key[][2] = {
		{'a', '4'},
		{'A', '4'},
		{'e', '3'},
		{'E', '3'},
		{'o', '0'},
		{'O', '0'},
		{'t', '7'},
		{'T', '7'},
		{'l', '1'},
		{'L', '1'}
	};
	int keySize = sizeof(key) / sizeof(key[0]);
	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < keySize; j++)
		{
			if (key[j][0] == s[i])
			{
				s[i] = key[j][1];
				break;
			}
		}
	}
	return (s);
}
