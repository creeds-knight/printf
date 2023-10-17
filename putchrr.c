#include "main.h"

/**
 * _putchrr - A function that writes a character to the standard output
 * @c: Character tobe written
 * Return: 1 on success
 */
int _putchrr(char c)
{
	return (write(1, &c, 1));
}
