#include "main.h"
/**
 * more_numbers - prints the numbers from 0 to 14 10 times
 */
void more_numbers(void)
{
	char a = '0';

	int b;

	while (a <= '9')
	{
		for (b = 0; b <= 14; b++)
		{
			if (b >= 10)
				_putchar('1');
			_putchar(b % 10 + '0');
		}
		a++;
		_putchar('\n');
	}
}
