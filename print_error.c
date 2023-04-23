#include "main.h"

/**
 * print_error_check - checks for valid specifier
 * @string: the expected string to check
 *
 * Return: 0 on success, 1 otherwise
 */

int print_error_check(const char *string)
{
	int i, j = 0;
	const char *specifier = "csdi%";

	if (string == NULL || (string[0] == '%' && string[1] == '\0'))
		return (-1);

	for (i = 0; string[i] != '\0'; i++)
	{
		if (string[i] == '%')
		{
			if (string[i + 1] == '\0')
				return (-1);
			j = 0;
			while (specifier[j] != '\0')
			{
				if (string[i + 1] == specifier[j])
					break;
				j++;
			}
			if (specifier[j] == '\0')
				return (-1);
		}
	}

	return (0);
}
