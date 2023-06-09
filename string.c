#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>



int main()
{
	char str[100];
	int i,size;
	
	printf("enter the size of array:\n");
	scanf("%d",&size);
	
	printf("enter the elements:\n");
	for(i=0;i<size;i++)
	{
		
		scanf("%d",&str[i]);
		
	}
	printf("the elements entered are:\n");
	for(i=0;i<size;i++)
	{
		printf("%d\t",str[i]);
	}
	return 0;
	
}

