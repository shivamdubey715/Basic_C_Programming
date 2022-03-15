#include <stdio.h>

int main()
{
    int num = 10, sum = 0;
loop:
    num++;
    if (num < 100)
    {
        if (num % 2 != 0)
        {

            sum += num;
        }
        goto loop;
    }
    printf("The sum of all double digit odd numbers is %d\n", sum);

    return 0;
}