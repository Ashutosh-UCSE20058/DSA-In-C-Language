#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

#define max_cols 5
#define max_rows 5

int main()
{
	char arr[max_cols][max_rows];
	int size,i,j;
	
	printf("Enter the size of the array:\n");
	scanf("%d",&size);
	
	printf("enter the elements:\n");
	for(i=0;i<max_cols;++i)
	{
		for(j=0;j<max_rows;++j)
		{
			printf("element [%d][%d]: ",i+1,j+1);
			scanf("%d",&arr[i][j]);
		}
	}
	
	printf("\n Displaying the values:\n");
	printf("displaying the elements one by one:\n ");
	for(i=0;i<max_cols;++i)
	{
		for(j=0;j<max_rows;++j)
		{
			printf("element [%d][%d]:%d\n",i+1,j+1,arr[i][j]);
			
		}
	}
	return 0;
}
