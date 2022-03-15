#include <stdio.h>

// LCM is least common multiple so we need smallest number which comes in both number's table.

int main()
{
    int number1, number2, i;
    printf("Enter the numbers numbers : \n");
    scanf("%d%d", &number1, &number2);
    // Enter the both numbers of which LCM is required

    for (i = 1; i < number1 * number2; i++)
    {
        // Use for loop to check which number is the least common multiple
        if (i % number1 == 0 && i % number2 == 0)    // If condition satisfied proceed further
        {
            // If i is the LCM then it should be multiple of both numbers.
            printf("LCM of %d and %d is %d\n", number1, number2, i);
            break;  // We put here break statement to avoid others multiple other than least one
        }
    }

    return 0;
}
