#include <stdio.h>

int main()
{
    int num = 0, sum = 0;
loop:
    num++;
    if (num < 10)
    {
        if (num % 2 != 0)
        {

            sum += num;
        }
        goto loop;
    }
    printf("The sum of all single digit odd numbers is %d\n", sum);

    return 0;
}