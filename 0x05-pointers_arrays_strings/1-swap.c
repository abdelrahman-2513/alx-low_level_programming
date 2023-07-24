#include "main.h"
/**
 * swap_int - a function takes twwo integers and swap them
 * @a:first int
 * @b: second int
 * Return: a b
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
