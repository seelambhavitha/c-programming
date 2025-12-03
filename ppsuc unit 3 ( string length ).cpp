//program to find length of the string 4
#include<stdio.h>
main()
{
	char mystr[20];
	int i,l=0;
	printf("enter a string");
	gets(mystr);
	for(i=0;mystr[i]!='\0';i++)
	{
		l=l+1;
	}
	printf("The length of the string is %d",l);
}
