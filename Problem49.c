#include <stdio.h>

void convert(int A[], int n)
{
    char  str[10000];
    int i = 0;
    while(i < n)
    {
        str[i] = (char)(A[i]) + '0';
        ++i;
    }
    printf("%s", str);
	printf("\n");
}


int main()
{
	int n;
	scanf("%d", &n);
    int A[n];
	for (int i = 0; i < n; i++)
    {
        scanf("%d", &A[i]);
    }
    
	convert(A, n);
	return 0;
}