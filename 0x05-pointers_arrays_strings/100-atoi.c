#include "main.h"

/**
 * _atoi - converts a string to an integer.
 * @s: the input string
 *
 * Return: the converted integer
 */
int _atoi(char *s)
{
    int result = 0;
    int sign = 1; // Default positive

    // Skip leading white spaces
    int i = 0;
    while (s[i] == ' ' || (s[i] >= 9 && s[i] <= 13))
        i++;

    // Check for a sign character
    if (s[i] == '-') {
        sign = -1; // Negative
        i++;
    } else if (s[i] == '+') {
        i++;
    }

    // Convert digits to integer
    while (s[i] >= '0' && s[i] <= '9') {
        result = result * 10 + (s[i] - '0');
        i++;
    }

    return result * sign;
}

