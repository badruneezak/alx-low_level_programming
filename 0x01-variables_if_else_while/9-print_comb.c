#include <stdio.h>
/**
* main - A program that prints all combinations of single digit numbers
* Return: always return 0 (success)
*/
int main(void)
{
	int i;

	for (i = 0 ; i < 10 ; i++)
	{
		putchar(i);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
