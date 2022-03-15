#include <stdio.h>
int main()
{
    int count = 0, x;

    for (int i = 0; i <= 1000; i++)
    {
        int num = i;
        while (num != 0)
        {

            x = num % 10;
            num = num / 10;
            if (x == 0)
            {
                count++;
            }
        }
    }
    printf("Total number of zeroes between 0 and 1000 are %d\n", count);
}
