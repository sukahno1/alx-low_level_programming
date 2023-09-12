#include <stdio.h>

/**
 * main - output the alphabetic in lower and upper case
 *
 * Return: Always (Success)
 */
int main(void)
{
	char g; /* we define g as a character*/

	for (g = 'a'; g <= 'z'; g++)
	{
		putchar(g);
	}

	for (g = 'A'; g <= 'Z'; g++)
	{
		putchar(g);
	}

	putchar('\n');

	return (0);
}
