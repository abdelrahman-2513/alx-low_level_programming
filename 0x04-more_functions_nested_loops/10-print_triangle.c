#include "main.h"
/**
 * print_triangle - peints triangle
 * @size: tha no of triangle
 */
void print_triangle(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			j = size - i;
			while (j > 0)
			{
				_putchar(' ');
				j--;
			}
			j = i;
			while (j > 0)
			{
				_putchar('#');
				j--;
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
