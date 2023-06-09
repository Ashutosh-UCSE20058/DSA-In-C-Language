#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

struct node{
	struct node *prev;
	struct node *next;
	int data;
};

struct node *head;
void insertionbegin();
void insertionlast();
void deletebegin();
void deletelast();
void display();
void search();

void main()
{
	int choice=0;
	while(choice!=9)
	{
		printf("Enter your choice:\n");
		scanf("\n%d",&choice);
		switch(choice)
		{
			case 1:
				insertionbegin();
				break;
			case 2:
				insertionlast();
				break;
			case 3:
				deletebegin();
				break;
			case 4:
				deletelast();
				break;
			case 5:
				display();
				break;
			case 6:
				search();
				break;
			default:
				printf("Enter choice: ");
		}
	}
}

void insertionbegin()
{
	struct node *ptr;
	int item;
	ptr = (struct node *)malloc(sizeof(struct node));
	if(ptr==NULL)
	{
		printf("Overflow");
	}
	else
	{
		printf("\n Enter item value : ");
		scanf("%d",&item);
		if(head==NULL)
		{
			ptr->next=NULL;
			ptr->prev = NULL;
			ptr->data = item;
			head=ptr;
		}
		else
		{
			ptr->data=item;
			ptr->prev = NULL;
			ptr->next = head;
			head->prev =  ptr;
			head->ptr;
			
		}
		printf("\n Node inserted\n");
	}
}

void deletebegin()
{
	struct node *ptr;
	if(head==NULL)
	{
		printf("\nUNDERFLOW");
	}
	else if(head->next==NULL)
	{
		head=NULL;
		free(head);
		printf("\nnode deleted\n");
	}
	else
	{
		ptr=head;
		head=head->next;
		head->prev=NULL;
		free(ptr);
		printf("\nnode deleted \n");
	}
}

void display()
{
	struct node *ptr;
	ptr=head;
	while(ptr!=NULL)
	{
		printf("%d\n",ptr->data);
		ptr=ptr->head;
	}
}

void search()
{
	struct node *ptr;
	int item,i=0,flag;
	ptr=head;
	if(ptr==NULL)
	{
		printf("\n Empty List\n");
	}
	else
	{
		printf("\n Enter item\n");
		scanf("%d",&item);
		while(ptr!=NULL)
		{
			if(ptr->data==item)
			{
				printf("\nlocation %d",i+1);
				flag=0;
				break;
			}
			else
			{
				flag=1;
			}
			i++;
			ptr=ptr->next;
			{
				printf("\n item not found \n");
			}
		}
	}
}
