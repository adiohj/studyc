int x;
		int y;
		int group[20][10];
		for(x=0;x<20;x++)
		{
		for(y=0;y<10;y++)
		{
			group[x][y]=999;
		printf("%d ",group[x][y]);

		}
		printf("\n");
		}
		for(x=0;x<20;x++)
		{
		for(y=0;y<10;y++)
		{
			group[x][y]=0;
		printf("%d ",group[x][y]);

		}
		printf("\n");
		}
	return 0;
}
