//conversion of celsius to fahrenheit //

#include<stdio.h>
main()
{
	float ctemp,ftemp;
	printf("enter the temp in celsius");
	scanf("%f",&ctemp);
	ftemp=1.8*ctemp+32;
	printf("the temp in fahrenheit is %f",ftemp);
	
}
