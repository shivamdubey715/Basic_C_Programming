#include <stdio.h>

int main()
{
    int n1;
    printf("Enter the length of array\n");
    scanf("%d", &n1);
    int A[n1];
    for (int i = 0; i < n1; i++)
    {
        scanf("%d", &A[i]);
    }
    int carry = 0, i = n1 - 1;
    while (i >= 0)
    {
        int sum = carry;
        if (i >= 0)
        {
            sum += A[i];
        }
        carry = sum / 10;
        int r = sum % 10;
        A[i] = r;
        i--;
    }
    if (carry != 0)
    {
        printf("%d ", carry);
    }
    
    for (int j = 0; j < n1; j++)
    {
        printf("%d ", A[j]);
    }
    
    return 0;
}