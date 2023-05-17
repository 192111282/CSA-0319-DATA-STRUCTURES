#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
struct node
{
	int data;
	struct node *next,*prev;
}*head=NULL, *p, *t,*newnode;
void create()
 {
 	int i,n,ele;
 	printf("enter the list count");
 	scanf("%d",&n);
 	for(i=0;i<n;i++)
 	{
 		printf("enter the elements");
 		scanf("%d",&ele);
 		newnode=(struct node*)malloc(sizeof(struct node));
 		newnode->data=ele;
 		newnode->next=NULL;
 		newnode->prev=NULL;
 		if(head==NULL)
 		{
 			head=newnode;
 			p=newnode;
		 }
		 else
		 {
		 for(p=head;p->next!=NULL;p=p->next);
		 p->next=newnode;
		 newnode->prev=p;
		 p=newnode;
	 }
 }
}
void display()
{
	if(head==NULL)
	printf("linked list is empty");
	else
	for(p=head;p!=NULL;p=p->next)
	printf("%d<=>",p->data);
}
void display_reverse()
{
	for(p=newnode;p!=NULL;p=p->prev)
	printf("%d<=>",p->data);
}
int main()
{
    int choice;
    do
	{
        printf("\n 1.create");
        printf("\n 2. display");
        printf("\n 3.display_reverse");
        printf("\n 4. exit");
        printf("\n enter your choice:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: create(); break;
            case 2:display();  break;
            case 3:display_reverse(); break;
            case 4:exit(0); break;
        }
	}
	while((choice>=1)&&(choice<=4));
    return 0;
}

