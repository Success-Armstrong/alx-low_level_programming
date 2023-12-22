#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints if number is posiitive, zero or negative
 * Return: Always 0 (Success)
 */
int main(void)
{
    int n;

    
    srand(time(0));
    n = rand() - RAND_MAX / 2;

    if (n > 0)
    {
        printf("positive\n", n);
    }
    else if (n < 0)
    {
        printf("negative\n", n);
    }
    else
    {
        printf("zero\n", n);
    }

    return (0);
}

