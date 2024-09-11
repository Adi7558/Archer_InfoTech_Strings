#include<stdio.h>
int main()
{
    char str[50];
    int i,cnt=0;

    printf("\n Enter the String: ");
    gets(str);

    for(i=0; str[i]!='\0'; i++)
    {
        cnt++;
    }

    printf("\n Length Of The String %d ",cnt);
    return 0;   
}