#include "main.h"

/**
 * *_memcpy - a function that copies memory area
 * @dest: memory where it is stored
 * @src: memory whre it is copied
 * @n: number of bytes
 * Return: a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
