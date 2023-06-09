#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	char str[100];
	int l=0;
	printf("Enter the string:\n");
	fgets(str,sizeof(str),stdin);
	
	printf("the string is:\n");
	printf("%s",str);
	
	while(str[l]!='\0')
	{
		printf("%c\n",l);
	}
	
}
