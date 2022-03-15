// #include <stdio.h> 
// int NumberToDigit(int num) {
//     int x;
//     while (num != 0)
//     {
//         x = num % 10;
//         printf("Character value of %d is %c\n", x, x);
//         num = num / 10;
//     }
    
// }
// int main()
// {
//     int num;
//     printf("Enter the number: \n");
//     scanf("%d", &num);
//     NumberToDigit(num);

//     return 0;
// }


#include<stdio.h>
int main()
{
    int number1,number2;
    printf("Enter a Number: ");
    scanf("%d",&number1);
    number2 = 0;
    while(number1 != 0)
    {
        number2 = (number2 * 10) + (number1%10);
        number1 = number1/10;
    }
    while(number2 != 0)
    {
        printf("%c\n",((number2%10)));
        number2 = number2/10;
    }

}