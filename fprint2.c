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
