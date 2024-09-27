#include "main.h"

/**
 * binary_to_uint - Converts a binary string to an
 * unsigned integer.
 * @b: String containing the binary representation.
 *
 * Return: The converted unsigned integer value.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int ui;
	int len, base_two;

	// Return 0 if input string is NULL
	if (!b)
		return (0);

	ui = 0;

	// Calculate the length of the binary string
	for (len = 0; b[len] != '\0'; len++)
		;

	// Loop through the string, starting from the least significant bit
	for (len--, base_two = 1; len >= 0; len--, base_two *= 2)
	{
		// If any character is not '0' or '1', return 0 as it's invalid
		if (b[len] != '0' && b[len] != '1')
		{
			return (0);
		}

		// Add to result if the current character is '1'
		if (b[len] & 1)
		{
			ui += base_two;
		}
	}

	// Return the resulting unsigned integer
	return (ui);
}
