#include "main.h"
/**
 * print_square - prints out number of #
 * @size: the numbers oof # to be printed
 */
void print_square(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			j = size;
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
