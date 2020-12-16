#include<stdio.h>
int shawanyi(int x)
{
	if(x<=0){
		return 0;
			}
	
	return x+shawanyi(x-1);
		
}
	int main(void)
	{
	int n;
printf("请输入一个大于零的数字\n");
	scanf("%d",&n);
		printf("%d",shawanyi(n));
	return 0;
	
	}
