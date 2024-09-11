
	// WAP to find two strings are matching or not.

int main()
{
	char s1[30],s2[30];
	int i,j,flg=0;

	printf("\n Enter 1st string: ");
	gets(s1);

	printf("\n Enter 2nd string: ");
	gets(s2);

	for(i=0;s1[i]!='\0';i++);
	for(j=0;s2[j]!='\0';j++);

	if(i==j)
	{
		for(i=0;i<=j;i++)
		{
			if(s1[i]!=s2[i])
			{
				flg=1;
				break;	
			}
		}
	}
	else
	{
		flg=1;
	}

	if(flg==0)
	{
		printf("\n String are matching");
	}
	else
	{
		printf("\n String are not matching");
	}
	return 0;
}
