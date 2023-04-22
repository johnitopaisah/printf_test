#include <stdarg.h>
#include "main.h"
#include <stdlib.h>

/**
 * _printf - function that formats its outpus
 * @format: pointer to the string to be formatted
 * @...: variable arguments list
 *
 * Return: Returns the length of the characters printed to the output
 */
int _printf(const char *format, ...)
{
	va_list args;
	int i, s_len;
	char *s;
	int count = 0;

	va_start(args, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '\\')
		{
			i++;
			escapes(format[i]);
			count++;
		}
		else if (format[i] == '%')
		{
			i++;
			switch (format[i])
			{
				case '%':
					_write('%');
					count++;
					break;
				case 'c':
					_write(va_arg(args, int));
					count++;
					break;
				case 's':
					s = va_arg(args, char *);
					if (s == NULL)
						s = "";
					s_len = print_str(s);
					count += s_len;
					break;
			}
		}
		else
		{
			_write(format[i]);
			count++;
		}
	}
	va_end(args);

	return (count);
}
