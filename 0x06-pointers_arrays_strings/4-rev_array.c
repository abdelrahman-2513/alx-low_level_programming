#include "main.h"
/**
 * reverse_array - prints an array of element in reverse order
 * @a: the array
 * @n: number of elements in array
 */
void reverse_array(int *a, int n)
{
	int i;
	int t;

	for (i = 0; i < n--; i++)
	{
		t = a[i];
		a[i] = a[n];
		a[n] = t;
	}
}
