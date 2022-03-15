#include <stdio.h>
int main()
{
    int digit4, digit3, digit2, digit1;
    int count = 0; //Initialise count with 0 to avoid any garbage value

    for (int i = 1000; i <= 9999; i++)
    {
        int num = i;
        while (num != 0)
        {
            digit4 = num % 10; // Modulud(%) helps to extract the last digit of the number
            num = num / 10;    // Divide num by 10 to avoid any decimal values and to remove last digit so that we can proceed on the next digit
            while (num != 0)
            {
                digit3 = num % 10;
                num = num / 10;
                while (num != 0)
                {
                    digit2 = num % 10;
                    num = num / 10;
                    while (num != 0)
                    {
                        digit1 = num % 10;
                        num = num / 10;
                    }
                    if (digit4 > digit3 && digit3 > digit2 && digit2 > digit1) // If all the digits of a number are in ascending order count it
                    {
                        count++;
                    }
                }
            }
        }
    }
    printf("Total number of Ascending order digit numbrers between 1000 and 9999 are %d\n", count);

    return 0;
}
