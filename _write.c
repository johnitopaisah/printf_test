#include "main.h"
#include <unistd.h>

/**
 * _write - a function that writes a character to the standard output.
 * @c: the character to write to standard output.
 *
 * Return: the decimal equivalent of c as per ASCII code.
 */
int _write(char c)
{
	return (write(1, &c, 1));
}
