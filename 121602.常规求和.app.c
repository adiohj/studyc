#include<stdio.h>
int main(void)
{
  int i=1;
  int n;
  int sum=0;
  printf("请输入一个数字\n");
  scanf("%d",&n);
	while(i<=n)
	{
	sum=sum+i;
	i++;
	}
		printf("%d\n",sum);
return 0;
}
