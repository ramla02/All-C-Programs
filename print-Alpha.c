#include <stdio.h>

/**
 * main - the main function and the start of the program
* A c program that prints all  alphabet letters in uppercase
* using ASCII
* Return: 0 for the successful execution
*/

int main(void)
{
	int i;

	for (i = 65; i <= 90; i++)
	{
		printf("%c", i);
	}
	printf("\n");
	return (0);
}
