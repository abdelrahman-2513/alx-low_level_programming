#include <stdio.h>

/**
 * main - Entry point 
 * Return: Always return 0 (Success)
 */
int main(void)
{
	int i;

	int j;

	int z;

	for (i = 48; i < 58; i++)
	{
		for (j = i + 1; j < 58; j++)
		{
			for (z = j + 1; z < 58; z++)
			{
				putchar(i);
				putchar(j);
				putchar(z);
				if (i != 55)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
