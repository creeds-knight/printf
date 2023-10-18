#include "main.h"

/**
 * _printf - A function that prints the formated output of a string
 * @format: The string to be formatted
 * Return: the number of bytes contained in the string
 */

int _printf(const char *format, ...)
{
	va_list parameters;
	int char_count = 0;

	va_start(parameters, format);

	while (*format)
	{
		if (format == NULL)
			return (-1);
		if (*format != '%')
		{
			_putchrr(*format);
			char_count++;
		}
		else
		{
			format++;
			if (*format == '\0')
				break;
			switch (*format)
			{
				case 'c':
					char_count += _putchrr(va_arg(parameters, int));
					break;
				case 's':
					char_count += _putts(va_arg(parameters, char *));
					break;
				case 'd':
				case 'i':
					char_count += intformat(va_arg(parameters, int));
					break;
				default:
					char_count += _putchrr('%');
					break;
			}
		}
		format++;
		}
	va_end(parameters);
	return (char_count);
}
