#include <stdio.h>

/**
 * main - a simple program that outputs 0-9 separated by commas
 *
 * Return: 0 on success
 */
int main(void)
{
	int j;
	int k;

	for (j = 48; j < 57; j++)
	{
		for (k = j + 1; k < 58; k++)
		{
			putchar(j);
			putchar(k);
			if (j != 56 || k != 57)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}

