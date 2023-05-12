#include<stdio.h>
int A[50],i,n;
void input_array()
{
	printf("enter the no of elements to be printed:");
	scanf("%d",&n);
	printf("enter elements for array:");
	for(i=1;i<=n;i++)
	{
		scanf("%d",&A[i]);
	}
}
void display()
{
	for(i=1;i<=n;i++)
	{
		printf("%d",A[i]);
	}
}
void insertion()
{
	int pos,ele;
	printf("enter position and element:");
	scanf("%d %d",&pos,&ele);
	for(i=n;i>pos;i--)
	{
		A[i]=A[i-1];
		A[i]=ele;
	}
}
void deletion()
{
	int pos,ele;
	printf("enter position:");
	scanf("%d %d",&pos);
	for(i=pos;i<=n-1;i++)
	{
		A[i]=A[i+1];
		A[i]=ele;
	}
}
int main()
{
	printf("1.input \n 2.display \n 3.insertion \n 4.deletion");
	int s;
	printf("\n enter a choise:");
	scanf("%d",&s);
	switch(s)
	{
		case 1:
		     input_array();
		case 2:
			 display();
		case 3:
			 insertion();
		case 4:
			 deletion();
	}
}
