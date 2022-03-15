// #include<stdio.h>

// int main(){
//     int i;
//     scanf("%d", &i);
//     printf("%d\n", i/1);
//     return 0;
// }


#include<stdio.h>
int main()
{
    int length,i,j;
    char string1[50];
    char string2[50];
    printf("Enter the Number: ");
    scanf("%s",string1);
    i=0;
    while(string1[i] == 48) i++;
    j = 0;
    while(string1[i] != 0)
    {
        string2[j] = string1[i];
        j++;
        i++;
    }
    string2[j] = 0;
    printf("Number after Leading Zeros Removed = %s\n",string2);
}