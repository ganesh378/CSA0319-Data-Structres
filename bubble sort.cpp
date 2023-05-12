#include<stdio.h>
main()
{
	int A[10]={13,67,45,30,2,57,10};
	int n=7,i,j,temp=0;
	printf("the sorted array is:");
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			if(A[j]>A[j+1])
			{
				temp=A[j];
				A[j]=A[j+1];
				A[j+1]=temp;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%d\t",A[i]);
	}
}
