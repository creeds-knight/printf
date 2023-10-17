#include "main.h"

/**
 * _putts - A function that prints a string
 * @str: - String to be printed
 * Return: Length of the string
 */

int _putts(char *str)
{
	int str_count = 0;

	while(str[str_count] != '\0')
	{
		_putchrr(str[str_count]);
		str_count++;
	}
	return (str_count);
}
