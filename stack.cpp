#include<stdio.h>
#include<stdlib.h>
# define max_size 5
int stack[max_size];
int top=-1;
void push()
{
	int v;
	if(top>=max_size)
	{
		printf("stack overflow");
	}
	else
	{
		top++;
		stack[top]=v;
		printf("%d is pushed to stack",v);
	}
}
void pop()
{
	int v;
	if(top<0)
	{
		printf("\n stack underflow");
	}
	else
	{
		v=stack[top];
		top=top-1;
		printf("%d is popped from stack",v);
	}
}
void peek()
{
	if(top<0)
	{
		printf("stack underflow \n");
	}
	else
	{
		printf("the top element is %d",stack[top]);
	}
}
void display()
{
	if(top==-1)
	{
		printf("stack is empty");
	}
	else
	{
		for(int i=top;i>=0;i--)
		{
			printf("\n %d",stack[i]);
		}
	}
}
main()
{
	int ch,v;
	while(1)
	{
		printf("\n 1.push");
		printf("\n 2.pop");
		printf("\n 3.peek");
		printf("\n 4.exit");
		printf("\n enter choice:");
		scanf("%d",ch);
		switch(ch)
		{
			case 1:
				push();
			break;
			case 2:
				pop();
			break;
			case 3:
				peek();
			break;
			case 4:
				display();
			break;
			case 5:
				exit(0);
			
		}
	}
	while(ch>=1 && ch<=5);
	return 0;
}
