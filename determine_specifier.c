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
		if (format == 's')
			str_to_temp(temp, index, va_arg(args, char *));
		else if (format == 'r')
			rev_str_to_temp(temp, index, va_arg(args, char *));
		else if (format == 'R')
			rot13_str_to_temp(temp, index, va_arg(args, char *));
		else if (format == 'c')
			char_to_temp(temp, index, (char)va_arg(args, int));
		else if (format == 'd' || format == 'i')
			number_to_temp(temp, index, va_arg(args, int));
		else if (format == '%')
			char_to_temp(temp, index, '%');
		else if (format == 'u')
			unsigned_num_to_temp(temp, index, va_arg(args, unsigned int));
		else if (format == 'x')
			hexadecimal_to_temp(temp, index, va_arg(args, unsigned int));
		else if (format == 'X')
			hexadecimal_to_temp_upper(temp, index, va_arg(args, unsigned int));
		else if (format == 'o')
			octal_to_temp(temp, index, va_arg(args, unsigned int));
		else if (format == 'p')
			pointer_to_temp(temp, index, va_arg(args, void *));
		else if (format == 'S')
			non_printable_strings_to_temp(temp, index, va_arg(args, char *));
		else if (format == 'b')
			binary_to_tmp(temp, index, va_arg(args, unsigned int));
		else
			return (-1);
	}
	return (0);
}
