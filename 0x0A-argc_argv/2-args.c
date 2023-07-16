#include "main.h"

/**
 * main - Print all arguments received
 * @argc: Number of arguments
 * @argv: Arguments received
 *
 * Return: 0 for sucecss
 */
int main(int argc, char *argv[])
{
	while (argc--)
	{
		printf("%s\n", *argv++);
	}
	return (0);
}
