// #include <stdio.h>

// int main()
// {
//     int num, x, reverse = 0;
//     printf("Enter your four digit number\n");
//     scanf("%d", &num);
//     while (num != 0)
//     {
//         x = num % 10;
//         reverse = reverse * 10 + x;
//         num = num / 10;
//     }
//     printf("Reversed order is: %d\n", reverse);

//     return 0;
// }

#include <stdio.h>

int main()
{
    int num, x, reverse = 0;
    printf("Enter your four digit number\n");
    scanf("%d", &num);
loop:

    x = num % 10;
    reverse = reverse * 10 + x;
    num = num / 10;
    if (num != 0)
    {
        goto loop;
    }

    printf("Reversed order is: %d\n", reverse);

    return 0;
}