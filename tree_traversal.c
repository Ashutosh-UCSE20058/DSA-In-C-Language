#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

struct node{
	int data;
	struct node *leftchild;
	struct node *rightchild;
};

struct node *root = NULL;

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
		parent=NULL;
		while(1)
		{
			parent = current;
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
				current=current->rightchild;
				if(current==NULL)
				{
					parent->rightchild = tempnode;
					return;
				}
			}
		}
	}
}

struct node *search(int data)
{
	struct node *current = root;
	while(current->data!=data)
	{
		if(current!=NULL)
			printf("%d",current->data);
		if(current->data>data)
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
	return current;
}

void preorder(struct node *root)
{
	if(root!=NULL)
	{
		printf("%d",root->data);
		preorder(root->leftchild);
		preorder(root->rightchild);
	}
}

void inorder(struct node *root)
{
	inorder(root->leftchild);
	printf("%d",root->data);
	inorder(root->rightchild);
}

void postorder(struct node *root)
{
	if(root!=NULL)
	{
		postorder(root->leftchild);
		postorder(root->rightchild);
		printf("%d",root->data);
	}
}

int main()
{
	int i;
	int array[7] = {27,14,35,10,19,31,42};
	for(i=0;i<7;i++)
		insert(array[i]);
	i=31;
	struct node *temp = search(i);
	if(temp!=NULL)
	{
		printf("[%d] ",temp->data);
		printf("\n");
	}
	else
	{
		printf("[x] element not found (%d)",i);
	}
	preorder(root);
	inorder(root);
	postorder(root);
	return;
}
