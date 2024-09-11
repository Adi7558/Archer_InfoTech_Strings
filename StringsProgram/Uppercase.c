

    // Enter any String and Convert it in to Uppercase.


int main()
{
    char str[50];
    int i;

    printf("\n Enter The String: ");
    gets(str);

    printf("\n Entered String: %s",str);

    for(i=0; str[i]!=0; i++)
    {
        if(str[i]>='a' && str[i]<='z')
        {
            str[i]=str[i]-32;
        }
    }

    printf("\n Uppercase string : %s", str);

    return 0;
}