#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#define MAX 50

void delete();
void insert();
void display();
int queue[MAX];
int rear=-1;
int front=-1;

void main()
{ 
	int choice;
	while(1)
	{
	
		printf("Enter your choice:\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				insert();
				break;
			case 2:
				delete();
				break;
			case 3:
				display();
				break;
			case 4:
				exit(1);
			default:
				printf("Wrong choice\n");
		
	}
	}
}

void insert()
{
	int additem;
	if(rear==MAX-1)
		printf("Queue overflow\n");
	else
	{
		if(front==-1)
		front=0;
		printf("insert the elemnet in queue:");
		scanf("%d",&additem);
		rear = rear+1;
		queue[rear]=additem;
		
	}
}

void delete()
{
	if(front==-1 || front>rear)
	{
		printf("Queue underflow\n");
		return;
	}
	else
	{
		printf("element delete:%d\n",queue[front]);
		front=front+1;
	}
}

void display()
{
	int i;
	if(front==-1)
	{
		printf("queue is empty\n");
	}
	else
	{
		printf("Queue is: \n");
		for(i=front;i<=rear;i++)
			printf("%d",queue[i]);
		printf("\n");
	}
}
