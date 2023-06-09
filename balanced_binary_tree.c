#include<stdio.h>
#include<stdlib.h>
#define bool int
#include<conio.h>

struct node{
	int item;
	struct node *left;
	struct node *right;
};

struct node *newnode(int item)
{
	struct node *node = (struct node *)malloc(sizeof(struct node));
	node->item = item;
	node->left = NULL;
	node->right = NULL;
	return(node);
}

bool checkheight(struct node *root,int *height)
{
	int leftheight=0,rightheight = 0;
	int l =0,r=0;
	if(root==NULL)
	{
		*height = 0;
		return 1;
	}
	
	l  = checkheight(root->left, &leftheight);
	r = checkheight(root->right, &rightheight);
	*height = (leftheight> rightheight ? leftheight : rightheight) +1;
	if((leftheight - rightheight>=2) || (rightheight - leftheight>=2))
		return 0;
	else
		return l&&r;
}

int main()
{
	int height=0;
	struct node *root = newnode(1);
	root->left = newnode(2);
	root->right = newnode(3);
	root->left->left = newnode(4);
	root->left->right = newnode(5);
	
	if(checkheight(root,&height))
		printf("The tree is balanced");
	else
		printf("The tree is not balanced");
}
