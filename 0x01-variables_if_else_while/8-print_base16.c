#include <stdio.h>

/**
  * main -  prints all the numbers of base 16 in lowercase, followed by a new line
  *
  * Return: Always (Success)
  */
int main(void)
{
	char g;

	for (g = '0'; g <= '9'; g++)
	{
		putchar(g);
	}

	for (g = 'a'; g <= 'f'; g++)
	{
		putchar(g);
	}

	putchar('\n');

	return (0);
}

