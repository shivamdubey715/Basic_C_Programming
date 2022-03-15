#include <stdio.h>

int main()
{
    char character[1000];
    printf("Enter the number of which ASCII value you want\n");
    scanf("%s", &character);
    printf("The ASCII value of %s is %d\n", character, character);
    
    return 0;
}