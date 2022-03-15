#include <stdio.h>

int main()
{
    int i = 0, count = 1;
    char str[1000];
    printf("Enter the string: \n");
    scanf("%s", str);
loop:
    i++;
    if (str[i] != '\0')
    {
        if (str[i] == ' ')
        {
            count++;
        }

        count++;
        goto loop;
    }
    printf("Length of the string is %d\n", count);
    return 0;
}
