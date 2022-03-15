#include <stdio.h>

void convert(char s[], int n)
{
	int num = 0;
	int A[50];
	for (int i = 0; i < n; i++)
	{
		A[i] = num * 10 + ((int)(s[i]) - 48);
	}
	for (int i = 0; i < n; i++)
	{
		printf("%d ", A[i]);
	}
	printf("\n");
}

// Driver Code
int main()
{
	int n;
	scanf("%d", &n);
	char string[n];
	printf("Enter the Number: ");
	scanf("%s", string);
	convert(string, n);
	return 0;
}
