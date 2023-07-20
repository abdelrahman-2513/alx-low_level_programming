#include "main.h"

/**
 * _isdigit - is used to check that the char enterd is a digit
 * @c: the character to be checked
 *
 * Return: char is digit 1 else 0
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
