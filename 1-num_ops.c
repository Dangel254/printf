#include "main.h"
#include <stdio.h>

/**
 * print_d - print decimals
 * @ar_list: array of characters
 *
 * Return: print numbers
 */
int print_d(va_list ar_list)
{
	unsigned int num_abs, aux_num, count_zero, count;
	int numbers;

	count = 0;

	numbers = va_arg(ar_list, int);

	if (numbers < 0)
	{
		num_abs = (numbers * -1);
		count += putchar(45);
	}
	else
		num_abs = numbers;

	aux_num = num_abs;
	count_zero = 1;

	while (aux_num > 9)
	{
		aux_num /= 10;
		count_zero *= 10;
	}

	while (count_zero >= 1)
	{
		count += putchar(((num_abs / count_zero) % 10) + '0');
		count_zero /= 10;
	}

	return (count);
}

/**
 * print_i - print integers
 * @ar_list: number list
 *
 * Return: printed number
 */
int print_i(va_list ar_list)
{
	return (print_d(ar_list));
}
