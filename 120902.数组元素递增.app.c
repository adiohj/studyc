#include<stdio.h>

int main(void)
{
int x;
		int y;
		int i=1;
		int group[9][10];
		for(x=0;x<9;x++)
		{
		for(y=0;y<10;y++)
		{
			group[x][y]=0;
		printf("%d ",group[x][y]);

		}
		printf("\n");
		}
	
		for(x=0;x<9;x++)
		{
		for(y=0;y<10;y++)
		{
			group[x][y]=i++;
		printf("%2d ",group[x][y]);

		}
		printf("\n");
		}
		
	return 0;
}
