#include "main.h"

/**
 * print_dec_no - outputs integers of base 10
 * @list: input values
 * Return: buffer
 */
int print_dec_no(va_list list)
{
	int i, num = va_arg(list, int);
	char buf[32];

	num_to_string(num, 10, buf);
	for (i = 0; buf[i]; i++)
		_write_ch(buf[i]);
	return (buf[i]);
}

/**
 * unsigned_num_to_string - converts the input integers to strings
 * @num: input no
 * @base: the base (10)
 * @buffer: the input
 * Return: void
 */
void unsigned_num_to_string(u_int64_t num, int base, char *buffer)
{
	char buf[65];
	int i;
	int cur = 0;

	if (num == 0)
	{
		*buffer++ = '0';
		*buffer = 0;
		return;
	}
	for (i = 0; i < 65; i++)
		buf[i] = 0;
	while (num)
	{
		int digit = num % base;

		if (digit >= 10)
			buf[cur++] = 'a' + (digit - 10);
		else
		{
			buf[cur++] = '0' + digit;
		}
		num /= base;
	}
	for (i = (cur - 1); i != 0; i++)
		*buffer++ = buf[i];
	*buffer++ = buf[0];
	*buffer = 0;
}

 /**
  * num_to_string - checks and converts signed int  to unsigned int
  * @num: input no
  * @base: the base (10)
  * @buffer: the input
  * Return: void
  */
void num_to_string(int64_t num, int base, char *buffer)
{
	if (num < 0)
	{
		*buffer++ = '-';
		num = -num;
		unsigned_num_to_string(num, base, buffer);
	}
	unsigned_num_to_string(num, base, buffer);
}
