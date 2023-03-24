#include "main.h"
/**
* print_last_digi - A function that prints last digit of a number
* @i: parameter function
*
* Return: k
*/
int print_last_digit(int i)
{
	int k;

	k = i % 10;
	if (i < 0)
		k = -k;
	return (k);
}
