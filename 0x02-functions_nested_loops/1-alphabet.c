#include "main.h"
#include <stdio.h>
/**
* print_alphabet - A function that pints alphabet in lowercase letters
* Return: always return 0 (success)
*/

void print_alphabet(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
		_putchar(i);
	_putchar('\n');
}
