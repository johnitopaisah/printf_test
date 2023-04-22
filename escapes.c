#include "main.h"

/**
 * escapes - function that output special characters
 * @e: character to escape
 */
void escapes(int e)
{
	switch (e)
	{
		case 'n':
			_write('\n');
			break;
		case 'b':
			_write('\b');
			break;
		case 't':
			_write('\t');
			break;
		case 'r':
			_write('\r');
			break;
		case 'a':
			_write('\a');
			break;
		case 'v':
			_write('\v');
			break;
		case 'f':
			_write('\f');
			break;
		case '"':
			_write('\"');
			break;
		case 92:
			_write('\\');
			break;
		case ' ':
			_write(' ');
			break;
	}
}


/**
 * print_str - print string to stdout
 * @str: pointer to the string to be printed
 *
 * Return: the length of the output string
 */
int print_str(char *str)
{
	int i, str_len = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		_write(str[i]);
		str_len++;
	}
	return (str_len);
}
