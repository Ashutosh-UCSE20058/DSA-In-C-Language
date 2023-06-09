#include<stdio.h>
#include<stdlib.h>
#define INF 9999999
#define V 5

int G[V][V]={
	{0,9,75,0,0},
	{9,0,95,19,42},
	{75.95,0,51,66},
	{0,19,51,0,31},
	{0,42,66,31,0}
};

int main()
{
	int noedge;
	int selected[V];
	
	selected[0]=1;
	
	int x;
	int y;
	
	printf("Edge: Weight \n");
	while(noedge< V-1)
	{
		int min = INF;
		x=0;
		int i=0;
		int j=0;
		y=0;
		for(i=0;i<V;i++)
		{
			if(selected[i]){
				for(j=0;j<V;j++){
					if(!selected[j] && G[i][j]){
						if(min>G[i][j]){
							min = G[i][j];
							x=i;
							y=j;
						}
					}
				}
			}
		}
		printf("%d - %d : %d\n",x,y,G[x][y]);
		selected[y]=1;
		noedge++;
	}
	return 0;
}
