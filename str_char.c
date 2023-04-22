#include "main.h"
#include <stdarg.h>

/**
 * _printf - function that produces output according to a format
 * @format: pointer to a character string
 * @...: indication for variable arguments.
 *
 * Description: This function accepts a string as %s or character
 * as %c or %%
 *
 * Return: Return the length of what is written to stdout.
 */
int _printf(const char *format, ...)
{
	int i, format_len, count = 0;
	char *s;
	va_list args;

	va_start(args, format);
	format_len = _strlen(format);
	for (i = 0; i < format_len; i++)
	{
		if (format[i] == '%')
		{
			switch (format[i + 1])
			{
				case 'c':
					_write(va_arg(args, int));
					count++;
					break;
				case 's':
					s = va_arg(args, (char *));
					if (s == "")
						break;
					while (*s)
					{
						_write(*s);
						count++;
						s++;
					}
					break;
				case '%':
					_write('%');
					count++;
					break;
			}
		}
		else
		{
			_write(format[i]);
			count++;
		}
	}
	return (count);
}
