#include "main.h"

/**
 * print_string - prints a string
 * @s: the string to be printed
 * @len: current length of printed characters
 *
 * Return: len
 */
int print_string(char *s, int len)
{
	int index = 0;
	int slen = strlen(s);

	if (s)
	{
		while (s[index] != '\0')
		{
			putchar(s[index]);
			index++;
		}
		len += slen;
	}
	return (len);
}
