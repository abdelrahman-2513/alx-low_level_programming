#include "main.h"
/**
 * _strcpy - a functions that copies a string to another string
 * @dest: ehere the string copieed
 * @src: where the string copied from
 * Return: the dest string
 */
char *_strcpy(char *dest, char *src)
{
	int l = 0;
	int x = 0;

	while (*(src + l) != '\0')
		l++;
	for (x = 0; x < l; x++)
	{
		dest[x] = src[x];
	}
	dest[l] = '\0';
	return (dest);
}
