#include<stdio.h>

int main()
{
    long long int num, x, reverse = 0;
    printf("Enter the number: \n");
    scanf("%d", &num);
    while (num != 0)
    {
        x = num % 10;
        reverse = reverse*10 + x;
        num = num / 10;
    }
    printf("Reversed order is: %d\n", reverse);
    
    return 0;
}
