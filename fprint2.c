#include "main.h"

/**
 * print_i - prints an integer
 * @list: integer input
 * Return: string of digits
 */
int print_i(va_list list)
{
	int buf[10];
	int j, m, num, sum, count;

	num = va_arg(list, int);
	count = 0;
	m = 1000000000;
	buf[0] = num / m;
	for (j = 1; j < 10; j++)
	{
		m /= 10;
		buf[j] = (num / m) % 10;
	}
	if (num < 0)
	{
		_write_ch('-');
		count++;
		for (j = 0; j < 10; j++)
			buf[j] *= -1;
	}
	for (j = 0, sum = 0; j < 10; j++)
	{
		sum += buf[j];
		if (sum != 0 || j == 9)
		{
			_write_ch('0' + buf[j]);
			count++;
		}
	}
	return (count);
}

/**
 * print_d - print a decimal no
 * @list: input decimal_no to print
 * Return: string of decimal numbers to be printed
 */
int print_d(va_list list)
{
	int buf[10];
	int j, m, num, sum, count;

	num = va_arg(list, int);
	count = 0;
	m = 1000000000;
	buf[0] = num / m;
	for (j = 1; j < 10; j++)
	{
		m /= 10;
		buf[j] = (num / m) % 10;
	}
	if (num < 0)
	{
		_write_ch('-');
		count++;
		for (j = 0; j < 10; j++)
			buf[j] *= -1;
	}
	for (j = 0, sum = 0; j < 10; j++)
	{
		sum += buf[j];
		if (sum != 0 || j == 9)
		{
			_write_ch('0' + buf[j]);
			count++;
		}
	}
	return (count);
}
/**
 *expo - gets the base raised to a number
 * @base: the base input
 * @xponent: raise to power.
 * Return: result.
 */
unsigned long expo(unsigned int base, unsigned int xponent)
{
	unsigned int i;
	unsigned long result = base;

	for (i = 0; i < xponent; i++)
	{
		result *= base;

	}
	return (result);
}

/**
 * print_p - prints a pointer
 * @list: input list of values
 * Return: count.
 */
int print_p(va_list list)
{
	unsigned int i, sum = 0;
	unsigned int buf[16];
	unsigned long num, m;
	int count = 0;
	char *str = "(nil)";

	num = va_arg(list, unsigned long);
	if (num == 0)
	{
		for (i = 0; str[i]; i++)
		{
			_write_ch(str[i]);
			count++;
		}
		return (count);
	}
	_write_ch('0');
	_write_ch('x');
	count = 2;
	m = expo(16, 15);
	buf[0] = num / m;

	for (i = 1; i < 16; i++)
	{
		m /= 16;
		buf[i] = (num / m) % 16;
	}
	for (i = 0; i < 16; i++)
	{
		sum += buf[i];
		if (sum || i == 15)
		{
			if (buf[i] < 10)
				_write_ch('0' + buf[i]);
			else
				_write_ch('0' + ('a' - ':') + buf[i]);
			count++;
		}
	}
	return (count);
}
