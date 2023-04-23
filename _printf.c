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
<<<<<<< HEAD
		va_start(args, format);
		while (*format)
=======
		if (format[i] != '%')
		{
			_putchar(format[i]);
			len++;
		}
		else if (format[i + 1] != '\0')
>>>>>>> eda946b6573ecb9c296aecec69fbeeaddf4ab6a0
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
<<<<<<< HEAD
		va_end(args);
		len = print_temp(temp, &index);
		return (len);
=======
		else
		{
			_putchar(format[i]);
			i++;
			len++;
		}
		i++;
		count += len;
		len = 0;
>>>>>>> eda946b6573ecb9c296aecec69fbeeaddf4ab6a0
	}
	return (value);
}
