#include "main.h"

/**
 * print_error_check - checks for valid specifier
 * @string: the expected string to check
 * Return: 0 on success, 1 otherwise
 */

int print_error_check(const char *string)
{
	int g, h = 0, has_specifier = 0;
	const char *specifier = "scdi%";

	for (g = 0; string[g] != '\0'; g++)
	{
		if (string[g] == '%')
		{
			has_specifier = 1;
			while (specifier[h] != '\0')
			{
				if (string[g + 1] == specifier[h])
				{
					return (1);
				}
				h++;
			}
		}
	}
	if (!has_specifier)
		return (1);
	return (0);
}

