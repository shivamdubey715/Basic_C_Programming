#include <stdio.h>
int main()
{
    int x, y;
    printf("Enter a THREE digit Number : ");
    scanf("%d", &x);
    while (x != 0)
    {
        y = x % 10;
        x = (x / 10) % 10;
    }

    printf("The digit in Tens position is %d\n", y);
}