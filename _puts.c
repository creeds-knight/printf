#include "main.h"

/**
 * _putts - A function that prints a string
 * @str: - String to be printed
 * Return: Length of the string
 */

int _putts(char *str)
{
	int str_count = 0;

	if (str)
	{

		for (str_count = 0; str[str_count] != '\0'; str_count++)
		{
			_putchrr(str[str_count]);
		}
	}
	return (str_count);
}
