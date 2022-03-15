#include <stdio.h>
int main()
{
    int n1, n2;
    printf("Enter the length of 1st array\n");
    scanf("%d", &n1);
    int A1[n1];
    for (int i = 0; i < n1; i++)
    {
        scanf("%d", &A1[i]);
    }
    printf("Enter the length of 2nd array\n");
    scanf("%d", &n2);
    int A2[n2];
    for (int i = 0; i < n2; i++)
    {
        scanf("%d", &A2[i]);
    }
    int m;
    if (n1 > n2)
    {
        m = n1;
    }
    else
    {
        m = n2;
    }
    int A3[m];

    int i = n1 - 1;
    int j = n2 - 1;
    int k = m - 1;
    int carry = 0;

    while (k >= 0)
    {
        int sum = carry;
        if (i >= 0)
        {
            sum += A1[i];
        }
        if (j >= 0)
        {
            sum += A2[j];
        }
        carry = sum / 10;
        int r = sum % 10;
        A3[k] = r;
        i--, j--, k--;
    }
    if (carry != 0)
    {
        printf("%d ", carry);
    }
    for (int i = 0; i < m; i++)
    {
        printf("%d ", A3[i]);
    }
    printf("\n");
    return 0;
}
