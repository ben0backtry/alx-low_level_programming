#include "holberton.h"

/**
 * _strcpy - copies the string pointed to by src
 * @src: string source
 * @dest: string destination
 * Return: returns string
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
