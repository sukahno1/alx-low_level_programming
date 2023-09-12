#include <stdio.h>

/**
  * main - program that prints all possible combinations of single-digit numbers.
  *
  * Return: Always (Success);
  */
int main(void)
{
	int g;

	for (g = '0'; g <= '9'; g++)
	{
		putchar(g);

		if (g != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
