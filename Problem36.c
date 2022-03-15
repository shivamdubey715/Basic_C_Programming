#include <stdio.h>

int main()
{
    char character;
    printf("Enter the number of which ASCII value you want\n");
    scanf("%d", &character);
    printf("The ASCII value of %d is %c\n", character, character);
    
    return 0;
}
