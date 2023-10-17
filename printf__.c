#include "main.h"

/**
 * _printf -A function to fomart strings
 * @format: Input string to be formated
 * Return: Number of characters printed
 */

int _printf(const char *format, ...)
{
	int char_count = 0;
	int iterator = 0;
	int character;
	va_list parameters;
	int string;

	if (format == NULL)
		return (-1);

	for (iterator = 0; format[iterator] != '\0'; iterator++)
	{

		va_start(parameters, format);

		if (format[iterator] != '%')
		{
			_putchrr(format[iterator]);
			char_count++;
		}
		else if (format[iterator] == '%' && format[iterator + 1] == '%')
		{
			_putchrr('%');
			char_count++;
		}

		else if ((format[iterator] == '%') && (format[iterator + 1] == 'c'))
		{
			character = va_arg(parameters, int);
			_putchrr(character);
			iterator++;
			char_count++;
		}
		else if (format[iterator] == '%' && (format[iterator + 1] == 's'))
		{
			string = _putts(va_arg(parameters, char*));
			iterator++;
			char_count += string;
		}
		va_end(parameters);

	}
	return (char_count);
}
