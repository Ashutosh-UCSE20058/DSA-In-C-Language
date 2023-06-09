#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

struct Queue
{
	int front,rear,size;
	unsigned capacity;
	int* array;
	 
}
struct Queue* createqueue(unsigned capacity)
{
	struct Queue* queue = (struct Queue *)malloc(sizeof(struct Queue));
	queue->capacity = capacity;
	queue->front=queue->size=0;
	queue->rear = capacity-1;
	queue->array = (int *)malloc(queue->capacity * sizeof(int))
}
