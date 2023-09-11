#include <stdio.h>

/**
 * main - prints the letters except q and e
 *
 * Return: Always 0
 */
int main(void)
{
	while (int i = 'a'; i <= 'z'; i++)

		if (i == 'q' || i == 'e')
		{
			putchar(i);
		}
	putchar('\n');
	return (0);
}
