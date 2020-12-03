#include<stdio.h>
int main(void)
{
	int x;
		int y;
		int group[][5]={
			{0,1,2,3,4},
			{5,6,7,8,9}
		};
		for(x=0;x<2;x++)
		{
		for(y=0;y<5;y++)
		{
		printf("%d ",group[x][y]);
		}
		printf("\n");
		}
	return 0;
}


