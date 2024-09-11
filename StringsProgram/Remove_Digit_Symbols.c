

    //    Enter the string contains digits and random symbols in between,
	//    remove all symbols and digits and display the actual string
	//    (perform the operation @ same locations)


#include<stdio.h>
int main()
{
    char str[50];
    int i, flag=0;

    printf("\n Enter the String: ");
    gets(str);


    for(i=0; str[i]!=0; i++)
    {
        if (((str[i] >= 'a' && str[i] <= 'z') || (str[i] >='A' && str[i] <='Z')) || str[i] == ' ') 
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
