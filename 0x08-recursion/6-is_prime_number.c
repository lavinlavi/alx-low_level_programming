#include "main.h"
int check_my_prime(int n, int y);

/**
 * is_prime_number - checks if the integer passed in
 * is a prime number.
 *
 * @n: The integer that is passed for checking.
 *
 * Return: returns 1 if prime number and 0 otherwise.
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (check_my_prime(n, n - 1));

}

/**
 * check_my_prime - function to check if passed numbers can
 * divide if one is decremented recursively.
 * @y: the divide to be decremented and checked against n
 * @n: the number to be divided against.
 * Return: returns 0 if not prime and 1 if prime.
 */
int check_my_prime(int n, int y)
{
	if (y == 1)
	{
		return (1);
	}

	if (n % y == 0)
	{
		return (0);
	}
	return (check_my_prime(n, y - 1));

}


