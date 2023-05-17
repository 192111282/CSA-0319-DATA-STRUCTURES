#include<stdio.h>
#include<stdlib.h>
#define size 5
int front=-1,rear=-1,queue[size];
void enque()
{
	int ele;
	if(rear==size-1)
	printf("the queue is full");
	else
	if(front==-1 && rear==-1)
	{
		front=0;
		rear=0;
	}
	else
	rear=rear+1;
	queue[rear]=ele;
	printf("\n%d is enqued");
}
void deque()
{
	int ele;
	if(front==-1 && rear==-1)
	printf("queue is empty");
	else
	{
		ele=queue[front];
		if(front=rear)
		{
			front=-1;
			rear=-1;
		}
		else
		front=front+1;
		printf("the deleted ele is",ele);
	}
}
void display()
{
	int i;
	if(front==-1 && rear==-1)
	printf("queue is empty");
	else
	for(i=front;i<=rear;i++)
	printf("%d/t",queue);
}
int main()
	{
		int cho;
		do
		{
		printf("\n Main Menu\n");
			printf("\n 1.enque\n");
			printf("\n 2.deque\n");
			printf("\n 3.Peek\n");
			printf("\n 4.end\n");
			printf("Enter your choice:");
			scanf("%d",&cho);
	
			switch(cho)
			{
				case 1:enque();
				break;
				case 2:deque();
				break;
				case 3:display();
				break;
				case 4:exit(0);
				
				default:printf("\nEnter no between 1 to 3 !!!");
			}
			
		}
		while(cho>=1 && cho<=4);
	}
