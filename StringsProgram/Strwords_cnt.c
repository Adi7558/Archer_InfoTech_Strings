
// Enter any string and find the number of words in it.

int main()
{
    char str[50];
    int i, wcnt=0;

    printf("\n Enter an String: ");
    gets(str);

    for(i=0; str[i]!=0; i++)
    {
        if(str[i]==' ')
        {
            wcnt++;
        }
    }
    printf("\n String is: %s",str);
    printf("\n Word Count :%d",wcnt+1);

}