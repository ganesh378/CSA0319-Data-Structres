#include<stdio.h>
int main()
{
	int A[10]={1,2,3,4,5,6,7};
	int key,mid,last,first,n=7,flag=0,pos;
	printf("Enter the key:");
	scanf("%d",&key);
	first=0;
	last=n-1;
	while(first<=last)
	{
		mid=(first+last)/2;
		if(A[mid]==key)
		{
			flag=1;
			pos=mid;
			break;
		}
		else if(A[mid]<key){
			first=mid+1;
		}
		else if(A[mid]>key)
		{
			last=mid-1;
		}
		}
		if(flag==1)
		{
			printf("The key is found at the position %d",pos);
		}
		else
		{
			printf("The key is not found");
		}
	}
