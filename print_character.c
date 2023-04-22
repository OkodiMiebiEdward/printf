#include "main.h"

/**
 * print_character - prints a specific character
 * @c: the character to be printed
 * @len: pointer to an int
 * Return: void
 */

void print_character(int c, int *len)
{
	if (c)
	{
		putchar(c);
		*len -= 1;
	}
}
