#include<stdio.h>
main()
{
	int A[10],i,n,k,flag=0,pos;
    printf("enter no of elements to be printed:");
    scanf("%d",&n);
    printf("enter the elements for array:");
    for(i=0;i<=n-1;i++)
    {
	    scanf("%d",&A[i]);
    }
    printf("the array is:");
    for(i=0;i<=n-1;i++)
    {
    	printf("\t%d",A[i]);
	}
	printf("\n enter the key element:");
	scanf("%d",&k);
	for(i=0;i<=n-1;i++)
	{
		if(A[i]==k)
		{
			flag++;
			pos=i;
		}
	}
	if(flag==1)
	{
		printf("the element is in array");
		printf("\n the position is:%d",pos);
	}
	else
	{
		printf("the element is not in array");
	}
}

