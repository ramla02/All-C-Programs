#include <stdio.h>

/**
 * main - the main function and the start of the program
 * C program that prints all the alphabet letters in lowercase
 * using ASCII
 * Return: 0 for the successful execution
 */

int main(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		printf("%c", i);
	}
	printf("\n");
	return (0);
}
