	// WAP to reverse every word in the string at same location 
	
	// str --> hello   best  morning  student
	// o/p --> olleh   tseb  gninrom  tneduts

#include <stdio.h>
int main()
{
	char str[40], tmp;
	int i,j,t;
	printf("\n Enter the string: ");
	gets(str);
	printf("\n Entered string: %s",str);

	for(i=0;str[i]!='\0';i++)
	{
		for(j=i;str[j]==32;j++); 
		i=j;	
		if(str[i]=='\0')
		{
			break;
		} 	
		for(j=i;(str[j]!=32 && str[j]!='\0');j++);
		j=j-1;
		printf("\n i=%d \t j=%d",i,j);
		t=j;
		while(i<=j)
		{
		    tmp=str[i];
		    str[i]=str[j];
		    str[j]=tmp;
		    i++;
		    j--;
		}
		i=t;	
	}
	printf("\n string after interchange: %s",str);
	return 0;
}
