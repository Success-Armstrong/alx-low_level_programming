#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int n;

    /* Seed for the random number generator */
    srand(time(0));

    /* Assign a random number to the variable n */
    n = rand() - RAND_MAX / 2;

    /* Print the random number */
    printf("%d is ", n);

    /* Check if the number is positive, negative, or zero */
    if (n > 0)
    {
        printf("positive\n");
    }
    else if (n < 0)
    {
        printf("negative\n");
    }
    else
    {
        printf("zero\n");
    }

    return (0);
}

