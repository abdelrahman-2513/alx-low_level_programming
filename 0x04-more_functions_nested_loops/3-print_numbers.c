#include "main.h"
/**
 * print_numbers - a function that prints the numbers from 0 to 9
 */
void print_numbers(void)
{
	char i;

	i = '0';
	while (i <= '9')
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
