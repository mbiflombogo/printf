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
