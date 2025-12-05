#include<stdio.h>
int main()
{
	int r;
	float ac,acc;
	printf("enter r value");
	scanf("%d",&r);
	ac=3.1415*r*r;
	acc=2*3.1415*r;
	printf("area of circle is;%f\n",ac);
	printf("area of circumference is:%f",acc);
return 0;
}

