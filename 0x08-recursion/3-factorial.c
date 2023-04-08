#include "main.h"
/**
 * factorial - a function that returns the factorial of a given number
 * @n: find the factorial number
 * Return: If n is lower than 0, the function should return
 * If n is lower than 0, the function should return
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
