#include <stdio.h>

int main()
{
    int num = 10, count = 0;
loop:
    num++;
    if (num < 100)
    {
        if (num % 2 != 0)
        {

            count++;
        }
        goto loop;
    }
    printf("Total two digit Odd numbers are %d\n", count);

    return 0;
}