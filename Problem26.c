#include <stdio.h>


int main()
{

    int j, i; // Declared i,j,count as an integer
    for (i = 100; i < 1000; i++)
    {
        for (j = 2; j <= i; j++)
        {
            if (i % j == 0)
            {
                break; // If i is divisible by j then we don't need that number means it is not a prime number
            }
        }
        if (i == j) // Inner 'for' loop coudn't find any common factor between i and j other than itself, means it is a prime number as a number divided by itself is 1
        {
            printf("The smallest three digit prime number is %d\n", i);
            break;
            
        }
    }

    return 0;
}