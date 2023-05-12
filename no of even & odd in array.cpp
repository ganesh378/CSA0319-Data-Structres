#include<stdio.h>
main()
{
	int a[50],n,i;
	int ec=0,oc=0;
	printf("enter the no of elements to be printed:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter the elements:");
		scanf("%d",&a[i]);
		printf("the array =%d",a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]%2==0)
			ec++;
		else
			oc++;
	}
	printf("\n the no of even numbers=%d",ec);
	printf("\n the no of odd numbers=%d",oc);
	return 0;
}