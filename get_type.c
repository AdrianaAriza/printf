#include "holberton.h"
/**
 * get_type - Get type print function
 * @s: Parameter input
 *
 * Description: Get type print function
 * Return: Nothing
 */
int (*get_type(char *s))(va_list arguments, char *buffer, int i_b)
{
	t_i types[] = {
		{"c", p_char},
		{"s", p_string},
		{"i", p_int},
		{"d", p_int},
		{"b", p_binary},
		{"r", p_reverse},
		{"R", p_rot13},
		{"%", p_percent},
		{"u", p_unumber},
		{"x", p_hexa},
		{"X", p_Hexad},
		{"o", p_octal},
		{"p", p_point},
		{"S", p_Sstring},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (types[i].letter)
	{
		if (types[i].letter[0] == s[0] && s[0] != '\0')
			return (types[i].f);
		i++;
	}
	return (NULL);
}
