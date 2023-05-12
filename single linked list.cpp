 #include<stdio.h>
 #include<stdlib.h>
 #include<malloc.h>
 struct node
 {
 	int data;
 	struct node *next;
 }*head=NULL,*p,*t,*newnode;
 void create()
 {
 	int i,n,ele;
 	printf("enter the list count:");
 	scanf("%d",&n);
 	for(i=0;i<n;i++)
 	{
 		printf("enter the elements for list:\n");
 		scanf("%d",&ele);
 		newnode=(struct node*)malloc(sizeof(struct node));
 		newnode->data=ele;
 		newnode->next=NULL;
 		if(head==NULL)
 		{
 			head=newnode;
 			p=newnode;
		}
		else
		{
			for(p=head;p->next!=NULL;p=p->next);//";" used in loop to directly come out of loop and print the value instead of entering into the loop//
			{
				p->next=newnode;
				p=newnode;
			}
		}
	}
 }
 void display()
 {
 	int data;
 	if(head==NULL)
 	{
 		printf("linked list is empty");
	}
	else
	{
		for(p=head;p!=NULL;p=p->next)
		{
			printf("%d->",p->data);
		}
	}
 }
 main()
 {
 	int ch;
 	do{
 		printf("\n 1.create \n 2.display \n 3.exit");
 		printf("\n enter choice:");
 		scanf("%d",&ch);
 		switch(ch)
 		{
 			case 1:create();
 			break;
 			case 2:display();
 			break;
 			case 3:exit(0);
 			break;
		}
	 }
	 while(ch>=1 &&ch<=3);
 }
