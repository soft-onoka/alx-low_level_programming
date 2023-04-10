#include "main.h"

/**

    binary_to_uint - converts a binary number to an unsigned int

    @b: binary number to be converted

    Return: converted number or 0 if b is NULL or contains non-binary digits
    */
    unsigned int binary_to_uint(const char *b)
    {
    unsigned int num = 0;
    unsigned int i = 0;

    if (!b || !*b)
    return (0);

    while (b[i])
    {
    if (b[i] > '1' || b[i] < '0')
    return (0);
    else if (b[i] == '1')
    num = (num << 1) | 1;
    else
    num <<= 1;
    i++;
    }
    return (num);
    }
