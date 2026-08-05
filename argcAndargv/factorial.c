#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
   printf("Number of arguments = %d\n", argc);
   
    int n, i;
    long long fact = 1;

    // Check if the user entered a number
    if (argc != 2)
    {
        printf("Usage: %s <number>\n", argv[0]);
        return 1;
    }

    // Convert command-line argument to integer
    n = atoi(argv[1]);

    // Check for negative number
    if (n < 0)
    {
        printf("Factorial of a negative number is not possible.\n");
        return 1;
    }

    // Calculate factorial
    for (i = 1; i <= n; i++)
    {
        fact = fact * i;
    }

    printf("Factorial of %d = %lld\n", n, fact);


     for(int i = 0; i < argc; i++)
    {
        printf("argv[%d] = %s\n", i, argv[i]);
    }

    return 0;
}