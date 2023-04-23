#include "main.h"

/**
 * _printf - the printf function
 * @format: the expected format
 *
 * Return: len
 */
int _printf(const char *format, ...)
{
	int i = 0, j = 0, len = 0, count = 0;
	va_list arg;

	if (print_error_check(format))
		return (-1);

	va_start(arg, format);
	while (format[i] != '\0')
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			len++;
		}
		else if (format[i + 1] != '\0')
		{
			j = i + 1;
			len += check_flag(format[j], arg, len, format);
			i++;
		}
		else
		{
			_putchar(format[i]);
			i++;
			len++;
		}
		i++;
		count += len;
		len = 0;
	}
	va_end(arg);

	return (count);
}
