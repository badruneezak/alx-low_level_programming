#include <stdio.h>
/**
* main - A program that prints the alphabet using putchar
* Return: always return 0 (success)
*/
int main(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
