#include <stdio.h>
/**
* main - A program that prints all single digits of base ten
* Return: always return 0 (success)
*/
int main(void)
{
	int i;

	for (i = 0 ; i < 10 ; i++)
		putchar(i + '0');
	putchar("\n");
		return (0);
}
