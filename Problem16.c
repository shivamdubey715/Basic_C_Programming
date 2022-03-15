

#include <stdio.h>

int main()
{
    int num = 100, count = 0;
loop:
    num++;
    if (num <= 999)
    {
        if (num % 2 != 0)
        {

            count++;
        }
        goto loop;
    }
    printf("Total number of THREE digit odd numbers are %d\n", count);

    return 0;
}