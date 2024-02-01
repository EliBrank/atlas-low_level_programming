#include "main.h"

/**
 * cap_string - capitalizes each word of a string
 * @s: input string
 *
 * Return: string with words capitalized
 */

char *cap_string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			if (i == 0)
			{
				s[i] -= 32;
			}
			else if (s[i + 1] != '\0' && i != 0)
			{
				switch (s[i - 1])
				{
					case '\t':
					case ' ':
					case '\n':
					case ',':
					case ';':
					case '.':
					case '!':
					case '?':
					case '"':
					case '(':
					case ')':
					case '{':
					case '}':
						s[i] -= 32;
					default:
						break;
				}
			}
		}
	}
	return (s);
}
