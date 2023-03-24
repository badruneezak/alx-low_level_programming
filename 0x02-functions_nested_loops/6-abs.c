#include "main.h"
/**
* _abs - a function that computes the absolute value f a integer
* @a: The number to be computed.
* Return: Absolute value of the number or 0
*/
int _abs(int a)
{
	if (a < 0)
		a = -(a);
	else if (a >= 0)
		a = a;
	return (a);
}

