#include "main.h"
/**
 * print_diagonal - prints \ as given numbers due to n
 * @n: the number of \ printed
 */
void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			j = i;
			while (j > 0)
			{
				_putchar(' ');
				j--;
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
