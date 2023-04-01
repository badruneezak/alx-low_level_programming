#include "main.h"
/**
* print_sign - a function that prints the sign of a number
* @n: parameter to be checked
* Return: returns 1 for positive number
* and 0 otherwise
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		_putchar(',');
		_putchar(' ');
		return (0);
	}
	else
	{
		_putchar('-');
		_putchar(',');
		_putchar(' ');
		return (-1);
	}
}
