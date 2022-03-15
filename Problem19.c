#include <stdio.h>

int main()
{
    int num = 100, sum = 0;
loop:
    num++;
    if (num < 1000)
    {
        if (num % 2 != 0)
        {

            sum += num;
        }
        goto loop;
    }
    printf("The sum of all three digit odd numbers is %d\n", sum);

    return 0;
}