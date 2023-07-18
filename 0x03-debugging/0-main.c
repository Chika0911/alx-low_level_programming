#include "main.h"

/**
 * positive_or_negative - Function to determine if a number is positive or negative
 * @i: The number to check
 *
 * Return: No return value (void)
 */
void positive_or_negative(int i);

/**
 * main - Test function for positive_or_negative
 * Return: 0
 */
int main(void)
{
    int i;

    i = 0;
    positive_or_negative(i);
    return (0);
}

/**
 * positive_or_negative - Function to determine if a number is positive or negative
 * @i: The number to check
 *
 * Return: No return value (void)
 */
void positive_or_negative(int i)
{
    if (i > 0)
        printf("%d is positive\n", i);
    else if (i < 0)
        printf("%d is negative\n", i);
    else
        printf("%d is zero\n", i);
}
