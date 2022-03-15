
#include <stdio.h>

int main()
{

    int j, i, count = 0;  // Declared i,j,count as an integer
    for (i = 2; i < 10; i++)
    {
        for ( j = 2; j <= i; j++)
        {
            if (i % j == 0)
            {
                break;  // If i is divisible by j then we don't need that number means it is not a prime number
            }
        }
        if (i == j)  // Inner 'for' loop coudn't find any common factor between i and j other than 1 and itself, means it is a prime number
        {
            count++;
        }
     }
    printf("Total single digit prime number are %d\n", count);

    return 0;
}
