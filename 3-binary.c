#include "main.h"
#include <stdio.h>

/**
 * print_b - decimal to binary
 * @binary_list: argument value
 *
 * Return: the count
 */
int print_b(va_list binary_list)
{
	unsigned int num, i, binary, count, arr[32];

	i = 0, count = 0;

	num = va_arg(binary_list, int);

	if (num < 1)
	{
		putchar(48);
		count++;
		return (count);
	}
	else
	{
		while (num > 0)
		{
			binary = num % 2;
			num /= 2;
			arr[count] = binary;
			count++;
		}
		i = count - 1;

		while (i > 0)
		{
			putchar('0' + arr[i]);
			i--;
		}
		putchar('0' + arr[i]);
	}

	return (count);
}
