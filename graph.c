#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#define N 6
struct Graph
{
	struct node* head[N];
};

struct node
{
	int dest;
	struct node* next;
};

struct edge
{
	int src,dest;
};

struct Graph* creategraph(struct edge edges[], int n)
{
	unsigned i;
	struct Graph* graph = (struct Graph*)malloc(sizeof(struct Graph));
	for(i=0;i<N;i++)
	{
		graph->head[i] = NULL;
	}
	for(i=0;i<n;i++)
	{
		int src = edges[i].src;
		int dest  = edges[i].dest;
		struct node* newnode = (struct node*)malloc(sizeof(struct node));
		newnode->next = graph->head[src];
		graph->head[src]=newnode;
		
	}
	return graph;
}
void printgraph(struct Graph* graph)
{
	int i;
	for(i=0;i<N;i++)
	{
		struct node *ptr = graph->head[i];
		while(ptr!=NULL)
		{
			printf("(%d->%d)\t",%(i,(ptr->dest));
			ptr=ptr->next;
		}
		printf("\n");
	}
}

int main(void)
{
	struct edge edges[] = {
		{0,1},{1,2},{2,0},{2,1},{3,2},{4,5},{5,4}
	};
	int n = sizeof(edges)/sizeof(edges[0]);
	struct Graph *graph = creategraph(edges,n);
	printgraph(graph);
	return 0;
	
}
