#include<stdio.h>
int main(void)
{
	int x;
	printf("请输入一个数字！\n");
scanf("%d
	  ",&x);
	if(x<1)
    printf("%d\n",x);
	 else if(x>=1 && x<10)
	printf("%d\n",2*x-1);
		else if(x>=10)
			printf("%d\n",3*x-11);
		return 0;
	

}
