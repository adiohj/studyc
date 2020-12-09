#include<stdio.h>
#include<string.h>
int main(void)
{
	char array_c[50];
	char a1[]="春节";
	char a2[]="端午节";
	char a3[]="中秋节";
	char a4[]="元宵节";

printf("吃货的日程总是被安排，请问现在是什么节？\n");
scanf("%s",&array_c);
	if (strcmp(array_c,a1)==0)
	{
 printf("给我安排饺子\n");
	}
	else if (strcmp(array_c,a2)==0)
		{
 printf("给我安排粽子\n");
	}
	else if (strcmp(array_c,a3)==0)
			{
 printf("给我安排月饼\n");
	}
	else if (strcmp(array_c,a4)==0)
			{
 printf("给我安排元宵\n");
	}
	else
	{
	printf("报错节日!!");
	}

return 0;
}
