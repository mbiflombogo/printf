#include "main.h"
/**
  * to_base_len - len of dec nums converted to base
  * @n: num of which we want len
  * @base: convert to base from DEC
  *
  * Return: len
  */
unsigned int to_base_len(unsigned int n, int base)
{
	unsigned int i;

	for (i = 0; n > 0; i++)
		n = n / base;
	return (i);
}
