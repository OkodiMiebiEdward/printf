#include "main.h"

/**
 * determine_specifier - Determines which helper function to call
 * @temp: An array
 * @index: Index in 'array'
 * @args: list of arguments
 * @format: format specifier
 *
 * Return: -1 (failure) if no format specifier is found or if index is NULL
 */

int determine_specifier(char temp[], int *index, va_list args, char format)
{
	if (index != NULL)
	{
		switch (format)
		{
			case 's':
				str_to_temp(temp, index, va_arg(args, char *));
				break;
			case 'c':
				char_to_temp(temp, index, (char)va_arg(args, int));
				break;
			case 'd':
			case 'i':
				number_to_temp(temp, index, va_arg(args, int));
				break;
			case '%':
				char_to_temp(temp, index, '%');
				break;
			case 'b':
				print_binary(temp, index, va_arg(args, int));
				break;

			default:
				return (-1);
		}
	}
	return (0);
}
