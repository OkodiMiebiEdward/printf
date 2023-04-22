#include "main.h"

/**
 *_printf - the printf function
 *@format: the expected format
 *Return: int
 */

int _printf(const char *format, ...)
{
	int i = 0, j = 0, count = 0, *len;
	va_list arg;
	void *s;

	if (print_error_check(format) == 0)
		return (0);

	va_start(arg, format);
	len = &count;
	while (format[i] != '\0')
	{
		if (format[i] != '%')
			_putchar(format[i]);
		else if (format[i] == '%' && format[i + 1] != '%')
		{
			j = i + 1;
			s = va_arg(arg, void *);
			*len += check_flag(format[j], s, len);
			i++;
		}
		else if (format[i] == '%' && format[i + 1] == '%')
		{
			_putchar(format[i]);
			i++;
		}
		i++;
		*len = *len + 1;
	}
	va_end(arg);

	return (*len);
}
