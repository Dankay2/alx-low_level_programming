#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase
 * Return: Alwaays 0
 */
int main(void)
{
	int lowercase = 'a';

	while (lowercase <= 'z')
	{
		putchar(lowercase);
		lowercase += 1;
	}
	putchar('\n');
	return (0);
}
