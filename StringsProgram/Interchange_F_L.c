	// WAP to interchange the first and last character of every word in the string

	// str --> hello   best  morning  student
 //        o/p --> oellh   tesb  gorninm  ttudens
 //                                           | 
 //  ------hello---best--morning--student-----0
                                           |
#include <stdio.h>
int main()
{
	char str[40], tmp;
	int i,j;
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
		
		tmp=str[i];
		str[i]=str[j];
		str[j]=tmp;
		
		i=j;	
	}
	printf("\n string after interchange: %s",str);
	return 0;
}
