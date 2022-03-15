//Using if and goto statement

// #include <stdio.h>

// int main()
// {
//     int num, x, sum = 0;
//     printf("Enter the number\n");
//     scanf("%d", &num);
// loop:

//     x = num % 10;
//     num = num / 10;
//     sum = sum + x;
//     if (num != 0)
//     {
//         goto loop;
//     }
//     printf("Sum of the digits of your number: %d\n", sum);

//     return 0;
// }


// Using while loop
#include <stdio.h>

int main()
{
    int num, x, sum = 0;
    printf("Enter number\n");
    scanf("%d", &num);
    while (num != 0)
    {
        x = num % 10;
        num = num / 10;
        sum = sum + x;
    }
    printf("Sum of the digits of your number: %d\n", sum);

    return 0;
}