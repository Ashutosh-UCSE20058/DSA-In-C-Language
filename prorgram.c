#include<stdio.h>
#include<stdlib.h>



int main()
{	
	int i,n,sum=0;
	printf("Input the values:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("%d\n",i);
		sum+=i;
		
	}
	printf("\nThe Sum of natural numbers upto %d terms : %d \n",n,sum);
	return 0;
}

   
	

    
    

