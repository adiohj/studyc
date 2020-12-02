#include<stdio.h>
int main(void)
{
	
	int h,m,s;
	printf("时分秒转换器\n");
	scanf("%d",&s);
	h=s/3600;
	m=s/60%60;
	s%=60;
	printf("%02d:%02d:%02d\n",h,m,s);
	return 0;

}
