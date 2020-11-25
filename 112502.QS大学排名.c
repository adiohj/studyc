#include<stdio.h>
int main(void)
{

	int n;
		printf("QS大学排名查询\n");
	scanf("%d",&n);
		if(n==1)
		{
			printf("麻省理工学院\n");
		}
		else if(n==2)
		{
		printf("斯坦福大学\n");
		}
		else if(n==3)
		{
		printf("哈佛大学\n");
		}
		else if(n==4)
		{
		printf("牛津大学\n");
		}
		else if(n==5)
		{
		printf("加州理工大学\n");
		}
		else if(n==6)
		{
		printf("苏黎世联邦理工大学\n");
		}
		else if(n==7)
		{
		printf("剑桥大学\n");
		}
		else if(n==8)
		{
		printf("伦敦大学学院\n");
		}
		else if(n==9)
		{
		printf("帝国理工学院\n");
		}
			else if(n==10)
		{
		printf("芝加哥大学\n");
		}
		else
		{
		printf("其他输出错误，例如：“”老铁的排名太靠后了，请输入1-10“”\n");
		}
		return 0;
}
