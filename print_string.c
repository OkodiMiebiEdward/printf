#include "main.h"

/**
 * print_string - prints a string
 * @s: the string to be printed
 * @len: pointer to an integer
 * Return: void
 */

void print_string(char *s, int *len)
{
	if (s)
	{
		int index = 0;

		while (s[index] != '\0')
		{
			_putchar(s[index]);
			index++;
		}
		*len = *len + index - 1;
	}
}
