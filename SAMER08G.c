#include<stdio.h>

int a[1001], b[1001], c[1001];

int main()
{
	int t, flag, i;
	while(scanf("%d", &t) && t)
	{
		for(i=0; i<t; i++)
		{
			scanf("%d%d", &a[i], &b[i]);
			c[i]=0;
		}
		flag=0;
		for(i=0; i<t; i++)
		{
			if(i+b[i]<t && i+b[i]>=0 && c[i+b[i]]==0)
				c[i+b[i]]=a[i];
			else
			{
				flag=1;
				break;
			}
		}
		if(flag==1)
			printf("-1\n");
		else
		{
			for(i=0; i<t; i++)
				printf("%d ", c[i]);
			printf("\n");
		}
	}
	return 0;
}

