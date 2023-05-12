#include<stdio.h>
#include<stdlib.h>
# define size 5
int front=-1,rear=-1,que[size];
void enqueue()
{
	int ele;
	printf("enter element:");
	scanf("%d",&ele);
	if(rear==size-1)
	{
		printf("the queue is full");
	}
	else if(front==-1 && rear==-1)
	{
		front=0;
		rear=0;
	}
	else
	{
		rear=rear+1;
		que[rear]=ele;
	}
}
void dequeue()
{
	int ele;
	if(front==-1 && rear==-1)
	{
		printf("queue is empty");
	}
	else
	{
		ele=que[front];
		if(front==rear)
		{
			front=-1;
			rear=-1;
		}
		else
		{
			front=front+1;
			printf("the deleted element is:%d",ele);
		}
	}
}
void display()
{
	int i;
	if(front==-1 && rear==-1)
	{
		printf("que is empty");
	}
	else
	{
		for(i=front;i<=rear;i++)
		{
			printf("%d\t",que[i]);
		}
	}
}
main()
{
    
	int ch;
	while(1){
	printf("\n 1.enqueue \n 2.dequeue \n 3.display");
	printf("\n enter choice:");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:enqueue();
		break;
		case 2:dequeue();
		break;
		case 3:display();
		break;
	}
	return 0;
    }
}

