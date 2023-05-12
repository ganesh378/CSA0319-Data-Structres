#include<stdio.h>
main()
{
	int A[10],i,j,n,temp=0;
	printf("enter the no of elements to be printed:");
	scanf("%d",&n);
	printf("enter elements for array:");
	for(i=0;i<=n-1;i++)
	{
		scanf("%d",&A[i]);
	}
	for(i=1;i<n;i++)
	{
		j=i;
		while(A[j]>A[j-1] && j>0)
		{
			temp=A[j];
			A[j]=A[j-1];
			A[j-1]=temp;
			j--;
		}
	}
	printf("the sorted array is:");
	for(i=0;i<n;i++)
	{
		printf("\t%d",A[i]);
	}
}

