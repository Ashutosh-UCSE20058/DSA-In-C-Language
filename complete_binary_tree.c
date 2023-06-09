#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<stdbool.h>

struct node{
	int key;
	struct node *left,*right;
};

struct node *newnode(char k){
	struct node *node = (struct node *)malloc(sizeof(struct node));
	node->key=k;
	node->right = node->left = NULL;
	return node;
}

int countnumnodes(struct node *root){
	if(root==NULL){
		return (0);
	}
	return (1+ countnumnodes(root->left) + countnumnodes(root->right));
}

bool checkcomplete(struct node *root, int index, int numbernodes)
{
	if(root==NULL)
		return true;
	if(index>=numbernodes)
		return false;
	return (checkcomplete(root->left,2 * index + 1, numbernodes) && checkcomplete(root->right,2*index + 2, numbernodes));
}

int main()
{
	struct node *root = NULL;
	root = newnode(1);
	root->left = newnode(2);
	root->right = newnode(3);
	root->left->left = newnode(4);
	root->left->right = newnode(5);
	root->right->left = newnode(6);
	
	int node_count = countnumnodes(root);
	int index = 0;
	
	if(checkcomplete(root, index, node_count))
		printf("The tree is a complete binary tree\n");
	else
		printf("the tree is not a complete binary tree\n");
		
	
		
	return 0;
}
