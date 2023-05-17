#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
struct node
{
	int data;
	struct node *next;
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
 		if(head==NULL)
 		{
 			head=newnode;
 			p=newnode;
		 }
		 else
		 {
		 for(p=head;p->next!=NULL;p=p->next);
		 p->next=newnode;
		 p=newnode;
	 }
 }
}
void insert_at_begin()
{
	int ele;
	printf("enter the element");
	scanf("%d",&ele);
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=ele;
	p=head;
	newnode->next=p;
	head=newnode;
	p=newnode;
}
void insert_at_last()
{
	int ele;
	printf("enter the element");
	scanf("%d",&ele);
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=ele;
	newnode->next=NULL;
	for(p=head;p->next!=NULL;p=p->next);
	p->next=newnode;
	p=newnode;
}
void insert_at_any_position()
{
	int i,ele,pos;
	printf("enter element and position");
	scanf("%d %d",&ele,&pos);
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=ele;	
	for(i=1,p=head;i<pos;i++,p=p->next)
	t=p;
	t->next=newnode;
	newnode->next=p;
	p=newnode;
}
void delete_at_begin()
{
	int ele;
	p=head;
	ele=p->data;
	head=p->next;
	free(p);
	printf("enter the deleted element %d",ele);
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
	printf("enter the deleted element %d",ele);
}
void delete_at_any_posi()
{
	int i,pos,ele;
	printf("enter the posi");
	scanf("%d",&pos);
	for(p=head,i=1;i<pos;i++,p=p->next)
	{
	    t=p;
	}
	ele=p->data;
	t->next=p->next;
	free(p);
	p=t;
	printf("enter the deleted element %d",ele);
}
void even_odd_count()
{
	int odd=0,even=0,i;
	for(p=head;p->next!=NULL;i++,p=p->next)
	{
	if(p->data%2==0)
	even++;
	else
	odd++;
    }
    printf("even count is %d:",even);
    printf("odd count is %d:",odd);
}
void sum_sll()
{
	int i,sum=0;
	for(p=head;p->next!=NULL;i++,p=p->next)
	{
		sum=sum+(p->data);
	}
	printf("sum of SLL is %d :",sum);
}
void odd_print()
{
	int i;
	for(p=head;p->next!=NULL;i++,p=p->next)
	{
		if(i%2==1)
		printf("odd print is %d\t:",p->data);
	}
}
void display()
{
    int data;
	if(head==NULL)
	printf("linked list is empty");
	else
	for(p=head;p!=NULL;p=p->next)
	printf("%d->",p->data);
}
void search_key()
{
	int key,pos,i,flag=0;
	printf("enter the key::");
	scanf("%d",&key);
	for(i=1,p=head;p!=NULL;p=p->next,i++)
	{
		if(p->data)
		{
			flag=1;
			pos=i;
			break;
		}
	}
	if(flag==1)
	printf("the element %d at %d position ",key,pos);
	else
	printf("the key element not in SLL");
}
int main()
{
    int choice;
    do
	{
		printf("\n\n MAIN MENU");
        printf("\n 1.create");
        printf("\n 2. display");
        printf("\n 3.insert_at_begin");
        printf("\n 4.insert_at_last");
        printf("\n 5.insert_at_any_position");
        printf("\n 6. delete_at_begin");
        printf("\n 7.delete at end");
        printf("\n 8.delete_at_any_posi");
        printf("\n 9.sum_SLL");
        printf("\n 10.odd_print");
        printf("\n 11.even_odd_count");
        printf("\n 12.search_key");
		printf("\n 13. exit");
		printf("\n enter your chioce:  ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: create(); break;
            case 2:display();  break;
            case 3:insert_at_begin(); break;
            case 4:insert_at_last(); break;
            case 5:insert_at_any_position(); break;
            case 6:delete_at_begin(); break;
            case 7:delete_at_end();  break;
            case 8:delete_at_any_posi();  break;
            case 9:sum_sll();  break;
            case 10: odd_print();  break;
            case 11:even_odd_count(); break;
            case 12:search_key(); break;
            case 13:exit(0);
        }
	}
	while((choice>=1)&&(choice<=13));
}

