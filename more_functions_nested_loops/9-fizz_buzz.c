#include <stdio.h>

/**
 * main - prints 1-100, following FizzBuzz conventions
 *
 * Return: 0 (always success)
 */

int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if ((n % 3 == 0) && (n % 5 == 0))
		{
			printf("FizzBuzz");
		}
		else if (n % 3 == 0)
		{
			printf("Fizz");
		}
		else if (n % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", n);
		}
		/* prints space after each entry, excluding last */
		if (n < 100)
		{
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}

