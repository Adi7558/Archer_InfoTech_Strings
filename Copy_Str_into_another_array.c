// Enter the string and copy the string into another character array.


#include<stdio.h>
int main()
{
    char s1[30], s2[30];
    int i;
    printf("\n Enter any String: ");
    gets(s1);

    for(i=0; s1[i]!=0; i++)
    {
        s2[i]=s1[i];
    }

    s2[i]='\0';
    printf(" \n Original String: %s ",s1);
    printf("\n Copied String: %s",s2);

    return 0;
}

int main()
{
    char s1[30], s2[30];
    int i,j;
    printf("\n Enter an String: ");
    gets(s1);

    for(i=0; s1[i]!=0; i++);
    for(j=0, i--;i>=0; i--,j++ )
    {
        s2[i]=s1[j];
    }

    s2[j]='\0';

    printf("\n Original String: %s ",s1);
    printf("\n Copied string: %s", s2);

    return 0;
    
}