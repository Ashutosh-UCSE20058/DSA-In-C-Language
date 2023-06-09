#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<stdbool.h>

struct node{
	int data;
	struct node *left;
	struct node *right;
};

struct node *newnode(int data)
{
	struct node *node = (struct node *)malloc(sizeof(struct node));
	node->data = data;
	node->left = NULL;
	node->right = NULL;
	return(node);
}

int depth(struct node *node)
{
	int d=0;
	while(node!=NULL)
	{
		d++;
		node = node->left;
	}
	return d;
}

bool is_perfect(struct node *root, int d, int level)
{
	if(root==NULL)
		return true;
	if (root->left == NULL && root->right ==NULL)
		return(d==level+1);
	if(root->left==NULL || root->right==NULL)
		return false;
	return is_perfect(root->left, d, level+1) &&
		is_perfect(root->right,d,level+1);
}

bool is_Perfect(struct node *root)
{
	int d = depth(root);
	return is_perfect(root,d,0);
}

int main()
{
	struct node *root=NULL;
	root = newnode(1);
	root->left = newnode(2);
	root->right = newnode(3);
	root->left->left = newnode(4);
	root->left->right  = newnode(5);
	root->right->left = newnode(6);
	
	if(is_Perfect(root))
		printf("The tree is a perfect binary tree\n");
	else
		printf("the tree is not a perfect binary tree\n");
}
