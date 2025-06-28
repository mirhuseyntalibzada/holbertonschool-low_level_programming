#include "main.h"

/**
 * check_prime - Recursively checks if a number is divisible
 * @n: The number to check
 * @x: The current divisor being tested
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int check_prime(int n, int x)
{
	if (n < 2)
		return (0);
	if (x * x > n)
		return (1);
	if (n % x == 0)
		return (0);
	return (check_prime(n, x + 1));
}

/**
 * is_prime_number - Determines if an integer is a prime number
 * @n: The number to check
 *
 * Return: 1 if n is a prime number, 0 otherwise
 */
int is_prime_number(int n)
{
	return (check_prime(n, 2));
}
