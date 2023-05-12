#include<stdio.h>
int fact(int n)
{
	if(n==0 ||n==1)
	{
		return 1;
	}
	else
	{
		return(fact(n)*fact(n-1));
	}
}
main()
{
	int n;
	printf("enter a number:");
	scanf("%d",&n);
	while(n!=0)
	{
		printf("the factorial is:%d",fact(n));
	}
}
