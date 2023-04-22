#include "main.h"

/**
 * _strlen - function that gets the lenght of a string
 * @str: pointer to the string to get length
 *
 * Return: the length of str
 */
int _strlen(char *str)
{
	int i, count = 0;

	for (i = 0; str[i] != '\0'; i++)
		count++;

	return (count);
}
