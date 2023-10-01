#include "main.h"

/**
 *prime_checker - function to check the prime number
 * is_prime_number - function to check if the number prime
 *@n: The number to find out if it  prime
 *@x: the checker
 *Return: 1 if the number  is  prime
 */
int prime_checker(int n, int x);
int prime_checker(int n, int x)
{
		if (n <= 1)
	{
		return (0);
	}
	else if (n == 2)
	{
		return (1);
	}
	else if (n % x == 0)
	{
		return (0);
	}
	else if (x >= n / 2)
	{
		return (1);
	}
	else
	{
		return (prime_checker(n, x + 1));
	}
}
int is_prime_number(int n)
{
	return (prime_checker(n, n - 1));
}
