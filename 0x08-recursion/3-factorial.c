#include "main.h"
/**
 * factorial - returns the factorial of the integer passed into the call.
 * @n: the integer value passed to the function is stored here.
 *
 * Return: Returns the factorial of the integer that was passed.
 */

int factorial(int n)
{
	if (n < 0)
	{
		n = -1;
		return (n);
	}
	if (n == 1)
	{
		n = 1;
		return (n);
	}
	if (n == 0)
	{
		return (1);
	}

	return (n * factorial(n - 1));

}


