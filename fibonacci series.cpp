#include<stdio.h>
main()
{
	int a=0,b=1,c,n;
	printf("enter no of elements to be printed:");
	scanf("%d",&n);
	printf("%d %d",a,b);
	for(int i=1;i<n;i++)
	{
		c=a+b;
		printf("%d ",c);
		a=b;
		b=c;
	}
}
