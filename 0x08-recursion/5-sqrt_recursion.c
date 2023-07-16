#include "main.h"
/**
 *  _sqrt_recursion_wrapper - a wrapper that does the recursion bit
 *
 * @n: input number
 * @min: minimum number to guess
 * @max: maximum number to guess
 *
 * Return: square root of @n or -1
 */
int _sqrt_recurson_wrapper(int n, int min, int max)
{
	int guess, guess_squared;

	guess = (min + max) / 2;		/*get guess (g)*/

	guess_squared = guess * guess;		/*square guess (sg)*/

	if (guess_squared == n)
	{
		return (guess);
	}
	else if (min == max)
	{
		return (-1);
	}
	else if (guess_squared < n)
	{					/*overshoot g is sg less than the n*/
		return (_sqrt_recursion_wrapper(n, guess + 1, max));
	}
	else
	{ 					/*undershoot g if sg is more than the n*/	return (n, min, guess -1));
	}
}
