#include <unistd.h>
#include <stdio.h>
#include "main.h"

/**
 * main - test file
 *Program
 * Return: 0
 */

int main(void)
{
	write(1, "STANDARD:\n", 10);
	printf("Test\n");

	write(1, "HOME_MADE:\n", 11);
	_printf("Tester\n");

	return (0);
}
