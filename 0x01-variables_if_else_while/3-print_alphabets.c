#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase, and then in uppercase
 *
 * Return: Always 0
 */
int main(void)
{
	int lowercase = 'a';
	int uppercase = 'A';
	
	while (lowercase <= 'z')
	{
		putchar(lowercase);
		lowercase += 1;
	}
	while (uppercase <= 'Z')
	{
		putchar(uppercase);
		uppercase += 1;
	}
	putchar('\n');
	return (0);
}
