 //write a simple programme to read int , float,char and string using scanf() and display using (1.e)
//print()in all the above given platforms.
#include <stdio.h>
main()
{
	int x;
	float y;
	char ch;
	char s[100];
	printf("enter a integer");
	scanf("%d",&x);
	printf("enter the floating point number");
	scanf("%f",&y);
	printf("enter the character");
	scanf("\n");
	scanf("%c",&ch);
	printf("enter a word");
    scanf("%s",s);
	printf("the integer is %d\n",x);
	printf("the floating point number is %f\n",y);
	printf("the character is %c\n",ch);
	printf("the string is %s",s);
}
