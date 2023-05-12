#include<stdio.h>
main()
{
	int i,j,k,r,c,A[5][5],B[5][5],C[5][5];
	printf("enter no of rows and columns:");
	scanf("%d %d",&r,&c);
	printf("enter the elements for matrix A:");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&A[i][j]);
		}
	}
	printf("enter the elements for matrix B:");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&B[i][j]);
		}
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			C[i][j]=0;
			for(k=0;k<c;k++)
			{
				C[i][j]+=A[i][k]*B[k][j];
			}
		}
	}
	printf("matrix multiplication:");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d\t",C[i][j]);
		}
		printf("\n");
	}
}
