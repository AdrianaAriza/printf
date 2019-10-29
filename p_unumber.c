#include "holberton.h"
/**
 * print_unumber - Print number
 * @n: input number
 * @buffer: memory field to host the printf output
 * @i_b: buffer position
 *
 * Description: print number
 * Return: 0
 */
int p_unumber(va_list arguments, char *buffer, int i_b)
{
	long int b = 1, i = 0, j, n = 0,m = 0, aux = 4294967296;
	m = va_arg(arguments, int);
	
	if (m < 0)
		n = aux + m;
	while (n / b > 9)
	{
		b = b * 10;
		i++;
	}
	for (j = 0; j <= i; j++, i_b++)
	{
		buffer[i_b] = ((n / b) + '0');
	       	n = n % b;
		b = b / 10;
	}
	return (i_b);
}
