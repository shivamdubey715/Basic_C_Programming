#include <stdio.h>

int main()
{
    int num = 0, count = 0;
loop:
    num++;
    if (num < 10)
    {
        if (num % 2 != 0)
        {

            count++;
        }
        goto loop;
    }
    printf("Total single digit Odd numbers are %d\n", count);

    return 0;
}
