//program of functions with arg and with return type ( sum 1 to n )
#include<stdio.h>
int sum_n(int);
main()
{
	int n,sum;
	printf("Enter the range");
	scanf("%d",&n);
	sum=sum_n(n);
	printf("The sum is %d",sum);	
}
int sum_n(int x)
{
    int i,s=0;
    for(i=1;i<=x;i++)
    {
    	s=s+i;
	}
	return s;
}

