#include "main.h"
/**
 * _strlen - a function that takes a string and returns the length
 * @s: a string paramters
 * Return: returns the length
 */
int _strlen(char *s)
{
	int longi = 0;

	while (*s != '\0')
	{
		longi++;
		s++;
	}
	return (longi);
}
