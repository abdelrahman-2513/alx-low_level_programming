#include "main.h"
/**
 * print_line - prints a number of _ according to n
 * @n: the given integer to print number of _
 */
void print_line(int n)
{
	int i = 0;

	if (n > 0)
	{
		while (i < n)
		{
			_putchar('_');
			i++;
		}
	}
	_putchar('\n');
}
