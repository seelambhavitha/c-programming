#include<stdio.h>
int main()
{
	int a,b,c;
	char op;
	printf("enter opearator(+,-,*,/,%)");
	scanf("%c",&op);
	printf("enter 2 values");
	scanf("%d%d",&a,&b);
	switch(op)
	{
	case '+':c=a+b;
			printf("Addition is:%d",c);
			break;
	case '-':c=a-b;
			printf("Subtraction is:%d",c);
			break;
	case '*':c=a*b;
			printf("Multiplication is:%d",c);
			break;
	case '/':c=a/b;
			printf("Division is:%d",c);
			break;
	case '%':c=a%b;
			printf("Addition is:%d",c);
			break;
		
	default:printf("Invalid Day");
	break;
}
return 0;
}
