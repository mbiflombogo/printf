#include "main.h"

/**
 * print_o - converts unsigned int to usnsigned octal
 * @list: input list of values
 * Return: count.
 */
int print_o(va_list list)
{
	unsigned int buf[10];
	unsigned int i, m, num;
	int count;
	unsigned int sum = 0;

	num = va_arg(list, unsigned int);
	m = expo(8, 10);
	buf[0] = (num / m);
	for (i = 1; i <= 10; i++)
	{
		m /= 8;
		buf[i] = (num / m) % 8;
	}

	for (i = 0; i <= 10; i++)
	{
		count = 0;
		sum += buf[i];
		if (sum || i == 10)
		{
			_write_ch('0' + buf[i]);
			count++;
		}
	}
	return (count);
}

/**
 * print_u - converts unsigned int to decimal
 * @list: input list of values
 * Return: count.
 */
int print_u(va_list list)
{
	unsigned int buf[10];
	unsigned int i, m, num;
	unsigned int sum = 0;
	int count;

	num = va_arg(list, unsigned int);
	m = expo(10, 9);
	buf[0] = (num / m);
	for (i = 1; i < 10; i++)
	{
		m /= 10;
		buf[i] = (num / m) % 10;
	}
	for (i = 0; i < 10; i++)
	{
		count = 0;
		sum += buf[i];
		if (sum || i == 9)
		{
			_write_ch('0' + buf[i]);
			count++;
		}
	}
	return (count);
}
