//calculation of simple intrest and compound intrest 

#include<stdio.h>
#include<math.h>
main()
{
	float P,R,T,Si,Ci;
	printf("enter the principle amount");
	scanf("%f",&P);
	printf("enter the rate of intrest");
	scanf("%f",&R);
	printf("enter time");
	scanf("%f",&T);
	Si=P*R*T/100;
	printf("The simple intrest is %0.2f\n",Si);
	Ci=P*pow(1+R/100,T)-P;
	printf("The compound intrest is %0.1f",Ci);
}
