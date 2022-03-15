
// #include <stdio.h>

// int checkValidation(char str[])
// {
// 	int j;
// 	for (j = 0; str[j] != '\0'; j++);
	
// 	for (int i = 0; i < j; i++)
// 	{
// 		if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
// 		{
// 			return 0;
// 			break;
// 		}
// 	}
// 	return 1;
// }

// int main()
// {
// 	char str[10000];
// 	scanf("%s", str);
// 	if (checkValidation(str) == 1)
// 	{
// 		printf("Valid\n");
// 	}
// 	else
// 	{
// 		printf("Invalid\n");
// 	}
// 	return 0;
// }


#include<stdio.h>
int main()
{
    int length,i;
    char string[50];
    printf("Enter the Number: ");
    scanf("%s",string);
    i=0;
    while(string[i] != 0)
    {
        if((string[i] < 48) || (string[i] > 57))
        {
            printf("Invalid Number\n");
            return 0;
        }
        i++;
    }
    printf("Valid Number\n");
}