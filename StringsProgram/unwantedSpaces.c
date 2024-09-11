
// WAP to delete all unwanted spaces from from string 
#include<stdio.h>
int main()
{
    char str[100];
    int i;

    printf("\n Enter any String : ");
    gets(str);

    for(int i=0; str[i]!=0; i++)
    {
        if (((str[i] >= 'a' && str[i] <= 'z') || (str[i] >='A' && str[i] <='Z')) || (str[i-1]==32 && str[i]!=32) || str[i] == ' ' && str[i+1]!=32  )
        {
            printf("%c",str[i]);              
        }
        else
        {
            printf("");
        }
    }


    printf("\n");
    return 0;
}
