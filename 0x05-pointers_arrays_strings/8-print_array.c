#include "main.h"
/**
 * print_array - a function that prints the number of arrays
 * @a: the array
 * @n: size of array
 * Return: the array elemts
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < (n - 1); i++)
		printf("%d, ", a[i]);
	if (i == (n - 1))
		printf("%d", a[n - 1]);
	printf("\n");
}
