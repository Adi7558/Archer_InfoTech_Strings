#include<stdio.h>
/*
int main()
{
    char str[]={'a','b','c','\0'};
    char nm[40]="Aditya";

    printf("\n String str is: %s",str);
    printf("\n String str is: %s",nm);
}

	// different ways of String display 

	1 - using %s as format specifier
	2 - using loop and %c - character by character display
	3 - using puts() function

2.

int main()
{
    char str[20] = {'h','e','l','l','o','\0'};
    int i;
    printf("\n String str is: ");
    for(i=0; str[i]!='\0'; i++)
    {
        printf("%c",str[i]);
    }
    return 0;
}



int main()
{
   char str[20] = {'h','e','l','l','o',' ',' ', '\0'};
    int i;
    printf("\n String str is: ");
    for(i=0; str[i]!='\0'; i++)
    {
        printf("%c",str[i]);
    }

    printf("\n String is: ");
    puts(str);
    printf("\n String str is: %s",str);

    
    return 0;

}



// String - input and display

// Using %s for input - Ok for single word, it considers space as a string terminating character.

int main()
{
    char str[40];
    printf("\n Enter the String : ");
    scanf("%s",&str);
    printf("\n Entered String is : %s",str);
    return 0;
}



// Using loop and %c - character by character input - Not a proper option

int main()
{
    char str[40];
    int i;
    printf("\n Enter the String : ");
    for(i=0;  ; i++)
    {
        scanf("%c",&str[i]);
    }
    printf("\n Entered String is : %s",str);
    return 0;
}

// Using %[^\n] for input - here \n defined as a terminator. - OK



int main()
{
	char str[40];

	printf("\n Enter the string: ");
	scanf("%[^\n]",&str);
	printf("\n Entered String is: %s",str);
	return 0;
}


// Using gets() - input all entered characters and when user hits enter key, it will will place
null('\0') at the end and terminates.

#include <stdio.h>
int main()
{
	char str[40];

	printf("\n Enter the string: ");
	gets(str);
	printf("\n Entered String is: %s",str);
	return 0;
}

*/
