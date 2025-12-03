//to accept a sentence and to print it // ( playing with characters )

#include <stdio.h>
main()
{
	char sen[100];
	printf("enter a sentence");
	scanf("%[^\n]%*c",&sen);
	printf(sen);
}
