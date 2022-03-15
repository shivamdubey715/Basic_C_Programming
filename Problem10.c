#include <stdio.h>

int main()
{
    int num, x, sum = 0;
    printf("Enter your three digit number\n");
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