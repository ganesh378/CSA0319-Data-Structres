#include<stdio.h>
main()
{
	int n,fact=1;
	printf("enter a element:");
	scanf("%d",&n);
	while(n!=0)
	{
		fact=fact*n;
		n--;
	}
	printf("the fatorial is:%d",fact);
}
