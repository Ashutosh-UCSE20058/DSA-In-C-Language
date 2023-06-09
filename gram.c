#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main()
{
	char array[100],arr[100],ar3[100];
	int i,size,sum,last;
	int mm=1,ctr=0,j;
	printf("Enter the size:");
	scanf("%d",&size);
	
	printf("Enter the elements in the array:");
	for(i=0;i<size;i++)
	{
		printf("element:\n");
		scanf("%d",&array[i]);
		
	}
	
	for(i=0;i<size;i++)
	{
		arr[i]=array[i];
		ar3[i]=0;
	}
	
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			if(array[i]==arr[j])
			{
				ar3[i]=mm;
				mm++;
				
			}
		}
		mm=1;
	}
	
	for(i=0;i<size;i++)
	{
		if (ar3[i]==2)
		{
			ctr++;
		}
		


	}
	printf("The total number of duplicate elements found in the array is: %d \n", ctr);
    printf("\n\n");

	pritnf('Enetre the ')
	return 0;
	
}
