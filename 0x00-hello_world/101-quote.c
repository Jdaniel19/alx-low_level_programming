#include<stdio.h>
/**
 * main - Prints "and that piece of art is useful" - Dora Korpar, 2015-10-19, followed by a new line, to standard error.
 * Return: Always 1.
 */

int main(void)
{
	char str1[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	write(2, str1, 59);
	return (1);
}
