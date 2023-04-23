#include "main.h"

/**
 * print_character - prints a specific character
 * @c: the character to be printed
 * @len: length of characters already printed
 * Return: len
 */
int print_character(int c, int len)
{
	if (c)
	{
		putchar(c);
		len += 1;
	}
	return (len);
}
