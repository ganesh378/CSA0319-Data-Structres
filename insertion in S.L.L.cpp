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
 void insert()
 {
 	int ele;
 	printf("\n enter the element:");
 	scanf("%d",&ele);
 	newnode=(struct node*)malloc(sizeof(struct node));
 	newnode->data=ele;
 	p=head;
 	newnode->next=p;
 	head=newnode;
 	p=newnode;
 }
 void insertion_at_end()
 {
 	int ele;
 	printf("\n enter the element:");
 	scanf("%d",&ele);
 	newnode=(struct node*)malloc(sizeof(struct node));
 	newnode->data=ele;
 	newnode->next=NULL;
 	for(p=head;p->next!=NULL;p=p->next);
	    p->next=newnode;
	p=newnode;
 }
 void insertion_at_any_position()
 {
 	int i,ele,pos;
 	printf("enter element and position");
 	scanf("%d %d",&ele,&pos);
 	newnode=(struct node*)malloc(sizeof(struct node));
 	newnode->data=ele;
 	for(i=1,p=head;i<pos;i++,p=p->next)
 	{
 		t=p;
	}
	t->next=newnode;
	newnode->next=p;
	p=newnode;
 }
  void deletion()
 {
 	int ele;
 	p=head;
 	ele=p->data;
 	head=p->next;
 	free(p);
 	printf("the deleted element is:%d",ele);
 }
 void delete_at_end()
 {
 	int ele;
 	for(p=head;p->next!=NULL;p=p->next)
 	{
 		t=p;
	}
	ele=p->data;
	t->next=NULL;
	free(p);
	p=t;
	printf("%d is deleted from the list \n",ele);
 }
 void delete_at_any_position()
 {
 	int ele,i,pos;
 	printf("enter the position:");
 	scanf("%d",&pos);
 	for(p=head,i=1;i<pos;i++,p=p->next)
 	{
 		t=p;
	}
	ele=p->data;
	t->next=p->next;
	free(p);
	p=t;
	printf("%d is deleted from the list",ele);
 }
 void count()
 {
 	int o=0,e=0,i;
 	for(p=head;p->next!=NULL;p=p->next)
 	{
	    if(p->data%2==0)
		{
			e++;
		} 		
		else
		{
			o++;
		}
	}
	printf("no of even numbers=%d",e);
	printf("no of odd numbers=%d",o);
 }
 void sum()
 {
 	int s=0;
 	for(p=head;p->next!=NULL;p=p->next)
 	{
 		s=s+(p->data);
	 }
	 printf("sum is:%d",s);
 }
 void odd_print()
 {
 	int i;
 	for(i=1,p=head;p!=NULL;i++,p=p->next)
 	{
 		if(i%2==1)
 		{
 			printf("%d\t",p->data);
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
 		printf("\n 1.create \n 2.insertion at begin \n 3.insertion at end \n 4.inserion at any position\n 5.delete at begin \n 6.delete at end \n 7.delete at any position  \n 8.odd & even count \n 9.sum \n 10.odd print \n 11.display \n 12.exit");
 		printf("\n enter choice:");
 		scanf("%d",&ch);
 		switch(ch)
 		{
 			case 1:create();
 			break;
 			case 2:insert();
 			break;
 			case 3:insertion_at_end();
 			break;
 			case 4:insertion_at_any_position();
 			break;
 			case 5:deletion();
 			break;
 			case 6:delete_at_end();
 			break;
 			case 7:delete_at_any_position();
 			break;
 			case 8:count();
 			break;
 			case 9:sum();
 			break;
 			case 10:odd_print();
 			break;
 			case 11:display();
 			break;
 			case 12:exit(0);
 			break;
		}
	 }
	 while(ch>=1 &&ch<=12);
 }
