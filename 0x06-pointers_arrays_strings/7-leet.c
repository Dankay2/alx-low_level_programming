#include "main.h"
/**
 * leet - encode into 1337speak
 * @n: input value
 * Return: n value
 */
char *leet(char *n)
{
	int t, j;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (t = 0; n[t] != '\0'; t++)
	{
		for (j = 0; j < 10; j++)
		{
			if (n[t] == s1[j])
			{
				n[t] = s2[j];
			}
		}
	}
	return (n);
}
