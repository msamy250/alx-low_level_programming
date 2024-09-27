#include "main.h"

/**
 * binary_to_uint - A function that converts a binary number
 * into an unsigned integer.
 * @b: A pointer to the binary string.
 *
 * Return: The unsigned integer result of the conversion.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int base = 1, result = 0, len = 0;

	// Return 0 if the binary string is NULL
	if (b == NULL)
		return (0);

	// Calculate the length of the binary string
	while (b[len])
		len++;

	// Iterate through the string from the last character
	while (len)
	{
		// Return 0 if any character is not '0' or '1'
		if (b[len - 1] != '0' && b[len - 1] != '1')
			return (0);

		// If the current character is '1', add its value to the result
		if (b[len - 1] == '1')
			result += base;

		// Update the base (multiply by 2)
		base *= 2;
		len--;
	}
	
	// Return the final converted value
	return (result);
}
