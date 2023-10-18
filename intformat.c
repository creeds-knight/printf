#include "main.h"
/**
 * intformat - A function that prints an integer
 * @n: This is the integer to be printed
 * Return: count
 */
int intformat(int n)
{
	int count = 0;
	int divider = 1;

	if (n < 0)
	{
		n = -n;
		count += _putchrr('-');
	}

	while (divider <= n / 10)
	{
		divider *= 10;
	}
	while (divider > 0)
	{
		int digit = n / divider;

		count += _putchrr('0' + digit);
		n %= divider;
		divider /= 10;
	}
	return (count);
}
