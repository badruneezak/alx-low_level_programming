#include <stdio.h>
/**
* main - A program that writes the alphabet in reverse
* Return: always return 0 (success)
*/
int main(void)
{
	char i;

	for (i = 'z' ; i >= 'a' ; i--)
		putchar(i);
	putchar('\n');
	return (0);
}

