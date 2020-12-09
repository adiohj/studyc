#include<stdio.h>
#include<string.h>
int main(void)
{
	char a1[]="hello,world!";
		char a2[]="HELLO,WORLD!";
		if(strcmp(a1,a2)==0)
		{
		
			printf("same\n");
		}
		else
		{
			printf("different\n");
		}

return 0;
}
