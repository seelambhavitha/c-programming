//program on functions with arguments and without return type ( sum )
#include<stdio.h>
void addition (int,int);
main()
{
	int a,b;
	printf("Enter a and b values");
	scanf("%d%d",&a,&b);         //a,b are actual arguments
	addition(a,b);
}
void addition(int p,int q)      //p,q are formal arguments
{
	int result;
	result=p+q;
	printf("the result is %d",result);
}
