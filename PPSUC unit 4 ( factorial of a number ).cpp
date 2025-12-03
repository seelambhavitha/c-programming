//program to find factorial of a number 
#include<stdio.h>
int fact(int);
main()
{
	int n,f;
	printf("Enter the n value");
	scanf("%d",&n);
	f=fact(n);
	printf("The factorial is %d",f);
}
int fact(int x)
{
	int result;
	if(x==0)
	{
		return 1;
	}
	result=x*fact(x-1);
}
