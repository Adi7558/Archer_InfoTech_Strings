
	// WAP to convert the string into title case

		str -->  HELLO   gooD  DaY   to   aLl     0
		o.p -->  Hello   Good  Day   To   All

#include<stdio.h>
int main()
{
    char str[50];
    int i;

    printf("Enter an String:");
    gets(str);

    for(i=0; str[i]!=0; i++)
    {
        if(str[i]!=32 && str[i-1]==32)
        {
            if(str[i]>='a' && str[i]<='z')
            {
                str[i]=str[i]-32;
            }
        }
        else if(str[i]>='A' && str[i]<='Z')
        {
            str[i]=str[i]+32;
        }
    }
    if(str[0]!=' ' && (str[0]>='a' && str[0]<='z'))
    {
        str[0]=str[0]-32;
    }
    printf("\n String is: %s",str);
    return 0;
}