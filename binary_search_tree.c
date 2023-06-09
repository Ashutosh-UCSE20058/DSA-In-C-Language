#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

struct node{
	int data;
	struct node *leftchild;
	struct node *rightchild;
};

struct node *root = NULL;


struct node *search(int data)
{
	struct node *current = root;
	while(current->data!=data)
	{
		if(current!=NULL)
		{
			printf("%d",current->data);
			if(current->data > data)
			{
				current = current->leftchild;
			}
			else
			{
				current=current->rightchild;
			}
			if(current==NULL)
			{
				return NULL;
			}
		}
	}
	return current;
}

void insert(int data)
{
	struct node *tempnode = (struct node *)malloc(sizeof(struct node));
	struct node *current;
	struct node *parent;
	
	tempnode->data = data;
	tempnode->leftchild = NULL;
	tempnode->rightchild = NULL;
	
	if(root==NULL)
	{
		root=tempnode;
	}
	else
	{
		current=root;
		parent = NULL;
		while(1)
		{
			parent=current;
			if(data<parent->data)
			{
				current=current->leftchild;
				if(current==NULL)
				{
					parent->leftchild = tempnode;
					return;
				}
			}
		
		else
		{
			current = current->rightchild;
			if(current==NULL)
			{
				parent->rightchild = tempnode;
				return;
			}
		}
	}
		
	}
}

void main()
{
	int i;
	int arr[7] = {27,14,35,10,19,31,42};
	for(i=0;i<7;i++)
		insert(arr[i]);
	i=31;
	struct node *temp = search(i);
	if(temp!=NULL)
	{
		printf("[x] element not found(%d)",i);
	}
	search(root);
	insert(root);
}
