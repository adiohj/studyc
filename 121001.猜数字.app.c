#include<stdio.h>
#include<string.h>
int main(void)
{
	char array_c[50];
	char a1[]="宝塔镇河妖";
	int x;
printf("想玩儿游戏吗，先回答一句是什么？天王盖地虎，_______________。\n");
scanf("%s",&array_c);
	if (strcmp(array_c,a1)==0)
	{
		printf("开始游戏\n");
		while(x!=15)
		{
 
			scanf("%d",&x);
			if(x==15)
			{
			printf("你太厉害了!\n");
			}
			else if(x>15 && x<=20)
			{
			printf("数字太大了\n");
			}
			else if(x<15  && x>=1)
			{
			printf("数字太小了\n");
			}
			
			else
			{
			printf("报错!!!");
			}
		}
	}
	else
	{
	printf("密码错误!!!!!!!!");
	}

return 0;
}
