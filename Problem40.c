#include <stdio.h>

int main()
{
    int num[1000];
    printf("Enter the number of which ASCII value you want\n");
    scanf("%d", &num);
    printf("The ASCII value of %d is %s\n", num, num);
    
    return 0;
}