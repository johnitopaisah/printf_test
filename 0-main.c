#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int len;
	int len2;
	
	len = _printf("Let's try to printf a simple sentence.\n");	
	len2 = printf("Let's try to printf a simple sentence.\n");
	printf("%d %d\n", len, len2);

	len = _printf("Character:[%c]\n", 'H');
	len2 = printf("Character:[%c]\n", 'H');
	printf("%d %d\n", len, len2);

	len = _printf("String:[%s]\n", "I am a string !");
	len2 = printf("String:[%s]\n", "I am a string !");
	printf("%d %d\n", len, len2);
	
	len = _printf("Percent:[%%]\n");
	len2 = printf("Percent:[%%]\n");
	printf("%d %d\n", len, len2);
	

	return (0);
}
