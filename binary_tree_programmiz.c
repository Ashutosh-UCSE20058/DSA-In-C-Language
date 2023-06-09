#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

struct node{
	int item;
	struct node* left;
	struct node* right;
};

void preorder(int struct node* root)
{
	if(root==NULL)
		return;
	printf("%d->",root->item);
	preorder(root->left);
	preorder(root->right);
}

void inorder(int struct node* root)
{
	if(root==NULL)
		return;
	inorder(root->left);
	printf("%d->",root->item);
	inorder(root->right);
}

void postorder(int struct node* root)
{
	if(root==NULL)
		return;
	postorder(root->left);
	postorder(root->right);
	printf("%d->",root->item);
}

struct node* createnode(value)
{
	
}

