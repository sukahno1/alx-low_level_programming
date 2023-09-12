#include <stdio.h>

/**
  * main - output all letters of alphabet except e and q
  *
  * Return: Always (Success)
  */
int main(void)
{
	char g;

	for (g = 'a'; g <= 'z'; g++)
	{
		if (g != 'e' && g != 'q')
		{
			putchar(g);
		}
	}

	putchar('\n');

	return (0);
}
