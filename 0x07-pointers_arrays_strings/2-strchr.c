#include "main.h"

/**
 * *_strchr - a function that locates a character in a string
 * @s: destination string
 * @c: character to be located
 * Return: return pointer to c
 * or null if not found
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		return (&s[i]);
	}
	return (0);
}
