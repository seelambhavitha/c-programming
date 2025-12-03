//distance travelled by object //

#include<stdio.h>
main()
{
	float u,t,a,d;
	printf("enter initial velocity");
	scanf("%f",&u);
	printf("enter accelaration");
	scanf("%f",&a);
	printf("enter time");
	scanf("%f",&t);
	d=u*t+0.5*a*t*t;
	printf("The distance is %f",d);
}
