#include "holberton.h"
/**
 * print_number - Print number
 * @n: input number
 * @buffer: memory field to host the printf output
 * @i_b: buffer position
 *
 * Description: print number
 * Return: 0
 */
int print_number(int n, char *buffer, int i_b)
{
	int b = 1, i = 0, j;

	if (n < 0)
	{
		buffer[i_b] = '-';
		i_b++;
	}
	while (n / b > 9 || n / b < -9)
	{
		b = b * 10;
		i++;
	}
	for (j = 0; j <= i; j++)
	{
		if (n < 0)
		{
			buffer[i_b] = (-(n / b) + '0');
		}
		else
		{
			buffer[i_b] = ((n / b) + '0');
		}
		i_b++;
		n = n % b;
		b = b / 10;
	}
	return (i_b);
}
