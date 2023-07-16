#include "main.h"
#include "stdlib.h"
#include "ctype.h"

/**
 * main - Print result of adding given arguments
 * @argc: Number of arguments
 * @argv: Arguments received
 *
 * Returned: 0 on success, 1 if there's a nondigit arg
 */
int main(int argc, char *argv[])
{
	int sum;
	int count;
	int i;

	count = 1;
	sum = 0;
	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	while (count < argc)
	{
		for (i = 0; argv[count][i] != '\0'; i++)
		{
			if (!(isdigit(argv[count][i])))
			{
				printf("Error\n");
				return (0);
			}
		}
		sum += atoi(argv[count]);
		count++;
	}
	printf("%d\n", sum);
	return (0);
}
