#include "main.h"
#include <unistd.h>
/**
 * _putchar - write the character using stdout
 * @c: the character to be printed
 *
 * Return: on access 1
 * onerror -1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
