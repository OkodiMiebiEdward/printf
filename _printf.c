#include "main.h"

/**
 * _printf - A function that writes a string to stdout
 * @format: A string
 *
 * Return: length of printed string
 */

int _printf(char *format, ...)
{
	char temp[BUFFER_SIZE];
	int index = 0, len = 0, value = -1;
	va_list args;

	if (format != NULL)
	{
		va_start(args, format);
		while (*format)
		{
			if (*format == '%')
			{
				format++;
				if (check_specifier(*format))
					value = determine_specifier(temp, &index, args, *format);
				else
				{
					char_to_temp(temp, &index, '%');
					format--;
				}
			} else
				char_to_temp(temp, &index, *format);
			format++;
		}
		va_end(args);
		len = print_temp(temp, &index);
		return (len);
	}
	return (value);
}
