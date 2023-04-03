#include "main.h"

/**
 * *_memset -  a function that fills memory with a constant byte
 * @s: address of memory to be filled
 * @b:  value
 * @n: number of bytes
 * Return: return to s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (i = 0; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
