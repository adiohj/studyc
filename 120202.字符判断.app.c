#include<stdio.h>
int main(void)
{
	char n;
	printf("游戏键盘指导\n\n");
		scanf("%c",&n);
	switch (n)
	{
	
		case 'A':printf("你在点击“左”键\n");break;
		case 'S':printf("你在点击“下”键\n");break;
		case 'W':printf("你在点击“上”键\n");break;
		case 'D':printf("你在点击“右”键\n");break;
	default:printf("输入错误，请输入\"AWSD\"\n");break;
	}
		return 0;
}
