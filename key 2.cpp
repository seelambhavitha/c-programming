#include<stdio.h>
int main()
{
	int a[10],key,mid,l,h,i,n,f=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	scanf("%d",&key);
	l=0,h=n-l;
	while(l<=h)
	{
		mid=(l+h/2);
		if(key==a[mid])
		{
			f++;
			printf("%d found at %d position",key,mid);
			break;
		}
		else if (key<a[mid])
		h=mid-l;
		else
		l=mid+l;
	} 
	if(!f)
	printf("%d not found",key);
return 0;
	}
	
	
	

