// #include <stdio.h>
// int main()
// {
// long long x, y;
// scanf("%d %d", &x, &y);
// long long xx = x, yy = y;
// long long size = 0;
// if (x > y)
// {
//     while (x != 0)
//     {

//         x = x / 10;
//         size++;
//     }
// }
// else
// {
//     while (y != 0)
//     {
//         y = y / 10;
//         size++;
//     }
// }

// long long num1, num2, k = size - 1, carry = 0, i = 0, j = 0;
// long long A[size];
// while (k >= 0)
// {
//     int sum = carry;
//     if (i >= 0)
//     {
//         num1 = xx % 10;
//         xx = xx / 10;
//     }
//     if (j >= 0)
//     {
//         num2 = yy % 10;
//         yy = yy / 10;
//     }
//     A[k] = (num1 + num2 + carry) % 10;
//     carry = (num1 + num2) / 10;
//     k--;
// }
// long long final = 0;
// for (long long j = 0; j < size; j++)
// {
//     final = final * 10 + A[j];
// }
// printf("%d\n", final);
//     return 0;
// }

#include <stdio.h>
int main()
{
    int num1[255], num2[255], sum[255];
    char s1[255], s2[255];
    int l1, l2;

    printf("Enter Number1:");
    scanf("%s", &s1);
    printf("Enter Number2:");
    scanf("%s", &s2);

    /* convert character to integer*/

    for (l1 = 0; s1[l1] != '\0'; l1++)
        num1[l1] = s1[l1] - '0';

    for (l2 = 0; s2[l2] != '\0'; l2++)
        num2[l2] = s2[l2] - '0';

    int carry = 0;
    int k = 0, i, j;
    for (i = l1 - 1,j = l2 - 1; i >= 0 && j >= 0; i--, j--, k++)
    {
        sum[k] = (num1[i] + num2[j] + carry) % 10;
        carry = (num1[i] + num2[j] + carry) / 10;
    }
    if (l1 > l2)
    {

        while (i >= 0)
        {
            sum[k++] = (num1[i] + carry) % 10;
            carry = (num1[i--] + carry) / 10;
        }
    }
    else if (l1 < l2)
    {
        while (j >= 0)
        {
            sum[k++] = (num2[j] + carry) % 10;
            carry = (num2[j--] + carry) / 10;
        }
    }
    else
    {
        if (carry > 0)
            sum[k++] = carry;
    }

    printf("Result:");
    for (k--; k >= 0; k--)
        printf("%d", sum[k]);

    return 0;
}